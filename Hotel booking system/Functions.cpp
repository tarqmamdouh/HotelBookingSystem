#include"main.h"
#include <string>
using namespace std;



string Converts(String ^ s)
{
	string x;
	x = marshal_as<std::string>(s);
	return x;
}

string Search_Hotel_ID(int ID)
{
	
	ReadAllHotels(Hotelsarr, NHotels, NHotelsID, NPricePerNight, NincludeCity);

	for (int i = 0; i < NHotels; i++)
	{
		if (Hotelsarr[i].HotelID == ID)
		{
			return Hotelsarr[i].HotelName;
		}
	}
}

int Search_Hotel_Name(string name)
{
	ReadAllHotels(Hotelsarr, NHotels, NHotelsID, NPricePerNight, NincludeCity);

	for (int i = 0; i < NHotels; i++)
	{
		if (Hotelsarr[i].HotelName == name)
		{
			return Hotelsarr[i].HotelID;
		}
	}
}

int Search_Hotel_PPN(string name)
{

	ReadAllHotels(Hotelsarr, NHotels, NHotelsID, NPricePerNight, NincludeCity);

	for (int i = 0; i < NHotels; i++)
	{
		if (Hotelsarr[i].HotelName == name)
		{
			return Hotelsarr[i].PricePerNight;
		}
	}
}

void ReadAllCities(City Citiesarr[], int &NCities, int &NCitiesID, int &NumHotels)
{
	NCities = 0, NCitiesID = 0, NumHotels = 0;

	fstream file(".\\data\\Cities.txt");
	string unused;
	long long lines = 0;
	while (getline(file, unused))
	{
		if (lines % 4 == 1)
		{
			Citiesarr[NCities].CityName = unused;
			NCities++;
		}
		else if (lines % 4 == 2)
		{
			Citiesarr[NCitiesID].CityID = atoi(unused.c_str());
			NCitiesID++;
		}
		else if (lines % 4 == 3)
		{
			Citiesarr[NumHotels].NumbersOfHotels = atoi(unused.c_str());
			NumHotels++;
		}
		lines++;
	}
	file.close();
}

void ReadAllRequests(BookingRequest Requestsarr[],int &NNOR,int &NNON ,int &NRID ,int &NCost ,int  &NHotelID)
{
	NNOR = 0, NNON = 0, NRID = 0, NCost = 0, NHotelID = 0;
	ifstream file(".\\data\\Requests.txt");
	string unused;
	long long lines = 0;
	while (getline(file, unused))
	{
		if (lines % 6 == 1)
		{
			Requestsarr[NNOR].NumbersOfRooms = atoi(unused.c_str());
			NNOR++;
		}
		else if (lines % 6 == 2)
		{
			Requestsarr[NNON].NumberOfNights = atoi(unused.c_str());
			NNON++;
		}
		else if (lines % 6 == 3)
		{
			Requestsarr[NRID].RequestID = atoi(unused.c_str());
			NRID++;
		}
		else if (lines % 6 == 4)
		{
			Requestsarr[NCost].RequestCost= atoi(unused.c_str());
			NCost++;
		}
		else if (lines % 6 == 5)
		{
			Requestsarr[NHotelID].HotelID = atoi(unused.c_str());
			NHotelID++;
		}
		
		lines++;
	}
	file.close();
}

void ReadAllHotels(Hotel Hotelsarr[], int &NHotels, int &NHotelsID, int &NPricePerNight,int &NincludeCity)
{
	NHotels = 0, NHotelsID = 0, NPricePerNight = 0, NincludeCity = 0;
	ifstream Hfile(".\\data\\Hotels.txt");
	string Hunused;
	long long lines=0;
	while (getline(Hfile, Hunused))
	{
		if (lines % 5 == 1)
		{
			Hotelsarr[NHotels].HotelName = Hunused;
			NHotels++;
		}
		else if (lines % 5 == 2)
		{
			Hotelsarr[NHotelsID].HotelID = atoi(Hunused.c_str());
			NHotelsID++;
		}
		else if (lines % 5 == 3)
		{
			Hotelsarr[NPricePerNight].PricePerNight = atoi(Hunused.c_str());
			NPricePerNight++;
		}
		else if (lines % 5 == 4)
		{
			Hotelsarr[NincludeCity].includeCity = atoi(Hunused.c_str());
			NincludeCity++;
		}
		lines++;
	}
	Hfile.close();
}

void Cityfun(City all[], int &Citis , string m)
{
    all[Citis].CityID=Citis;
	all[Citis].CityName = m;
}

void SaveCities(City Citiesarr[], int NCities)
{
	ofstream City (".\\data\\Cities.txt", ios::app);
	for (int i = 0; i < NCities ; i++)
	{
		City << "-------------------------------------------------------------------";
		City << endl;
		City << Citiesarr[i].CityName << endl;
		City << Citiesarr[i].CityID << endl;
		City << Citiesarr[i].NumbersOfHotels << endl;
		
	}
	City.close();
}

void SaveRequests(BookingRequest Requestsarr[], int NNOR)
{
	ofstream Request(".\\data\\Requests.txt", ios::app);
	for (int i = 0; i < NNOR; i++)
	{
		if (Check_Hotel(Requestsarr[i].HotelID))
		{
			Request << "-------------------------------------------------------------------";
			Request << endl;
			Request << Requestsarr[i].NumbersOfRooms << endl;
			Request << Requestsarr[i].NumberOfNights << endl;
			Request << Requestsarr[i].RequestID << endl;
			Request << Requestsarr[i].RequestCost << endl;
			Request << Requestsarr[i].HotelID << endl;
		}
	}
		Request.close();
}

void addHotel(Hotel allHotels[],int &hotels,City allCities[] , string m)
{

    allHotels[hotels].PricePerNight=atoi(m.c_str());

    cout<<"Location";
    cin>>allHotels[hotels].includeCity;

    allCities[allHotels[hotels].includeCity].hotels[allCities[allHotels[hotels].includeCity].NumbersOfHotels];
    allCities[allHotels[hotels].includeCity].NumbersOfHotels++;
    allHotels[hotels].HotelID=hotels;
    hotels++;

    cout<<"Hotel has been Added! "<<endl;
}

void addRequest( BookingRequest allRequests[],int &requests,Hotel allHotels[])
{
    cout<<"please enter Hotel ID: ";
    cin>>allRequests[requests].HotelID;

    cout<<"please enter number of rooms: ";
    cin>>allRequests[requests].NumbersOfRooms;

    cout<<"please enter number of nights: ";
    cin>>allRequests[requests].NumberOfNights;
    cout<<"total cost is : ";
    cout<<allHotels[allRequests[requests].HotelID].PricePerNight*allRequests[requests].NumberOfNights*allRequests[requests].NumbersOfRooms<<endl;
}

void listOfCitis(City all[],int Citis)
{
    cout<<"ID \t"<<"City Name \t"<<"Numbers Of Hotels \t"<<endl;
    for (int i=0;i<Citis;i++)
    {
        cout<<all[i].CityID<<"\t"<<all[i].CityName<<"\t \t"<<all[i].NumbersOfHotels<<endl;
    }
}

void listOfHotels(Hotel all[],int hotels,City allCities[])
{
    cout<<"ID \t"<<"Hotel Name \t"<<"Price Per Night \t"<<"City Name "<<endl;
    for (int i=0;i<hotels;i++)
    {
        cout<<all[i].HotelID<<"\t"<<all[i].HotelName<<"\t\t"<<all[i].PricePerNight<<"\t\t\t"<<allCities[all[i].includeCity].CityName<<endl<<endl;

    }

}

string CityNAme(int id)
{
	ReadAllCities(Citiesarr, NCities, NCitiesID, NumHotels);
	for (int i = 0; i < NCities; i++)
	{
		if (id == Citiesarr[i].CityID)
		{
			return Citiesarr[i].CityName;
		}
	}
}

int Get_City_ID(string name){
	ReadAllCities(Citiesarr, NCities, NCitiesID, NumHotels);
	for (int i = 0; i < NCities; i++)
	{
		if (name == Citiesarr[i].CityName)
		{
			return Citiesarr[i].CityID;
		}
	}
}


void SaveHotels(Hotel Hotelsarr[], int NHotels)
{
	ofstream Hotel(".\\data\\Hotels.txt");
	for (int i = 0; i < NHotels; i++)
	{
		if (Check_city(Citiesarr, Hotelsarr[i].includeCity))
		{
			Hotel << "-------------------------------------------------------------------";
			Hotel << endl;
			Hotel << Hotelsarr[i].HotelName << endl;
			Hotel << Hotelsarr[i].HotelID << endl;
			Hotel << Hotelsarr[i].PricePerNight << endl;
			Hotel << Hotelsarr[i].includeCity << endl;
		}
	}
	Hotel.close();
}

void Increase_Num_of_Hotels(City Citiesarr[],int id){
	/***************************((Increase))***************************************************/
	ReadAllCities(Citiesarr, NCities, NCitiesID, NumHotels);

	for (int i = 0; i < NCities; i++)
	{
		if (id == Citiesarr[i].CityID)
		{
			Citiesarr[i].NumbersOfHotels = Citiesarr[i].NumbersOfHotels + 1;
		}
	}
	/***********************************((Save))*******************************************/
	String ^ m;
	string std;
	m = ".\\data\\Cities.txt";
	std = msclr::interop::marshal_as<std::string>(m);
	remove(std.c_str());
	ofstream City(".\\data\\Cities.txt", ios::app);
	SaveCities(Citiesarr, NCities);
	City.close();
	/***********************************((end))*******************************************/
}

void Decrease_Num_of_Hotels(City Citiesarr[], int id){
	/***************************((Decrease))***************************************************/
	ReadAllCities(Citiesarr, NCities, NCitiesID, NumHotels);

	for (int i = 0; i < NCities; i++)
	{
		if (id == Citiesarr[i].CityID  )
		{
			Citiesarr[i].NumbersOfHotels = Citiesarr[i].NumbersOfHotels - 1;
		}
	}
	/***********************************((Save))*******************************************/
	String ^ m;
	string std;
	m = ".\\data\\Cities.txt";
	std = msclr::interop::marshal_as<std::string>(m);
	remove(std.c_str());
	ofstream City(".\\data\\Cities.txt", ios::app);
	SaveCities(Citiesarr, NCities);
	City.close();
	/***********************************((end))*******************************************/
}

bool Check_city(City Citiesarr[], int id){

	ReadAllCities(Citiesarr, NCities, NCitiesID, NumHotels);

	for (int i = 0; i < NCities; i++)
	{
		if (id == Citiesarr[i].CityID)
		{
			return true;
		}

	}
	return false;
}

bool Check_Hotel(int id){


	ReadAllHotels(Hotelsarr, NHotels, NHotelsID, NPricePerNight, NincludeCity);

	for (int i = 0; i < NHotels; i++)
	{
		if (id == Hotelsarr[i].HotelID)
		{
			return true;
		}
	}
	return false;

}

