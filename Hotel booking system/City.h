#pragma once
#include <fstream>
#include <msclr\marshal_cppstd.h>
#include <string>

namespace Hotelbookingsystem {
	using namespace std;
	using namespace msclr::interop;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::IO;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for City
	/// </summary>
	public ref class City : public System::Windows::Forms::Form
	{
	public:
		City(void)
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
		~City()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  CI;
	private: System::Windows::Forms::Label^  label1;

	private: System::Windows::Forms::TextBox^  CNI;
	private: System::Windows::Forms::RichTextBox^  CND;
	private: System::Windows::Forms::TextBox^  CIDI;



	private: System::Windows::Forms::TextBox^  NOHI;


	public: System::Windows::Forms::PictureBox^  BrowsePic;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	public:
	private:
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(City::typeid));
			this->CI = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->CNI = (gcnew System::Windows::Forms::TextBox());
			this->CND = (gcnew System::Windows::Forms::RichTextBox());
			this->CIDI = (gcnew System::Windows::Forms::TextBox());
			this->NOHI = (gcnew System::Windows::Forms::TextBox());
			this->BrowsePic = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BrowsePic))->BeginInit();
			this->SuspendLayout();
			// 
			// CI
			// 
			this->CI->AutoSize = true;
			this->CI->BackColor = System::Drawing::Color::Transparent;
			this->CI->Font = (gcnew System::Drawing::Font(L"Imprint MT Shadow", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CI->ForeColor = System::Drawing::Color::AliceBlue;
			this->CI->Location = System::Drawing::Point(87, 10);
			this->CI->Name = L"CI";
			this->CI->Size = System::Drawing::Size(389, 57);
			this->CI->TabIndex = 0;
			this->CI->Text = L"City Information";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Maiandra GD", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Wheat;
			this->label1->Location = System::Drawing::Point(123, 220);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(85, 25);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Name :";
			// 
			// CNI
			// 
			this->CNI->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->CNI->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CNI->ForeColor = System::Drawing::SystemColors::InfoText;
			this->CNI->Location = System::Drawing::Point(206, 225);
			this->CNI->Name = L"CNI";
			this->CNI->ReadOnly = true;
			this->CNI->Size = System::Drawing::Size(308, 21);
			this->CNI->TabIndex = 3;
			// 
			// CND
			// 
			this->CND->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->CND->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CND->Location = System::Drawing::Point(208, 362);
			this->CND->Name = L"CND";
			this->CND->ReadOnly = true;
			this->CND->Size = System::Drawing::Size(299, 173);
			this->CND->TabIndex = 4;
			this->CND->Text = L"";
			// 
			// CIDI
			// 
			this->CIDI->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->CIDI->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CIDI->Location = System::Drawing::Point(208, 269);
			this->CIDI->Name = L"CIDI";
			this->CIDI->ReadOnly = true;
			this->CIDI->Size = System::Drawing::Size(100, 21);
			this->CIDI->TabIndex = 6;
			// 
			// NOHI
			// 
			this->NOHI->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->NOHI->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NOHI->Location = System::Drawing::Point(209, 317);
			this->NOHI->Name = L"NOHI";
			this->NOHI->ReadOnly = true;
			this->NOHI->Size = System::Drawing::Size(55, 21);
			this->NOHI->TabIndex = 8;
			// 
			// BrowsePic
			// 
			this->BrowsePic->BackColor = System::Drawing::Color::Transparent;
			this->BrowsePic->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BrowsePic.BackgroundImage")));
			this->BrowsePic->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->BrowsePic->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->BrowsePic->Location = System::Drawing::Point(194, 68);
			this->BrowsePic->Name = L"BrowsePic";
			this->BrowsePic->Size = System::Drawing::Size(163, 134);
			this->BrowsePic->TabIndex = 9;
			this->BrowsePic->TabStop = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(228, 568);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(103, 29);
			this->button1->TabIndex = 10;
			this->button1->Text = L"OK";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &City::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Maiandra GD", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Wheat;
			this->label2->Location = System::Drawing::Point(158, 266);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(49, 25);
			this->label2->TabIndex = 11;
			this->label2->Text = L"ID :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Maiandra GD", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Wheat;
			this->label3->Location = System::Drawing::Point(-1, 311);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(209, 25);
			this->label3->TabIndex = 12;
			this->label3->Text = L"Number of Hotels :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Maiandra GD", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Wheat;
			this->label4->Location = System::Drawing::Point(68, 348);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(140, 25);
			this->label4->TabIndex = 13;
			this->label4->Text = L"Description :";
			// 
			// City
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(566, 609);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->BrowsePic);
			this->Controls->Add(this->NOHI);
			this->Controls->Add(this->CIDI);
			this->Controls->Add(this->CND);
			this->Controls->Add(this->CNI);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->CI);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"City";
			this->Text = L"City Info";
			this->Load += gcnew System::EventHandler(this, &City::City_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BrowsePic))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: String^ S;
	public: String^ ID;
	public: String^ Num;
	private: System::Void City_Load(System::Object^  sender, System::EventArgs^  e) {
				 CNI->Text = S;
				 CIDI->Text = ID;
				 NOHI->Text = Num;
				 string m,v;
				 string x;
				 x = marshal_as<std::string>(CNI->Text);
				 m= ".\\data\\" + x + ".txt";
				 ifstream file (m);
				 while (getline(file, m))
				 {
					 v += m;
					 v += "\n";
				 }
				 String ^ bla = gcnew String(v.c_str());
				 CND->Text = bla;
				 S = ".\\images\\Cities\\" + CNI->Text + ".jpg";
				 x = marshal_as<std::string>(".\\images\\Cities\\" + CNI->Text + ".jpg");
				 if (ifstream(x))
				 {
					 System::ComponentModel::Container ^components;
					 Bitmap ^ Picture;
					 Picture = gcnew Bitmap(S);
					 Bitmap ^ Newpic = gcnew Bitmap(Picture, 165, 152);
					 Picture = Newpic;
					 Invalidate();
					 BrowsePic->Image = Picture;
				 }
				 else
				 {
					 BrowsePic->Image = BrowsePic->BackgroundImage;
				 }
				
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();
			
}
};
}
