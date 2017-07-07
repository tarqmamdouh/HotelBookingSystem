#pragma once
#include <msclr\marshal_cppstd.h>
#include <string>
#include <fstream>
#include <sstream>
#include <iomanip>
#include "main.h"
namespace Hotelbookingsystem {
	using namespace msclr::interop;

	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::IO;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AddCity
	/// </summary>
	public ref class AddCity : public System::Windows::Forms::Form
	{
	public:
		AddCity(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AddCity()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  New;
	public: System::Windows::Forms::PictureBox^  BrowsePic;
	private:


	private: System::Windows::Forms::Label^  CityName;

	private: System::Windows::Forms::Label^  Citydes;
	private: System::Windows::Forms::RichTextBox^  Description;


	public: System::Windows::Forms::Button^  Browse;
	private: System::Windows::Forms::Button^  Add;
	private: System::Windows::Forms::TextBox^  CN;
	public:

	public:
	private:





	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(AddCity::typeid));
			this->New = (gcnew System::Windows::Forms::Label());
			this->BrowsePic = (gcnew System::Windows::Forms::PictureBox());
			this->CityName = (gcnew System::Windows::Forms::Label());
			this->Citydes = (gcnew System::Windows::Forms::Label());
			this->Description = (gcnew System::Windows::Forms::RichTextBox());
			this->Browse = (gcnew System::Windows::Forms::Button());
			this->Add = (gcnew System::Windows::Forms::Button());
			this->CN = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BrowsePic))->BeginInit();
			this->SuspendLayout();
			// 
			// New
			// 
			this->New->AutoSize = true;
			this->New->BackColor = System::Drawing::Color::Transparent;
			this->New->Font = (gcnew System::Drawing::Font(L"Imprint MT Shadow", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->New->ForeColor = System::Drawing::Color::Azure;
			this->New->Location = System::Drawing::Point(4, 9);
			this->New->Name = L"New";
			this->New->Size = System::Drawing::Size(294, 75);
			this->New->TabIndex = 0;
			this->New->Text = L"New City";
			this->New->Click += gcnew System::EventHandler(this, &AddCity::label1_Click);
			// 
			// BrowsePic
			// 
			this->BrowsePic->BackColor = System::Drawing::Color::Transparent;
			this->BrowsePic->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BrowsePic.BackgroundImage")));
			this->BrowsePic->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->BrowsePic->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->BrowsePic->Location = System::Drawing::Point(624, 12);
			this->BrowsePic->Name = L"BrowsePic";
			this->BrowsePic->Size = System::Drawing::Size(165, 152);
			this->BrowsePic->TabIndex = 1;
			this->BrowsePic->TabStop = false;
			// 
			// CityName
			// 
			this->CityName->AutoSize = true;
			this->CityName->BackColor = System::Drawing::Color::Transparent;
			this->CityName->Font = (gcnew System::Drawing::Font(L"Poor Richard", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CityName->ForeColor = System::Drawing::Color::Black;
			this->CityName->Location = System::Drawing::Point(8, 122);
			this->CityName->Name = L"CityName";
			this->CityName->Size = System::Drawing::Size(111, 28);
			this->CityName->TabIndex = 3;
			this->CityName->Text = L"City Name";
			// 
			// Citydes
			// 
			this->Citydes->AutoSize = true;
			this->Citydes->BackColor = System::Drawing::Color::Transparent;
			this->Citydes->Font = (gcnew System::Drawing::Font(L"Poor Richard", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Citydes->ForeColor = System::Drawing::Color::Black;
			this->Citydes->Location = System::Drawing::Point(6, 180);
			this->Citydes->Name = L"Citydes";
			this->Citydes->Size = System::Drawing::Size(116, 28);
			this->Citydes->TabIndex = 5;
			this->Citydes->Text = L"Description";
			// 
			// Description
			// 
			this->Description->BackColor = System::Drawing::Color::White;
			this->Description->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Description->Font = (gcnew System::Drawing::Font(L"Lucida Bright", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Description->ForeColor = System::Drawing::Color::Black;
			this->Description->Location = System::Drawing::Point(124, 189);
			this->Description->Name = L"Description";
			this->Description->Size = System::Drawing::Size(351, 184);
			this->Description->TabIndex = 6;
			this->Description->Text = L"";
			// 
			// Browse
			// 
			this->Browse->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->Browse->FlatAppearance->BorderColor = System::Drawing::Color::Blue;
			this->Browse->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Browse->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->Browse->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Browse->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Browse.Image")));
			this->Browse->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Browse->Location = System::Drawing::Point(691, 170);
			this->Browse->Name = L"Browse";
			this->Browse->Size = System::Drawing::Size(97, 23);
			this->Browse->TabIndex = 8;
			this->Browse->Text = L"    Browse...";
			this->Browse->UseVisualStyleBackColor = true;
			this->Browse->Click += gcnew System::EventHandler(this, &AddCity::Browse_Click);
			// 
			// Add
			// 
			this->Add->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Add->BackColor = System::Drawing::Color::Transparent;
			this->Add->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Add->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->Add->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Add->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Add->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LightSteelBlue;
			this->Add->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Add->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Add->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Add.Image")));
			this->Add->ImageAlign = System::Drawing::ContentAlignment::TopRight;
			this->Add->Location = System::Drawing::Point(705, 394);
			this->Add->Name = L"Add";
			this->Add->Size = System::Drawing::Size(84, 34);
			this->Add->TabIndex = 9;
			this->Add->Text = L"Add";
			this->Add->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Add->UseVisualStyleBackColor = false;
			this->Add->Click += gcnew System::EventHandler(this, &AddCity::Add_Click);
			// 
			// CN
			// 
			this->CN->Location = System::Drawing::Point(124, 131);
			this->CN->Name = L"CN";
			this->CN->Size = System::Drawing::Size(351, 20);
			this->CN->TabIndex = 10;
			// 
			// AddCity
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(800, 440);
			this->Controls->Add(this->CN);
			this->Controls->Add(this->Add);
			this->Controls->Add(this->Browse);
			this->Controls->Add(this->Description);
			this->Controls->Add(this->Citydes);
			this->Controls->Add(this->CityName);
			this->Controls->Add(this->BrowsePic);
			this->Controls->Add(this->New);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"AddCity";
			this->Text = L"Add City";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &AddCity::AddCity_FormClosed);
			this->Load += gcnew System::EventHandler(this, &AddCity::AddCity_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BrowsePic))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		String ^ m;
		String ^ path;
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}

private: System::Void Browse_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (CN->Text=="")
				 MessageBox::Show("Please Choose your City Name First", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			 else
			 {
				 /**************************************((Get the image))**************************************************************/
				 Stream^  myStream;
				 String^ m;
				 openFileDialog1->InitialDirectory = "c:\\";
				 openFileDialog1->Filter = "png images|*.png|jpg images|*.jpg|jpeg images|*.jpeg|bmp images|*.bmp";
				 openFileDialog1->FilterIndex = 2;
				 openFileDialog1->RestoreDirectory = true;
				 if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
				 {
					 if ((myStream = openFileDialog1->OpenFile()) != nullptr)
					 {
						 //--------------------- ((Resize)) -----------------------------
						 System::ComponentModel::Container ^components;
						 Bitmap ^ Picture;
						 m = openFileDialog1->FileName;
						 path = Path::GetFullPath(openFileDialog1->FileName);
						 Picture = gcnew Bitmap(m);
						 Bitmap ^ Newpic = gcnew Bitmap(Picture, 165, 152);
						 Picture = Newpic;
						 Invalidate();
						 BrowsePic->Image = Picture;

					 }
				 }
			 }

}

private: System::Void Add_Click(System::Object^  sender, System::EventArgs^  e) {
			 bool y = true;
			 if (CN->Text == "" )
				 MessageBox::Show("City Name Cannot Be Empty , Operation Could Not Be Complete", "OPERATION FILED", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			 else
			 {
				 /***************************************************((Adding City To Data*******************************************************************/
				 if (Description->Text == "")
				  Description->Text = "No Description Available";
				 String ^ s2;
				 s2 = ".\\data\\" + CN->Text + ".txt";
				 string s = msclr::interop::marshal_as<std::string>(s2);
				 if (ifstream(s.c_str()))
				 {
					 MessageBox::Show("This city already exists Please choose another Name !!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

				 }
				 else
				 {
					
					 NCities = 0, NCitiesID = 0, NumHotels = 0;
					 ReadAllCities(Citiesarr, NCities, NCitiesID, NumHotels);
					 ofstream file(s.c_str());
					 s2 = Description->Text;
					 s = marshal_as<std::string>(s2);
					 file << s << endl;
					 file.close();
					 ofstream City(".\\data\\Cities.txt", ios::app);
					 s2 = CN->Text;
					 s = marshal_as<std::string>(s2);
					 City << "-------------------------------------------------------------------";
					 City << endl;
					 City << s << endl;
					 /*************************************((ID))********************************************************************/
					 if (NCities == 0)
					 {
					  City << NCities << endl;
					 }
					 else
					 {
						 for (int i = 0; i <= NCities; i++)
						 {
							 bool x = false;
							 for (int j = 0; j <= NCities; j++)
							 {
								 if (Citiesarr[j].CityID == i)
								 {
									 x = true;
									 break;
								 }
							 }
							 if (x == false)
							 {
								 City << i << endl;
								 y = false;
								 break;
							 }
						 }
						 if (y)
						 City << NCities << endl;

					 }
					 /*********************************************************************************************************/
					 City << "0" << endl;
					 City.close();
					 //---------------------((Copy image))------------------------------------------
					 m = path;
					 marshal_context context;
					 LPCTSTR lm = context.marshal_as<const TCHAR*>(m);
					 m = ".\\images\\Cities\\" + CN->Text + ".jpg";
					 LPCTSTR tm = context.marshal_as<const TCHAR*>(m);
					 CopyFile(lm, tm, 0);
					 /******************************************************************************************************************/
					 this->Close();
				 }
				 /*********************************************((End of Adding))*********************************************************************/
			 }
}
   private: System::Void AddCity_Load(System::Object^  sender, System::EventArgs^  e) {
				this->Owner->Enabled = false;
   }
private: System::Void AddCity_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
			 this->Owner->Enabled = true;
			 
}
		

};
}