#include <iostream>
#include<string>
#include <limits>
#include <fstream>
#include <algorithm>
#include <msclr\marshal_cppstd.h>
#include <stdio.h>
using namespace std;
using namespace msclr::interop;
using namespace std;
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::IO;
using namespace System::Drawing;

struct City{
    int CityID;
    string CityName;
    int NumbersOfHotels= 0;
    int hotels[10];
};

struct Hotel{
	int HotelID;
	string HotelName;
	int PricePerNight;
	int includeCity;
};


struct BookingRequest{

int RequestID;
int NumbersOfRooms;
int NumberOfNights;
int HotelID;
int RequestCost;
};

static int  NCities = 0, NCitiesID = 0, NumHotels = 0;
static  int NHotels = 0, NHotelsID = 0, NPricePerNight = 0, NincludeCity = 0;
static int NNOR = 0, NNON = 0, NRID = 0, NCost = 0, NHotelID=0;
static  City Citiesarr[9000];
static  Hotel Hotelsarr[9000];
static  BookingRequest Requestsarr[9000];

string Converts(String ^ s);

void SaveCities(City Citiesarr[], int NCities);

string Search_Hotel_ID(int ID);

int Search_Hotel_PPN(string name);

int Search_Hotel_Name(string name);

void ReadAllCities(City all[], int &NCities, int &NCitiesID,int &NumHotels);

void ReadAllHotels(Hotel Hotelsarr[], int &NHotels, int &NHotelsID, int &NPricePerNight, int &NincludeCity);

void ReadAllRequests(BookingRequest Requestsarr[], int &NNOR, int &NNON, int &NRID, int &NCost, int  &NHotelID);

void Cityfun(City all[],static int &Citis, string m);

void addHotel(Hotel allHotels[],int &hotels,City allCities[]);

void addRequest(BookingRequest allRequests[],int &requests,Hotel allHotels[]);

void listOfCitis(City all[],int Citis);

void listOfHotels(Hotel all[],int hotels,City allCities[]);

void SaveRequests(BookingRequest Requestsarr[], int NNOR);

string CityNAme(int id);

int Get_City_ID(string name);

void SaveHotels(Hotel hotelarr[], int NCities);

void Increase_Num_of_Hotels(City Citiesarr[], int id);

bool Check_city(City Citiesarr[], int id);

void Decrease_Num_of_Hotels(City Citiesarr[], int id);

bool Check_Hotel(int id); 


