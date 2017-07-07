#pragma once
#include "AddCity.h"
namespace Hotelbookingsystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Requestinfo
	/// </summary>
	public ref class Requestinfo : public System::Windows::Forms::Form
	{
	public:
		Requestinfo(void)
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
		~Requestinfo()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  CI;

	private: System::Windows::Forms::Label^  label2;

	private: System::Windows::Forms::Label^  label3;

	private: System::Windows::Forms::Label^  label4;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  IDinfo;
	private: System::Windows::Forms::Label^  NORinfo;
	private: System::Windows::Forms::Label^  NONinfo;
	private: System::Windows::Forms::Label^  HNinfo;
	private: System::Windows::Forms::Label^  Totalinfo;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Requestinfo::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->CI = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->IDinfo = (gcnew System::Windows::Forms::Label());
			this->NORinfo = (gcnew System::Windows::Forms::Label());
			this->NONinfo = (gcnew System::Windows::Forms::Label());
			this->HNinfo = (gcnew System::Windows::Forms::Label());
			this->Totalinfo = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Maiandra GD", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(83, 88);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(133, 25);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Request ID :";
			// 
			// CI
			// 
			this->CI->AutoSize = true;
			this->CI->BackColor = System::Drawing::Color::Transparent;
			this->CI->Font = (gcnew System::Drawing::Font(L"Imprint MT Shadow", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CI->ForeColor = System::Drawing::Color::AliceBlue;
			this->CI->Location = System::Drawing::Point(31, 9);
			this->CI->Name = L"CI";
			this->CI->Size = System::Drawing::Size(348, 42);
			this->CI->TabIndex = 4;
			this->CI->Text = L"Request Information";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Maiandra GD", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(9, 127);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(208, 25);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Number of rooms :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Maiandra GD", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(9, 170);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(209, 25);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Number of Nights :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Maiandra GD", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(69, 215);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(149, 25);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Hotel Name :";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Maiandra GD", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(106, 266);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(86, 25);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Total  :";
			// 
			// button1
			// 
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Location = System::Drawing::Point(161, 326);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(98, 25);
			this->button1->TabIndex = 15;
			this->button1->Text = L"OK";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Requestinfo::button1_Click);
			// 
			// IDinfo
			// 
			this->IDinfo->BackColor = System::Drawing::Color::Transparent;
			this->IDinfo->Font = (gcnew System::Drawing::Font(L"Maiandra GD", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->IDinfo->ForeColor = System::Drawing::Color::DimGray;
			this->IDinfo->Location = System::Drawing::Point(221, 89);
			this->IDinfo->Name = L"IDinfo";
			this->IDinfo->Size = System::Drawing::Size(133, 25);
			this->IDinfo->TabIndex = 16;
			// 
			// NORinfo
			// 
			this->NORinfo->BackColor = System::Drawing::Color::Transparent;
			this->NORinfo->Font = (gcnew System::Drawing::Font(L"Maiandra GD", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NORinfo->ForeColor = System::Drawing::Color::DimGray;
			this->NORinfo->Location = System::Drawing::Point(221, 127);
			this->NORinfo->Name = L"NORinfo";
			this->NORinfo->Size = System::Drawing::Size(133, 25);
			this->NORinfo->TabIndex = 17;
			// 
			// NONinfo
			// 
			this->NONinfo->BackColor = System::Drawing::Color::Transparent;
			this->NONinfo->Font = (gcnew System::Drawing::Font(L"Maiandra GD", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NONinfo->ForeColor = System::Drawing::Color::DimGray;
			this->NONinfo->Location = System::Drawing::Point(221, 170);
			this->NONinfo->Name = L"NONinfo";
			this->NONinfo->Size = System::Drawing::Size(133, 25);
			this->NONinfo->TabIndex = 18;
			// 
			// HNinfo
			// 
			this->HNinfo->BackColor = System::Drawing::Color::Transparent;
			this->HNinfo->Font = (gcnew System::Drawing::Font(L"Maiandra GD", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->HNinfo->ForeColor = System::Drawing::Color::DimGray;
			this->HNinfo->Location = System::Drawing::Point(221, 215);
			this->HNinfo->Name = L"HNinfo";
			this->HNinfo->Size = System::Drawing::Size(133, 25);
			this->HNinfo->TabIndex = 19;
			// 
			// Totalinfo
			// 
			this->Totalinfo->BackColor = System::Drawing::Color::Transparent;
			this->Totalinfo->Font = (gcnew System::Drawing::Font(L"Maiandra GD", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Totalinfo->ForeColor = System::Drawing::Color::DimGray;
			this->Totalinfo->Location = System::Drawing::Point(195, 266);
			this->Totalinfo->Name = L"Totalinfo";
			this->Totalinfo->Size = System::Drawing::Size(133, 25);
			this->Totalinfo->TabIndex = 20;
			// 
			// Requestinfo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(421, 356);
			this->Controls->Add(this->Totalinfo);
			this->Controls->Add(this->HNinfo);
			this->Controls->Add(this->NONinfo);
			this->Controls->Add(this->NORinfo);
			this->Controls->Add(this->IDinfo);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->CI);
			this->ForeColor = System::Drawing::Color::Black;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Name = L"Requestinfo";
			this->Text = L"        Request info";
			this->Load += gcnew System::EventHandler(this, &Requestinfo::Requestinfo_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		public: String^ NumORom;
		public: String^ NumONi;
		public: String^ ID;
		public: String^ total;
	    public: String^ HName;
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Close();
	}
private: System::Void Requestinfo_Load(System::Object^  sender, System::EventArgs^  e) {
			 NORinfo->Text = NumORom;
			 NONinfo->Text = NumONi;
			 IDinfo->Text = ID;
			 Totalinfo->Text = total;
			 HNinfo->Text = HName;
}
};
}
