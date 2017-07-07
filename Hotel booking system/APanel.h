#pragma once
#include "Cities.h"
#include "Hotels.h"
#include "setting.h"
#include <iostream>
#include <fstream>
#include "About.h"
#include "AddCity.h"
#include "Requests.h"
namespace Hotelbookingsystem {

	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::IO;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for APanel
	/// </summary>
	public ref class APanel : public System::Windows::Forms::Form
	{
	public:
		APanel(void)
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
		~APanel()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  Abouts;
	protected:

	protected:

	private: System::Windows::Forms::Button^  Settings;
	private: System::Windows::Forms::Button^  Hotelss;
	private: System::Windows::Forms::Button^  Citiess;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  Request;
	private: System::Windows::Forms::Button^  Exit;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(APanel::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->Exit = (gcnew System::Windows::Forms::Button());
			this->Request = (gcnew System::Windows::Forms::Button());
			this->Abouts = (gcnew System::Windows::Forms::Button());
			this->Settings = (gcnew System::Windows::Forms::Button());
			this->Hotelss = (gcnew System::Windows::Forms::Button());
			this->Citiess = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Controls->Add(this->Exit);
			this->groupBox1->Controls->Add(this->Request);
			this->groupBox1->Controls->Add(this->Abouts);
			this->groupBox1->Controls->Add(this->Settings);
			this->groupBox1->Controls->Add(this->Hotelss);
			this->groupBox1->Controls->Add(this->Citiess);
			this->groupBox1->Location = System::Drawing::Point(9, 119);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(187, 531);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			// 
			// Exit
			// 
			this->Exit->BackColor = System::Drawing::Color::PaleGreen;
			this->Exit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Exit->FlatAppearance->BorderSize = 0;
			this->Exit->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Teal;
			this->Exit->FlatAppearance->MouseOverBackColor = System::Drawing::Color::PaleTurquoise;
			this->Exit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Exit->Font = (gcnew System::Drawing::Font(L"Source Sans Pro", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Exit->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Exit.Image")));
			this->Exit->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Exit->Location = System::Drawing::Point(6, 331);
			this->Exit->Name = L"Exit";
			this->Exit->Size = System::Drawing::Size(175, 43);
			this->Exit->TabIndex = 8;
			this->Exit->Text = L"Exit";
			this->Exit->UseVisualStyleBackColor = false;
			this->Exit->Click += gcnew System::EventHandler(this, &APanel::Exit_Click);
			// 
			// Request
			// 
			this->Request->BackColor = System::Drawing::Color::PaleGreen;
			this->Request->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Request->FlatAppearance->BorderSize = 0;
			this->Request->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Teal;
			this->Request->FlatAppearance->MouseOverBackColor = System::Drawing::Color::PaleTurquoise;
			this->Request->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Request->Font = (gcnew System::Drawing::Font(L"Source Sans Pro", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Request->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Request.Image")));
			this->Request->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->Request->Location = System::Drawing::Point(6, 135);
			this->Request->Name = L"Request";
			this->Request->Size = System::Drawing::Size(175, 41);
			this->Request->TabIndex = 7;
			this->Request->Text = L"  Requests";
			this->Request->UseVisualStyleBackColor = false;
			this->Request->Click += gcnew System::EventHandler(this, &APanel::Requests_Click);
			// 
			// Abouts
			// 
			this->Abouts->BackColor = System::Drawing::Color::PaleGreen;
			this->Abouts->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Abouts->FlatAppearance->BorderSize = 0;
			this->Abouts->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Teal;
			this->Abouts->FlatAppearance->MouseOverBackColor = System::Drawing::Color::PaleTurquoise;
			this->Abouts->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Abouts->Font = (gcnew System::Drawing::Font(L"Source Sans Pro", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Abouts->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Abouts.Image")));
			this->Abouts->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Abouts->Location = System::Drawing::Point(6, 264);
			this->Abouts->Name = L"Abouts";
			this->Abouts->Size = System::Drawing::Size(175, 43);
			this->Abouts->TabIndex = 6;
			this->Abouts->Text = L"About";
			this->Abouts->UseVisualStyleBackColor = false;
			this->Abouts->Click += gcnew System::EventHandler(this, &APanel::About_Click);
			// 
			// Settings
			// 
			this->Settings->BackColor = System::Drawing::Color::PaleGreen;
			this->Settings->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Settings->FlatAppearance->BorderSize = 0;
			this->Settings->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Teal;
			this->Settings->FlatAppearance->MouseOverBackColor = System::Drawing::Color::PaleTurquoise;
			this->Settings->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Settings->Font = (gcnew System::Drawing::Font(L"Source Sans Pro", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Settings->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Settings.Image")));
			this->Settings->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Settings->Location = System::Drawing::Point(6, 198);
			this->Settings->Name = L"Settings";
			this->Settings->Size = System::Drawing::Size(175, 43);
			this->Settings->TabIndex = 5;
			this->Settings->Text = L"  Settings";
			this->Settings->UseVisualStyleBackColor = false;
			this->Settings->Click += gcnew System::EventHandler(this, &APanel::Settings_Click);
			// 
			// Hotelss
			// 
			this->Hotelss->BackColor = System::Drawing::Color::PaleGreen;
			this->Hotelss->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Hotelss->FlatAppearance->BorderSize = 0;
			this->Hotelss->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Teal;
			this->Hotelss->FlatAppearance->MouseOverBackColor = System::Drawing::Color::PaleTurquoise;
			this->Hotelss->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Hotelss->Font = (gcnew System::Drawing::Font(L"Source Sans Pro", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Hotelss->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Hotelss.Image")));
			this->Hotelss->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Hotelss->Location = System::Drawing::Point(6, 72);
			this->Hotelss->Name = L"Hotelss";
			this->Hotelss->Size = System::Drawing::Size(175, 43);
			this->Hotelss->TabIndex = 4;
			this->Hotelss->Text = L"Hotels";
			this->Hotelss->UseVisualStyleBackColor = false;
			this->Hotelss->Click += gcnew System::EventHandler(this, &APanel::Hotelss_Click_1);
			// 
			// Citiess
			// 
			this->Citiess->BackColor = System::Drawing::Color::PaleGreen;
			this->Citiess->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Citiess->FlatAppearance->BorderSize = 0;
			this->Citiess->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Teal;
			this->Citiess->FlatAppearance->MouseOverBackColor = System::Drawing::Color::PaleTurquoise;
			this->Citiess->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Citiess->Font = (gcnew System::Drawing::Font(L"Source Sans Pro", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Citiess->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Citiess.Image")));
			this->Citiess->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Citiess->Location = System::Drawing::Point(6, 9);
			this->Citiess->Name = L"Citiess";
			this->Citiess->Size = System::Drawing::Size(175, 43);
			this->Citiess->TabIndex = 2;
			this->Citiess->Text = L"Cities";
			this->Citiess->UseVisualStyleBackColor = false;
			this->Citiess->Click += gcnew System::EventHandler(this, &APanel::Citiess_Click_1);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(377, 661);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(298, 21);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Copyright ©2015, All Rights Reserved";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Traditional Arabic", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::SteelBlue;
			this->label2->Location = System::Drawing::Point(7, 10);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(414, 98);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Admin Panel";
			// 
			// APanel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1006, 688);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->IsMdiContainer = true;
			this->Name = L"APanel";
			this->Text = L"Admin Panel";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &APanel::APanel_FormClosing);
			this->Load += gcnew System::EventHandler(this, &APanel::APanel_Load);
			this->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &APanel::APanel_MouseClick);
			this->groupBox1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		Cities ^OC = gcnew Cities;
		Hotels ^HC = gcnew Hotels;
public : setting ^SC = gcnew setting;
		About ^ AC = gcnew About;
		Requests ^ RC = gcnew Requests;
	private: System::Void AdminPanel_Load(System::Object^  sender, System::EventArgs^  e) {

	}

private: System::Void APanel_Load(System::Object^  sender, System::EventArgs^  e) {
				 //Read Cities
				 ReadAllCities(Citiesarr, NCities, NCitiesID, NumHotels);
				 //-----------------------------------------------
				 //Read Hotels
				 ReadAllHotels(Hotelsarr, NHotels, NHotelsID, NPricePerNight, NincludeCity);
				 //-----------------
				 
	}
private: System::Void Citiess_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 
			 HC->Hide();
			 SC->Hide();
			 AC->Hide();
			 RC->Hide();
			 if (OC->Visible == false)
			 {
				 OC->MdiParent = this;
				 OC->Show();
			 }
}
private: System::Void Hotelss_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 OC->Hide();
			 SC->Hide();
			 AC->Hide();
			 RC->Hide();
			 if (HC->Visible == false)
			 {
				 HC->MdiParent = this;
				 HC->Show();
			 }
}
private: System::Void Settings_Click(System::Object^  sender, System::EventArgs^  e) {
			 OC->Hide();
			 HC->Hide();
			 AC->Hide();
			 RC->Hide();
			 if (SC->Visible == false)
			 {
				 SC->MdiParent = this;
				 SC->Show();
			 }
}
private: System::Void APanel_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
}
private: System::Void About_Click(System::Object^  sender, System::EventArgs^  e) {
			 OC->Hide();
			 HC->Hide();
			 SC->Hide();
			 RC->Hide();
			 if (AC->Visible == false)
			 {
				 AC->MdiParent = this;
				 AC->Show();
			 }
}

private: System::Void APanel_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
			 if (MessageBox::Show("Are You Sure You Want To Exit ?", "Hotel Booking System", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == ::System::Windows::Forms::DialogResult::Yes)
			 {
				 Application::Exit();
			 }
			 else
			 {
				 e->Cancel = true;
			 }
}
private: System::Void Requests_Click(System::Object^  sender, System::EventArgs^  e) {
			 OC->Hide();
			 HC->Hide();
			 SC->Hide();
			 AC->Hide();
			 if (RC->Visible == false)
			 {
				 RC->MdiParent = this;
				 RC->Show();
			 }
}
private: System::Void Exit_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();
}
};
}
