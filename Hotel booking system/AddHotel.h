#pragma once
#include <msclr\marshal_cppstd.h>
#include <string>
#include <fstream>
#include "AddCity.h"
#include "CityList.h"
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
	/// Summary for AddHotel
	/// </summary>
	public ref class AddHotel : public System::Windows::Forms::Form
	{
	public:
		AddHotel(void)
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
		~AddHotel()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	protected:
	private: System::Windows::Forms::Label^  HName;

	public: System::Windows::Forms::PictureBox^  BrowsePic2;
	private: System::Windows::Forms::TextBox^  HN;
	public:

	public:
	private:

	private:


	private: System::Windows::Forms::Label^  PPn;
	public:

	private: System::Windows::Forms::TextBox^  Price;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  CityID;
	private: System::Windows::Forms::LinkLabel^  List;





	private: System::Windows::Forms::Button^  ADD;

	private: System::Windows::Forms::Label^  NewH;
	public: System::Windows::Forms::Button^  Browse;

	public:

	private:





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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(AddHotel::typeid));
			this->HName = (gcnew System::Windows::Forms::Label());
			this->BrowsePic2 = (gcnew System::Windows::Forms::PictureBox());
			this->HN = (gcnew System::Windows::Forms::TextBox());
			this->PPn = (gcnew System::Windows::Forms::Label());
			this->Price = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->CityID = (gcnew System::Windows::Forms::TextBox());
			this->List = (gcnew System::Windows::Forms::LinkLabel());
			this->ADD = (gcnew System::Windows::Forms::Button());
			this->NewH = (gcnew System::Windows::Forms::Label());
			this->Browse = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BrowsePic2))->BeginInit();
			this->SuspendLayout();
			// 
			// HName
			// 
			this->HName->AutoSize = true;
			this->HName->BackColor = System::Drawing::Color::Transparent;
			this->HName->Font = (gcnew System::Drawing::Font(L"Rockwell", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->HName->ForeColor = System::Drawing::Color::Honeydew;
			this->HName->Location = System::Drawing::Point(13, 115);
			this->HName->Name = L"HName";
			this->HName->Size = System::Drawing::Size(77, 27);
			this->HName->TabIndex = 1;
			this->HName->Text = L"Name";
			// 
			// BrowsePic2
			// 
			this->BrowsePic2->BackColor = System::Drawing::Color::Transparent;
			this->BrowsePic2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BrowsePic2.BackgroundImage")));
			this->BrowsePic2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->BrowsePic2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->BrowsePic2->Location = System::Drawing::Point(622, 17);
			this->BrowsePic2->Name = L"BrowsePic2";
			this->BrowsePic2->Size = System::Drawing::Size(165, 152);
			this->BrowsePic2->TabIndex = 9;
			this->BrowsePic2->TabStop = false;
			this->BrowsePic2->Click += gcnew System::EventHandler(this, &AddHotel::BrowsePic2_Click);
			// 
			// HN
			// 
			this->HN->Font = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->HN->Location = System::Drawing::Point(93, 121);
			this->HN->Name = L"HN";
			this->HN->Size = System::Drawing::Size(309, 20);
			this->HN->TabIndex = 11;
			// 
			// PPn
			// 
			this->PPn->AutoSize = true;
			this->PPn->BackColor = System::Drawing::Color::Transparent;
			this->PPn->Font = (gcnew System::Drawing::Font(L"Rockwell", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PPn->ForeColor = System::Drawing::Color::Honeydew;
			this->PPn->Location = System::Drawing::Point(11, 167);
			this->PPn->Name = L"PPn";
			this->PPn->Size = System::Drawing::Size(180, 27);
			this->PPn->TabIndex = 12;
			this->PPn->Text = L"Price Per Night";
			// 
			// Price
			// 
			this->Price->Location = System::Drawing::Point(191, 172);
			this->Price->MaxLength = 3;
			this->Price->Name = L"Price";
			this->Price->Size = System::Drawing::Size(48, 20);
			this->Price->TabIndex = 13;
			this->Price->Tag = L"$";
			this->Price->TextChanged += gcnew System::EventHandler(this, &AddHotel::Price_TextChanged);
			this->Price->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &AddHotel::Price_KeyPress);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Rockwell", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Honeydew;
			this->label1->Location = System::Drawing::Point(239, 169);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(25, 27);
			this->label1->TabIndex = 14;
			this->label1->Text = L"$";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Rockwell", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Honeydew;
			this->label2->Location = System::Drawing::Point(13, 213);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 27);
			this->label2->TabIndex = 15;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Rockwell", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Honeydew;
			this->label3->Location = System::Drawing::Point(11, 213);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(138, 27);
			this->label3->TabIndex = 16;
			this->label3->Text = L"Location ID";
			// 
			// CityID
			// 
			this->CityID->Location = System::Drawing::Point(155, 217);
			this->CityID->Name = L"CityID";
			this->CityID->Size = System::Drawing::Size(109, 20);
			this->CityID->TabIndex = 17;
			this->CityID->Tag = L"$";
			// 
			// List
			// 
			this->List->AutoSize = true;
			this->List->BackColor = System::Drawing::Color::Transparent;
			this->List->Cursor = System::Windows::Forms::Cursors::Hand;
			this->List->LinkColor = System::Drawing::Color::Black;
			this->List->Location = System::Drawing::Point(270, 224);
			this->List->Name = L"List";
			this->List->Size = System::Drawing::Size(81, 13);
			this->List->TabIndex = 18;
			this->List->TabStop = true;
			this->List->Text = L"Need City List \?";
			this->List->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &AddHotel::linkLabel1_LinkClicked);
			// 
			// ADD
			// 
			this->ADD->BackColor = System::Drawing::Color::Transparent;
			this->ADD->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ADD->FlatAppearance->BorderColor = System::Drawing::Color::Navy;
			this->ADD->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Navy;
			this->ADD->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Gray;
			this->ADD->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ADD->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Bold));
			this->ADD->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ADD.Image")));
			this->ADD->ImageAlign = System::Drawing::ContentAlignment::TopRight;
			this->ADD->Location = System::Drawing::Point(704, 405);
			this->ADD->Name = L"ADD";
			this->ADD->Size = System::Drawing::Size(84, 34);
			this->ADD->TabIndex = 21;
			this->ADD->Text = L"Add";
			this->ADD->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			this->ADD->UseVisualStyleBackColor = false;
			this->ADD->Click += gcnew System::EventHandler(this, &AddHotel::ADD_Click);
			// 
			// NewH
			// 
			this->NewH->AutoSize = true;
			this->NewH->BackColor = System::Drawing::Color::Transparent;
			this->NewH->Font = (gcnew System::Drawing::Font(L"Imprint MT Shadow", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NewH->ForeColor = System::Drawing::Color::Azure;
			this->NewH->Location = System::Drawing::Point(12, 11);
			this->NewH->Name = L"NewH";
			this->NewH->Size = System::Drawing::Size(331, 75);
			this->NewH->TabIndex = 22;
			this->NewH->Text = L"New Hotel";
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
			this->Browse->Location = System::Drawing::Point(690, 175);
			this->Browse->Name = L"Browse";
			this->Browse->Size = System::Drawing::Size(97, 23);
			this->Browse->TabIndex = 23;
			this->Browse->Text = L"    Browse...";
			this->Browse->UseVisualStyleBackColor = true;
			this->Browse->Click += gcnew System::EventHandler(this, &AddHotel::Browse_Click_1);
			// 
			// AddHotel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(800, 451);
			this->Controls->Add(this->Browse);
			this->Controls->Add(this->NewH);
			this->Controls->Add(this->ADD);
			this->Controls->Add(this->List);
			this->Controls->Add(this->CityID);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Price);
			this->Controls->Add(this->PPn);
			this->Controls->Add(this->HN);
			this->Controls->Add(this->BrowsePic2);
			this->Controls->Add(this->HName);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"AddHotel";
			this->Text = L"Add Hotel";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &AddHotel::AddHotel_FormClosed);
			this->Load += gcnew System::EventHandler(this, &AddHotel::AddHotel_Load);
			this->EnabledChanged += gcnew System::EventHandler(this, &AddHotel::AddHotel_EnabledChanged);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BrowsePic2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		CityList ^ L = gcnew CityList();
		String ^ Path;
	private: System::Void Browse2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void BrowsePic2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void linkLabel1_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
				 L->Owner = this;
				 L->ShowDialog();
	}
	private: System::Void Browse_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void Browse_Click_1(System::Object^  sender, System::EventArgs^  e) {
				 /**************************************((Get the image))**************************************************************/
				 Stream^  myStream;
				 String^ m;
				 OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
				 openFileDialog1->InitialDirectory = "c:\\";
				 openFileDialog1->Filter = "png images|*.png|jpg images|*.jpg|jpeg images|*.jpeg|bmp images|*.bmp";
				 openFileDialog1->FilterIndex = 2;
				 openFileDialog1->RestoreDirectory = true;
				 if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
				 {
					 if ((myStream = openFileDialog1->OpenFile()) != nullptr)
					 {
						 //---------------------((Resize))-----------------------------
						 System::ComponentModel::Container ^components;
						 Bitmap ^ Picture;
						 m = openFileDialog1->FileName;
						 Path = Path::GetFullPath(openFileDialog1->FileName);
						 Picture = gcnew Bitmap(m);
						 Bitmap ^ Newpic = gcnew Bitmap(Picture, 165, 152);
						 Picture = Newpic;
						 Invalidate();
						 BrowsePic2->Image = Picture;
					 }
				 }
	}

	private: System::Void AddHotel_Load(System::Object^  sender, System::EventArgs^  e) {
				 this->Owner->Enabled = false;
	}
	private: System::Void AddHotel_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
				 this->Owner->Enabled = true;
	}
	private: System::Void ADD_Click(System::Object^  sender, System::EventArgs^  e) {
				 bool y = true;
				 if (HN->Text == "" || Price->Text == "" || CityID->Text == "")
					 MessageBox::Show("One or More Text Fields are Empty Operation Could Not Be Complete", "OPERATION FILED", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				 else
				 {
					 if (Check_city(Citiesarr, atoi(Convert(CityID->Text).c_str()))) //check if the id exists....
					 {
						 NHotels = 0; NHotelsID = 0; NPricePerNight = 0; NincludeCity = 0;
						 ReadAllHotels(Hotelsarr, NHotels, NHotelsID, NPricePerNight, NincludeCity);

						 ofstream Hotel(".\\data\\Hotels.txt", ios::app);
						 Hotel << "-------------------------------------------------------------------";
						 Hotel << endl;
						 Hotel << Convert(HN->Text) << endl;
						 //start id
						 if (NHotels == 0){
							 Hotel << NHotels << endl;
						 }
						 else{
							 for (int i = 0; i < NHotels; i++){
								 bool x = false;
								 for (int j = 0; j <= NHotels; j++){
									 if (Hotelsarr[j].HotelID == i){
										 x = true;
										 break;
									 }
								 }
								 if (x == false){
									 Hotel << i << endl;
									 y = false;
									 break;
								 }
							 }
							 if (y)
								 Hotel << NHotels << endl;

						 }
						 //end id


						 Hotel << Convert(Price->Text) << endl;
						 Hotel << Convert(CityID->Text) << endl;
						 Hotel.close();
						 //---------------------((Copy))------------------------------------------
						 String ^ m;
						 m = Path;
						 marshal_context context;
						 LPCTSTR lm = context.marshal_as<const TCHAR*>(m);
						 m = ".\\images\\Hotels\\" + HN->Text + ".jpg";
						 LPCTSTR tm = context.marshal_as<const TCHAR*>(m);
						 CopyFile(lm, tm, 0);
						 /*****************************************************((Increase Then Save))*************************************************************/
						 Increase_Num_of_Hotels(Citiesarr, atoi(Convert(CityID->Text).c_str()));
						 /******************************************************************************************************************/
						 this->Close();
					 }
					 else
					 {
						 MessageBox::Show("Please enter Valid City ID ! (use City List To Help you)  ", "OPERATION FILED", MessageBoxButtons::OK, MessageBoxIcon::Warning);
						 CityID->Text = "";
					 }
				 }



	}
			 //------------------------------((convert from system string to std string ))----------------------------------------------------------
			 string Convert(String ^ s)
			 {
				 string x;
				 x = marshal_as<std::string>(s);
				 return x;
			 }
			 //-----------------------------------------------------------------------------------------------------------------------------------------------------
	private: System::Void Price_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void Price_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
				 if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08){
					 e->Handled = true;
				 }
	}

	private: System::Void NOR_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
				 if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08){
					 e->Handled = true;
				 }
	}
	private: System::Void AddHotel_EnabledChanged(System::Object^  sender, System::EventArgs^  e) {
				 if (this->Enabled == true)
				 {
					 if (L->is_changed)
					 {
						 CityID->Text = L->id;
					 }
				 }
	}
	};
}
