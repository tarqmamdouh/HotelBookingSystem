#pragma once
#include <msclr\marshal_cppstd.h>
#include <string>
#include <fstream>
#include <sstream>
#include <iomanip>
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
	/// Summary for EditHotel
	/// </summary>
	public ref class EditHotel : public System::Windows::Forms::Form
	{
	public:
		EditHotel(void)
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
		~EditHotel()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  BrowsePicE;
	protected:

	protected:

	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  btnBrowse;
	private: System::Windows::Forms::Label^  label2;

	private: System::Windows::Forms::TextBox^  txtPricePerNight;

	private: System::Windows::Forms::TextBox^  txtHotelName;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label3;





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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(EditHotel::typeid));
			this->BrowsePicE = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnBrowse = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtPricePerNight = (gcnew System::Windows::Forms::TextBox());
			this->txtHotelName = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BrowsePicE))->BeginInit();
			this->SuspendLayout();
			// 
			// BrowsePicE
			// 
			this->BrowsePicE->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BrowsePicE.BackgroundImage")));
			this->BrowsePicE->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->BrowsePicE->Location = System::Drawing::Point(489, 12);
			this->BrowsePicE->Name = L"BrowsePicE";
			this->BrowsePicE->Size = System::Drawing::Size(113, 110);
			this->BrowsePicE->TabIndex = 0;
			this->BrowsePicE->TabStop = false;
			this->BrowsePicE->Click += gcnew System::EventHandler(this, &EditHotel::pictureBox1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(39, 118);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(121, 23);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Hotel Name :";
			// 
			// btnBrowse
			// 
			this->btnBrowse->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->btnBrowse->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnBrowse->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnBrowse.Image")));
			this->btnBrowse->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnBrowse->Location = System::Drawing::Point(511, 138);
			this->btnBrowse->Name = L"btnBrowse";
			this->btnBrowse->Size = System::Drawing::Size(91, 23);
			this->btnBrowse->TabIndex = 4;
			this->btnBrowse->Text = L"   Browse..";
			this->btnBrowse->UseVisualStyleBackColor = false;
			this->btnBrowse->Click += gcnew System::EventHandler(this, &EditHotel::btnBrowse_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(13, 170);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(147, 23);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Price Per Night :";
			// 
			// txtPricePerNight
			// 
			this->txtPricePerNight->BackColor = System::Drawing::Color::AliceBlue;
			this->txtPricePerNight->Location = System::Drawing::Point(166, 173);
			this->txtPricePerNight->Name = L"txtPricePerNight";
			this->txtPricePerNight->Size = System::Drawing::Size(55, 20);
			this->txtPricePerNight->TabIndex = 7;
			this->txtPricePerNight->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &EditHotel::txtPricePerNight_KeyPress);
			// 
			// txtHotelName
			// 
			this->txtHotelName->BackColor = System::Drawing::Color::AliceBlue;
			this->txtHotelName->Location = System::Drawing::Point(165, 122);
			this->txtHotelName->Name = L"txtHotelName";
			this->txtHotelName->Size = System::Drawing::Size(187, 20);
			this->txtHotelName->TabIndex = 9;
			this->txtHotelName->TextChanged += gcnew System::EventHandler(this, &EditHotel::txtHotelName_TextChanged);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::SkyBlue;
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button2->FlatAppearance->BorderSize = 2;
			this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button2->Location = System::Drawing::Point(511, 338);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(91, 36);
			this->button2->TabIndex = 13;
			this->button2->Text = L"   Edit";
			this->button2->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &EditHotel::button2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Lucida Bright", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(12, 12);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(263, 54);
			this->label3->TabIndex = 14;
			this->label3->Text = L"Edit Hotel";
			// 
			// EditHotel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoValidate = System::Windows::Forms::AutoValidate::EnableAllowFocusChange;
			this->BackColor = System::Drawing::Color::PapayaWhip;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(614, 382);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->txtHotelName);
			this->Controls->Add(this->txtPricePerNight);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->btnBrowse);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->BrowsePicE);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"EditHotel";
			this->Text = L"EditHotel";
			this->Activated += gcnew System::EventHandler(this, &EditHotel::EditHotel_Activated);
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &EditHotel::EditHotel_FormClosed);
			this->Load += gcnew System::EventHandler(this, &EditHotel::EditHotel_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BrowsePicE))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		public: String^ path;
		public: bool Text_Changed;
		String ^ m;
		String ^ mb;
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
		bool image_changed;
	    public: String^ Name;
	    public: String^ old;
	    public: String^ PricePerNight;
private: System::Void EditHotel_Load(System::Object^  sender, System::EventArgs^  e) {
				 /********************************************((read))**********************************************************/
				 txtHotelName->Text = Name;
				 txtPricePerNight->Text = PricePerNight;
				 old = Name;
				 path = ".\\images\\Hotels\\" + txtHotelName->Text + ".jpg";
				 string x;
				 x = marshal_as<std::string>(".\\images\\Hotels\\" + txtHotelName->Text + ".jpg");
				 if (ifstream(x.c_str()))
				 {
					 System::ComponentModel::Container ^components;
					 Bitmap ^ Picture;
					 Picture = gcnew Bitmap(path);
					 Bitmap ^ Newpic = gcnew Bitmap(Picture, 165, 152);
					 Picture = Newpic;
					 Invalidate();
					 BrowsePicE->Image = Picture;
				 }
				 else
				 {
					 BrowsePicE->Image = BrowsePicE->BackgroundImage;
				 }
				 /********************************************((end of read))**********************************************************/
	}
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void txtHotelName_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 Name = txtHotelName->Text;
			 Text_Changed = true;
}
private: System::Void btnBrowse_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (txtHotelName->Text == "")
				 MessageBox::Show("Please Choose your Hotel Name First", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
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
						 m = Path::GetFullPath(openFileDialog1->FileName);
						 path = m;
						 Picture = gcnew Bitmap(m);
						 Bitmap ^ Newpic = gcnew Bitmap(Picture, 165, 152);
						 Picture = Newpic;
						 Invalidate();
						 BrowsePicE->Image = Picture;
						 image_changed = true; //to remove the old image
					 }
				 }
			 }
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 Name = txtHotelName->Text;
			 PricePerNight = txtPricePerNight->Text;
			 if (image_changed) //check if image changed or no
			 {
				 old = ".\\images\\Hotels\\" + old + ".jpg"; //Remove old image 
				 string std = Convert(old);
				 remove(std.c_str());
				 //---------------------((Copy image))------------------------------------------
				 m = path;
				 marshal_context context;
				 LPCTSTR lm = context.marshal_as<const TCHAR*>(m);
				 m = ".\\images\\Hotels\\" + txtHotelName->Text + ".jpg";
				 LPCTSTR tm = context.marshal_as<const TCHAR*>(m);
				 CopyFile(lm, tm, 0);
			 }
			 else if (Text_Changed == true)
			 {
				 old = ".\\images\\Hotels\\" + old + ".jpg";
				 m = ".\\images\\Hotels\\" + txtHotelName->Text + ".jpg";
				 rename(Convert(old).c_str(), Convert(m).c_str());
			 }
			 this->Close();
}

string Convert(String ^ s)
		 {
			 string x;
			 x = marshal_as<std::string>(s);
			 return x;
		 }
private: System::Void EditHotel_Activated(System::Object^  sender, System::EventArgs^  e) {
			 this->Owner->Enabled = false;
}
private: System::Void EditHotel_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
			 this->Owner->Enabled = true;
}
private: System::Void txtPricePerNight_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			 if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08){
				 e->Handled = true;
			 }
}
};
}
