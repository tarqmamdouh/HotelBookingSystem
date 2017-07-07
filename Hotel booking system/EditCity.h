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
	/// Summary for EditCity
	/// </summary>
	public ref class EditCity : public System::Windows::Forms::Form
	{
	public:
		EditCity(void)
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
		~EditCity()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  NameE;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::RichTextBox^  DescE;
	public: System::Windows::Forms::PictureBox^  BrowsePicE;
	private: System::Windows::Forms::Button^  BrowseFE;
	public:
	private: System::Windows::Forms::Button^  button2;
	private:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(EditCity::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->NameE = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->DescE = (gcnew System::Windows::Forms::RichTextBox());
			this->BrowsePicE = (gcnew System::Windows::Forms::PictureBox());
			this->BrowseFE = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BrowsePicE))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Lucida Bright", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Location = System::Drawing::Point(343, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(167, 40);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Edit City";
			this->label1->Click += gcnew System::EventHandler(this, &EditCity::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Lucida Bright", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label2->Location = System::Drawing::Point(198, 85);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(152, 27);
			this->label2->TabIndex = 1;
			this->label2->Text = L"City Name :";
			// 
			// NameE
			// 
			this->NameE->Location = System::Drawing::Point(349, 91);
			this->NameE->Name = L"NameE";
			this->NameE->Size = System::Drawing::Size(237, 20);
			this->NameE->TabIndex = 2;
			this->NameE->TextChanged += gcnew System::EventHandler(this, &EditCity::NameE_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Lucida Bright", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label3->Location = System::Drawing::Point(187, 139);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(164, 27);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Description :";
			// 
			// DescE
			// 
			this->DescE->Location = System::Drawing::Point(350, 147);
			this->DescE->Name = L"DescE";
			this->DescE->Size = System::Drawing::Size(236, 182);
			this->DescE->TabIndex = 4;
			this->DescE->Text = L"";
			// 
			// BrowsePicE
			// 
			this->BrowsePicE->BackColor = System::Drawing::Color::Transparent;
			this->BrowsePicE->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BrowsePicE.BackgroundImage")));
			this->BrowsePicE->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->BrowsePicE->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->BrowsePicE->Location = System::Drawing::Point(628, 9);
			this->BrowsePicE->Name = L"BrowsePicE";
			this->BrowsePicE->Size = System::Drawing::Size(163, 134);
			this->BrowsePicE->TabIndex = 10;
			this->BrowsePicE->TabStop = false;
			// 
			// BrowseFE
			// 
			this->BrowseFE->BackColor = System::Drawing::SystemColors::Control;
			this->BrowseFE->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BrowseFE.Image")));
			this->BrowseFE->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->BrowseFE->Location = System::Drawing::Point(691, 149);
			this->BrowseFE->Name = L"BrowseFE";
			this->BrowseFE->Size = System::Drawing::Size(96, 28);
			this->BrowseFE->TabIndex = 11;
			this->BrowseFE->Text = L"Browse..";
			this->BrowseFE->UseVisualStyleBackColor = false;
			this->BrowseFE->Click += gcnew System::EventHandler(this, &EditCity::BrowseFE_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::Control;
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
			this->button2->Location = System::Drawing::Point(700, 450);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(91, 36);
			this->button2->TabIndex = 12;
			this->button2->Text = L"   Edit";
			this->button2->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &EditCity::button2_Click);
			// 
			// EditCity
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(799, 498);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->BrowseFE);
			this->Controls->Add(this->BrowsePicE);
			this->Controls->Add(this->DescE);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->NameE);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"EditCity";
			this->Text = L"Edit City";
			this->Activated += gcnew System::EventHandler(this, &EditCity::EditCity_Activated);
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &EditCity::EditCity_FormClosed);
			this->Load += gcnew System::EventHandler(this, &EditCity::EditCity_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BrowsePicE))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: String^ old;
	public: String^ name;
	public: String^ Desc;
	public: String^ path;
	public: bool Text_Changed;
			String ^ m;
			String ^ mb;
			OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
			bool image_changed;
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void BrowseFE_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (NameE->Text == "")
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
							 m = Path::GetFullPath(openFileDialog1->FileName);;
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
	private: System::Void EditCity_Load(System::Object^  sender, System::EventArgs^  e) {
				 /********************************************((read))**********************************************************/
				 NameE->Text = name;
				 DescE->Text = Desc;
				 string m, v;
				 string x;
				 x = marshal_as<std::string>(NameE->Text);
				 m = ".\\data\\" + x + ".txt";
				 ifstream file(m);
				 while (getline(file, m))
				 {
					 v += m;
					 v += "\n";
				 }
				 String ^ bla = gcnew String(v.c_str());
				 DescE->Text = bla;
				 path = ".\\images\\Cities\\" + NameE->Text + ".jpg";
				 x = marshal_as<std::string>(".\\images\\Cities\\" + NameE->Text + ".jpg");
				 if (ifstream(x))
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

	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 name = NameE->Text;
				 Desc = DescE->Text;
				 //edit description file
				 m = ".\\data\\" + old + ".txt";
				 mb = ".\\data\\" + name + ".txt";
				 rename(Convert(m).c_str(), Convert(mb).c_str());
				 m = ".\\data\\" + name + ".txt";
				 ofstream ne(Convert(mb).c_str());
				 ne << Convert(Desc) << endl;
				 // end of edit ...
				 if (image_changed== true ) //check if image changed or no
				 {
					 image_changed = false;
					 old = ".\\images\\Cities\\" + old + ".jpg"; //Remove old image 
					 string std = Convert(old);
					 remove(std.c_str());
					 //---------------------((Copy image))------------------------------------------
					 m = Path::GetFullPath(openFileDialog1->FileName);
					 marshal_context context;
					 LPCTSTR lm = context.marshal_as<const TCHAR*>(m);
					 m = ".\\images\\Cities\\" + NameE->Text + ".jpg";
					 LPCTSTR tm = context.marshal_as<const TCHAR*>(m);
					 CopyFile(lm, tm, 0);
				 }
				 else if (Text_Changed == true)
				 {
					 old = ".\\images\\Cities\\" + old + ".jpg";
					 m = ".\\images\\Cities\\" + NameE->Text + ".jpg";
					 rename(Convert(old).c_str(), Convert(m).c_str());
				 }
				 this->Close();
	}
			 //------------------------------((convert from system string to std string ))----------------------------------------------------------
			 string Convert(String ^ s)
			 {
				 string x;
				 x = marshal_as<std::string>(s);
				 return x;
			 }
	private: System::Void EditCity_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
				 name = NameE->Text;
				 Desc = DescE->Text;
				 this->Owner->Enabled = true;
	}
	private: System::Void EditCity_Activated(System::Object^  sender, System::EventArgs^  e) {
				 this->Owner->Enabled = false;
	}
	private: System::Void NameE_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 name = NameE->Text;
				 Text_Changed = true;
	}


	
};
}