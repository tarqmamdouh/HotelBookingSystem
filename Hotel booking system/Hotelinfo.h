#pragma once
#include <fstream>
#include <msclr\marshal_cppstd.h>
#include <string>
namespace Hotelbookingsystem {
	using namespace msclr::interop;
	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Hotelinfo
	/// </summary>
	public ref class Hotelinfo : public System::Windows::Forms::Form
	{
	public:
		Hotelinfo(void)
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
		~Hotelinfo()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  txtID;
	private: System::Windows::Forms::TextBox^  txtPricePerNight;
	protected:

	protected:

	private: System::Windows::Forms::TextBox^  txtName;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	public: System::Windows::Forms::PictureBox^  BrowsePic;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  txtCityName;
	public:

	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Button^  button1;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Hotelinfo::typeid));
			this->txtID = (gcnew System::Windows::Forms::TextBox());
			this->txtPricePerNight = (gcnew System::Windows::Forms::TextBox());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->BrowsePic = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtCityName = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BrowsePic))->BeginInit();
			this->SuspendLayout();
			// 
			// txtID
			// 
			this->txtID->BackColor = System::Drawing::Color::LightSteelBlue;
			this->txtID->Location = System::Drawing::Point(190, 274);
			this->txtID->Name = L"txtID";
			this->txtID->ReadOnly = true;
			this->txtID->Size = System::Drawing::Size(72, 20);
			this->txtID->TabIndex = 14;
			// 
			// txtPricePerNight
			// 
			this->txtPricePerNight->BackColor = System::Drawing::Color::LightSteelBlue;
			this->txtPricePerNight->Location = System::Drawing::Point(190, 317);
			this->txtPricePerNight->Name = L"txtPricePerNight";
			this->txtPricePerNight->ReadOnly = true;
			this->txtPricePerNight->Size = System::Drawing::Size(48, 20);
			this->txtPricePerNight->TabIndex = 13;
			// 
			// txtName
			// 
			this->txtName->BackColor = System::Drawing::Color::LightSteelBlue;
			this->txtName->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->txtName->Location = System::Drawing::Point(190, 228);
			this->txtName->Multiline = true;
			this->txtName->Name = L"txtName";
			this->txtName->ReadOnly = true;
			this->txtName->Size = System::Drawing::Size(253, 20);
			this->txtName->TabIndex = 12;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe Print", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::DarkSalmon;
			this->label4->Location = System::Drawing::Point(-2, 306);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(196, 37);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Price Per Night :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe Print", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::DarkSalmon;
			this->label3->Location = System::Drawing::Point(139, 263);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(55, 37);
			this->label3->TabIndex = 10;
			this->label3->Text = L"ID :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe Print", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::DarkSalmon;
			this->label2->Location = System::Drawing::Point(94, 219);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(98, 37);
			this->label2->TabIndex = 9;
			this->label2->Text = L"NAME :";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::DarkSalmon;
			this->label1->Location = System::Drawing::Point(55, 5);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(429, 62);
			this->label1->TabIndex = 8;
			this->label1->Text = L"HOTEL INFORMATION";
			// 
			// BrowsePic
			// 
			this->BrowsePic->BackColor = System::Drawing::Color::Transparent;
			this->BrowsePic->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BrowsePic.BackgroundImage")));
			this->BrowsePic->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->BrowsePic->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->BrowsePic->Location = System::Drawing::Point(181, 67);
			this->BrowsePic->Name = L"BrowsePic";
			this->BrowsePic->Size = System::Drawing::Size(163, 134);
			this->BrowsePic->TabIndex = 15;
			this->BrowsePic->TabStop = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe Print", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::DarkSalmon;
			this->label5->Location = System::Drawing::Point(240, 308);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(28, 37);
			this->label5->TabIndex = 16;
			this->label5->Text = L"$";
			// 
			// txtCityName
			// 
			this->txtCityName->BackColor = System::Drawing::Color::LightSteelBlue;
			this->txtCityName->Location = System::Drawing::Point(190, 367);
			this->txtCityName->Multiline = true;
			this->txtCityName->Name = L"txtCityName";
			this->txtCityName->ReadOnly = true;
			this->txtCityName->Size = System::Drawing::Size(177, 20);
			this->txtCityName->TabIndex = 18;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe Print", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::DarkSalmon;
			this->label6->Location = System::Drawing::Point(51, 358);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(143, 37);
			this->label6->TabIndex = 17;
			this->label6->Text = L"City Name :";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(225, 568);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(103, 29);
			this->button1->TabIndex = 19;
			this->button1->Text = L"OK";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Hotelinfo::button1_Click);
			// 
			// Hotelinfo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(566, 609);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->txtCityName);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->BrowsePic);
			this->Controls->Add(this->txtID);
			this->Controls->Add(this->txtPricePerNight);
			this->Controls->Add(this->txtName);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"Hotelinfo";
			this->Text = L"Hotel info";
			this->Load += gcnew System::EventHandler(this, &Hotelinfo::Hotelinfo_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BrowsePic))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: String^ Name;
	public: String^ ID;
	public: String^ PricePerNight;
	public: String^ CityName;
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void Hotelinfo_Load(System::Object^  sender, System::EventArgs^  e) {
				 txtName->Text = Name;
				 txtID->Text = ID;
				 txtPricePerNight->Text = PricePerNight;
				 txtCityName->Text = CityName;
				 String ^ S;
				 string x;
				 S = ".\\images\\Hotels\\" + txtName->Text + ".jpg";
				 x = marshal_as<std::string>(".\\images\\Hotels\\" + txtName->Text + ".jpg");
				 if (ifstream(x.c_str()))
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
	};
}

