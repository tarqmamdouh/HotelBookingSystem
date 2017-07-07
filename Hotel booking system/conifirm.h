#pragma once
#include <algorithm>
#include <msclr\marshal_cppstd.h>
#include <stdio.h>
#include "Hotels.h"
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
	/// Summary for conifirm
	/// </summary>
	public ref class conifirm : public System::Windows::Forms::Form
	{
	public:
		conifirm(void)
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
		~conifirm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  addCo;
	protected:

	protected:
	private: System::Windows::Forms::Button^  cancel;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  Numberofrooms;
	private: System::Windows::Forms::Label^  Numberofnights;
	private: System::Windows::Forms::Label^  RequestID;
	private: System::Windows::Forms::Label^  HotelName;
	private: System::Windows::Forms::Label^  Total;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  PricePN;
	private: System::Windows::Forms::Label^  label8;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(conifirm::typeid));
			this->addCo = (gcnew System::Windows::Forms::Button());
			this->cancel = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->Numberofrooms = (gcnew System::Windows::Forms::Label());
			this->Numberofnights = (gcnew System::Windows::Forms::Label());
			this->RequestID = (gcnew System::Windows::Forms::Label());
			this->HotelName = (gcnew System::Windows::Forms::Label());
			this->Total = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->PricePN = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// addCo
			// 
			this->addCo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"addCo.Image")));
			this->addCo->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->addCo->Location = System::Drawing::Point(269, 290);
			this->addCo->Name = L"addCo";
			this->addCo->Size = System::Drawing::Size(72, 31);
			this->addCo->TabIndex = 0;
			this->addCo->Text = L"Add";
			this->addCo->UseVisualStyleBackColor = true;
			this->addCo->Click += gcnew System::EventHandler(this, &conifirm::addCo_Click);
			// 
			// cancel
			// 
			this->cancel->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cancel.Image")));
			this->cancel->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->cancel->Location = System::Drawing::Point(155, 290);
			this->cancel->Name = L"cancel";
			this->cancel->Size = System::Drawing::Size(74, 31);
			this->cancel->TabIndex = 1;
			this->cancel->Text = L"  Cancel";
			this->cancel->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->cancel->UseVisualStyleBackColor = true;
			this->cancel->Click += gcnew System::EventHandler(this, &conifirm::cancel_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label1->Location = System::Drawing::Point(108, 64);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(120, 16);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Number of Rooms :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label2->Location = System::Drawing::Point(113, 97);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(116, 16);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Number of Nights :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label3->Location = System::Drawing::Point(145, 163);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(83, 16);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Hotel Name :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label4->Location = System::Drawing::Point(149, 130);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(79, 16);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Request ID :";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label5->Location = System::Drawing::Point(152, 235);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(75, 16);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Total Cost :";
			// 
			// Numberofrooms
			// 
			this->Numberofrooms->BackColor = System::Drawing::Color::Transparent;
			this->Numberofrooms->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Numberofrooms->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->Numberofrooms->Location = System::Drawing::Point(234, 64);
			this->Numberofrooms->Name = L"Numberofrooms";
			this->Numberofrooms->Size = System::Drawing::Size(123, 17);
			this->Numberofrooms->TabIndex = 7;
			// 
			// Numberofnights
			// 
			this->Numberofnights->BackColor = System::Drawing::Color::Transparent;
			this->Numberofnights->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Numberofnights->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->Numberofnights->Location = System::Drawing::Point(234, 97);
			this->Numberofnights->Name = L"Numberofnights";
			this->Numberofnights->Size = System::Drawing::Size(123, 17);
			this->Numberofnights->TabIndex = 8;
			this->Numberofnights->Click += gcnew System::EventHandler(this, &conifirm::Numberofnights_Click);
			// 
			// RequestID
			// 
			this->RequestID->BackColor = System::Drawing::Color::Transparent;
			this->RequestID->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RequestID->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->RequestID->Location = System::Drawing::Point(234, 129);
			this->RequestID->Name = L"RequestID";
			this->RequestID->Size = System::Drawing::Size(123, 17);
			this->RequestID->TabIndex = 9;
			// 
			// HotelName
			// 
			this->HotelName->BackColor = System::Drawing::Color::Transparent;
			this->HotelName->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->HotelName->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->HotelName->Location = System::Drawing::Point(234, 162);
			this->HotelName->Name = L"HotelName";
			this->HotelName->Size = System::Drawing::Size(123, 17);
			this->HotelName->TabIndex = 10;
			// 
			// Total
			// 
			this->Total->BackColor = System::Drawing::Color::Transparent;
			this->Total->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Total->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Total->Location = System::Drawing::Point(232, 235);
			this->Total->Name = L"Total";
			this->Total->Size = System::Drawing::Size(123, 17);
			this->Total->TabIndex = 11;
			this->Total->Click += gcnew System::EventHandler(this, &conifirm::Total_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::PowderBlue;
			this->label6->Location = System::Drawing::Point(114, 24);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(241, 26);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Confirm Your Request";
			// 
			// PricePN
			// 
			this->PricePN->BackColor = System::Drawing::Color::Transparent;
			this->PricePN->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PricePN->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->PricePN->Location = System::Drawing::Point(234, 192);
			this->PricePN->Name = L"PricePN";
			this->PricePN->Size = System::Drawing::Size(123, 17);
			this->PricePN->TabIndex = 14;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label8->Location = System::Drawing::Point(91, 193);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(138, 16);
			this->label8->TabIndex = 13;
			this->label8->Text = L"Hotel Price Per Night  :";
			// 
			// conifirm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(477, 333);
			this->Controls->Add(this->PricePN);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->Total);
			this->Controls->Add(this->HotelName);
			this->Controls->Add(this->RequestID);
			this->Controls->Add(this->Numberofnights);
			this->Controls->Add(this->Numberofrooms);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->cancel);
			this->Controls->Add(this->addCo);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"conifirm";
			this->Text = L"Confirm";
			this->Activated += gcnew System::EventHandler(this, &conifirm::conifirm_Activated);
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &conifirm::conifirm_FormClosed);
			this->Load += gcnew System::EventHandler(this, &conifirm::conifirm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		public: int NOR;
		public: int NON;
		public: String^ ID;
        public: String ^ PPN;
		public: int TotalCost;
		bool y = true;
		public:bool Requestadded = false;
	private: System::Void conifirm_Load(System::Object^  sender, System::EventArgs^  e) {
				 ReadAllHotels(Hotelsarr, NHotels, NHotelsID, NPricePerNight, NincludeCity);
				 ReadAllRequests(Requestsarr ,NNOR, NNON, NRID, NCost, NHotelID);
				 
				 Numberofnights->Text = System::Convert::ToString(NON);
				 
				 Numberofrooms->Text = System::Convert::ToString(NOR);;
				 
				 /************************************((ID))******************************************************************/
				 if (NNOR == 0)
				 {
					 RequestID->Text = System::Convert::ToString(NNOR);

				 }
				 else
				 {
					 for (int i = 0; i < NNOR; i++)
					 {
						 bool x = false;
						 for (int j = 0; j <= NNOR; j++)
						 {
							 if (Requestsarr[j].RequestID == i)
							 {
								 x = true;
								 break;
							 }
						 }
						 if (x == false)
						 {
							 RequestID->Text = System::Convert::ToString(i);
							 y = false;
							 break;
						 }
					 }
					 if (y)
						 RequestID->Text = System::Convert::ToString(NNOR);

				 }
				 /*******************************************************************************************/
				 string idk = (Search_Hotel_ID(atoi(Convert(ID).c_str())));
				 String ^ non = gcnew String(idk.c_str());
				 HotelName->Text = non ;
				 TotalCost = NOR * NON * atoi(Convert(PPN).c_str());
				 Total->Text = TotalCost.ToString() + " $ ";
				 PricePN->Text = PPN + " $ ";
	}

private: System::Void addCo_Click(System::Object^  sender, System::EventArgs^  e) {

				 ofstream Requests(".\\data\\Requests.txt", ios::app);
				 Requests << "-------------------------------------------------------------------";
				 Requests << endl;
				 Requests << Convert(Numberofrooms->Text) << endl;
				 Requests << Convert(Numberofnights->Text) << endl;
				 Requests << Convert(RequestID->Text) << endl;
				 Requests << TotalCost << endl;
				 Requests << Convert(ID) << endl;
				 Requests.close();
				 this->Owner->Enabled = true;
				 this->Close();
				 Requestadded = true;
}
private: System::Void cancel_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Owner->Enabled = true;
			 this->Close();
}
private: System::Void conifirm_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
			 ReadAllRequests(Requestsarr, NNOR, NNON, NRID, NCost, NHotelID);
			 this->Owner->Enabled = true;
}
private: System::Void conifirm_Activated(System::Object^  sender, System::EventArgs^  e) {
			 this->Owner->Enabled = false;
}
private: System::Void Numberofnights_Click(System::Object^  sender, System::EventArgs^  e) {
}
		 string Convert(String ^ s)
		 {
			 string x;
			 x = marshal_as<std::string>(s);
			 return x;
		 }
private: System::Void Total_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
