#pragma once
#include <msclr\marshal_cppstd.h>
#include <string>
#include <fstream>
#include "HotelsList.h"
#include "AddCity.h"
#include "conifirm.h"

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
	/// Summary for AddRequest
	/// </summary>
	public ref class AddRequest : public System::Windows::Forms::Form
	{
	public:
		AddRequest(void)
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
		~AddRequest()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  New;
	private: System::Windows::Forms::Label^  CityName;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button1;

	private: System::Windows::Forms::LinkLabel^  ListHotel;




	private: System::Windows::Forms::TextBox^  NOR;
	private: System::Windows::Forms::TextBox^  NON;
	private: System::Windows::Forms::TextBox^  HOTELID;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(AddRequest::typeid));
			this->New = (gcnew System::Windows::Forms::Label());
			this->CityName = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->ListHotel = (gcnew System::Windows::Forms::LinkLabel());
			this->NOR = (gcnew System::Windows::Forms::TextBox());
			this->NON = (gcnew System::Windows::Forms::TextBox());
			this->HOTELID = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// New
			// 
			this->New->AutoSize = true;
			this->New->BackColor = System::Drawing::Color::Transparent;
			this->New->Font = (gcnew System::Drawing::Font(L"Imprint MT Shadow", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->New->ForeColor = System::Drawing::Color::Black;
			this->New->Location = System::Drawing::Point(201, 9);
			this->New->Name = L"New";
			this->New->Size = System::Drawing::Size(401, 75);
			this->New->TabIndex = 1;
			this->New->Text = L"New Request";
			// 
			// CityName
			// 
			this->CityName->AutoSize = true;
			this->CityName->BackColor = System::Drawing::Color::Transparent;
			this->CityName->Font = (gcnew System::Drawing::Font(L"Adobe Fan Heiti Std B", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CityName->ForeColor = System::Drawing::Color::Black;
			this->CityName->Location = System::Drawing::Point(20, 146);
			this->CityName->Name = L"CityName";
			this->CityName->Size = System::Drawing::Size(220, 30);
			this->CityName->TabIndex = 4;
			this->CityName->Text = L"Number of Rooms :";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Adobe Fan Heiti Std B", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(24, 210);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(216, 30);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Number of Nights :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Adobe Fan Heiti Std B", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(128, 267);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(112, 30);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Hotel ID :";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(302, 384);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(145, 44);
			this->button1->TabIndex = 7;
			this->button1->Text = L">>>> Confirm <<<<";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AddRequest::button1_Click);
			// 
			// ListHotel
			// 
			this->ListHotel->AutoSize = true;
			this->ListHotel->BackColor = System::Drawing::Color::Transparent;
			this->ListHotel->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ListHotel->Location = System::Drawing::Point(305, 281);
			this->ListHotel->Name = L"ListHotel";
			this->ListHotel->Size = System::Drawing::Size(76, 16);
			this->ListHotel->TabIndex = 11;
			this->ListHotel->TabStop = true;
			this->ListHotel->Text = L"Hotel list \?";
			this->ListHotel->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &AddRequest::ListHotel_LinkClicked);
			// 
			// NOR
			// 
			this->NOR->Location = System::Drawing::Point(236, 152);
			this->NOR->MaxLength = 3;
			this->NOR->Name = L"NOR";
			this->NOR->Size = System::Drawing::Size(48, 20);
			this->NOR->TabIndex = 14;
			this->NOR->Tag = L"$";
			this->NOR->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &AddRequest::NOR_KeyPress);
			// 
			// NON
			// 
			this->NON->Location = System::Drawing::Point(236, 216);
			this->NON->MaxLength = 3;
			this->NON->Name = L"NON";
			this->NON->Size = System::Drawing::Size(48, 20);
			this->NON->TabIndex = 15;
			this->NON->Tag = L"$";
			this->NON->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &AddRequest::NON_KeyPress);
			// 
			// HOTELID
			// 
			this->HOTELID->AcceptsReturn = true;
			this->HOTELID->Location = System::Drawing::Point(236, 272);
			this->HOTELID->MaxLength = 3;
			this->HOTELID->Name = L"HOTELID";
			this->HOTELID->Size = System::Drawing::Size(63, 20);
			this->HOTELID->TabIndex = 16;
			this->HOTELID->Tag = L"$";
			this->HOTELID->TextChanged += gcnew System::EventHandler(this, &AddRequest::HOTELID_TextChanged);
			this->HOTELID->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &AddRequest::HOTELID_KeyPress);
			// 
			// AddRequest
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(800, 440);
			this->Controls->Add(this->HOTELID);
			this->Controls->Add(this->NON);
			this->Controls->Add(this->NOR);
			this->Controls->Add(this->ListHotel);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->CityName);
			this->Controls->Add(this->New);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"AddRequest";
			this->Text = L"Add Request";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &AddRequest::AddRequest_FormClosed);
			this->Load += gcnew System::EventHandler(this, &AddRequest::AddRequest_Load);
			this->EnabledChanged += gcnew System::EventHandler(this, &AddRequest::AddRequest_EnabledChanged);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		HotelsList ^ List = gcnew HotelsList;
		conifirm ^ cnf = gcnew conifirm;
		String ^ idk;
		public:bool Requestadded;
string Convert(String ^ s)
			   {
				   string x;
				   x = marshal_as<std::string>(s);
				   return x;
			   }
private: System::Void ListHotel_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
				 List->Owner = this;
				 List->ShowDialog();
	}
private: System::Void AddRequest_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
			 this->Owner->Enabled = true;
}
private: System::Void AddRequest_Load(System::Object^  sender, System::EventArgs^  e) {
			 this->Owner->Enabled = false;
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (NOR->Text == "" || NON->Text == "" || HOTELID->Text == "")
					 MessageBox::Show("One or More Text Fields are Empty Operation Could Not Be Complete", "OPERATION FILED", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				 else
				 {
					 if (Check_Hotel(atoi(Convert(HOTELID->Text).c_str()))) // check if the hotel id exists....
					 {
						 string s = Search_Hotel_ID(atoi(Convert(HOTELID->Text).c_str()));
						 int PPNN = Search_Hotel_PPN(s);
						 cnf->PPN = PPNN.ToString() ;
						 cnf->ID = HOTELID->Text;
						 cnf->NOR = atoi(Convert(NOR->Text).c_str());
						 cnf->NON = atoi(Convert(NON->Text).c_str());
						 cnf->Owner = this;
						 cnf->ShowDialog();
					 }
					 else
					 {
						 MessageBox::Show("Please enter Valid Hotel ID ! (use Hotel List To Help you)  ", "OPERATION FILED", MessageBoxButtons::OK, MessageBoxIcon::Warning);
						 HOTELID->Text = "";
					 }

				 }
	}
private: System::Void AddRequest_EnabledChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (this->Enabled== true )
			 {
				 
				 if (List->is_changed)
				 {
					 HOTELID->Text = List->id;
					 List->is_changed = false;
				 }
				 else if (cnf->Requestadded)
				 {
					 cnf->Requestadded = false;
					 Requestadded = true;
				 }

			 }
}
private: System::Void HOTELID_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void NOR_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			 if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08){
				 e->Handled = true;
			 }
}
private: System::Void NON_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			 if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08){
				 e->Handled = true;
			 }
}
private: System::Void HOTELID_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			 if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08){
				 e->Handled = true;
			 }
}
};
}
