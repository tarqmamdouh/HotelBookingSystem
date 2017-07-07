#pragma once
#include <fstream>
#include <algorithm>
#include <msclr\marshal_cppstd.h>
#include <stdio.h>
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
	/// Summary for setting
	/// </summary>
	public ref class setting : public System::Windows::Forms::Form
	{
	public:
		setting(void)
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
		~setting()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	protected:
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Button^  Change;

	private: System::Windows::Forms::TextBox^  UserN;
	private: System::Windows::Forms::TextBox^  Pass;
	private: System::Windows::Forms::TextBox^  rPass;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  Password;
	private: System::Windows::Forms::Label^  label2;










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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(setting::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->Change = (gcnew System::Windows::Forms::Button());
			this->UserN = (gcnew System::Windows::Forms::TextBox());
			this->Pass = (gcnew System::Windows::Forms::TextBox());
			this->rPass = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->Password = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::LightGray;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(682, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(86, 90);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::LightGray;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(0, 4);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(86, 89);
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::LightGray;
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(1, 2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(766, 90);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"groupBox1";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Algerian", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(86, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(597, 71);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Program Setting";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->Change);
			this->groupBox2->Controls->Add(this->UserN);
			this->groupBox2->Controls->Add(this->Pass);
			this->groupBox2->Controls->Add(this->rPass);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->Password);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Trajan Pro 3", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(4, 95);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(386, 213);
			this->groupBox2->TabIndex = 3;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Login Settings";
			// 
			// Change
			// 
			this->Change->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Change->Font = (gcnew System::Drawing::Font(L"Sitka Banner", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Change->Location = System::Drawing::Point(155, 159);
			this->Change->Name = L"Change";
			this->Change->Size = System::Drawing::Size(107, 33);
			this->Change->TabIndex = 4;
			this->Change->Text = L"Change...";
			this->Change->UseVisualStyleBackColor = true;
			this->Change->Click += gcnew System::EventHandler(this, &setting::button1_Click);
			// 
			// UserN
			// 
			this->UserN->CharacterCasing = System::Windows::Forms::CharacterCasing::Lower;
			this->UserN->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 11.25F, System::Drawing::FontStyle::Bold));
			this->UserN->Location = System::Drawing::Point(155, 37);
			this->UserN->Name = L"UserN";
			this->UserN->Size = System::Drawing::Size(184, 25);
			this->UserN->TabIndex = 9;
			// 
			// Pass
			// 
			this->Pass->CharacterCasing = System::Windows::Forms::CharacterCasing::Lower;
			this->Pass->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Pass->Location = System::Drawing::Point(155, 77);
			this->Pass->Name = L"Pass";
			this->Pass->PasswordChar = '*';
			this->Pass->Size = System::Drawing::Size(184, 25);
			this->Pass->TabIndex = 8;
			// 
			// rPass
			// 
			this->rPass->CharacterCasing = System::Windows::Forms::CharacterCasing::Lower;
			this->rPass->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 11.25F, System::Drawing::FontStyle::Bold));
			this->rPass->Location = System::Drawing::Point(155, 118);
			this->rPass->Name = L"rPass";
			this->rPass->PasswordChar = '*';
			this->rPass->Size = System::Drawing::Size(184, 25);
			this->rPass->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Andalus", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(6, 116);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(142, 30);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Repeat Password";
			// 
			// Password
			// 
			this->Password->AutoSize = true;
			this->Password->Font = (gcnew System::Drawing::Font(L"Andalus", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Password->Location = System::Drawing::Point(11, 74);
			this->Password->Name = L"Password";
			this->Password->Size = System::Drawing::Size(126, 30);
			this->Password->TabIndex = 5;
			this->Password->Text = L"New Password";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Andalus", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(22, 35);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(99, 30);
			this->label2->TabIndex = 4;
			this->label2->Text = L"User Name";
			// 
			// setting
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(767, 531);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Location = System::Drawing::Point(205, 118);
			this->Name = L"setting";
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"setting";
			this->Load += gcnew System::EventHandler(this, &setting::setting_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
			public:	String ^ U;
	        public:	String ^ P;
	private: System::Void setting_Load(System::Object^  sender, System::EventArgs^  e) {
				 ifstream cfg ("cnfg.ini");
				 string user;
				 getline(cfg,user);
				 String ^ USER = gcnew String(user.c_str());
				 UserN->Text = USER;
				 cfg.close();
	}

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (UserN->Text == "" || Pass->Text == "" || rPass->Text == "")
			 {
				 MessageBox::Show("One Or More Fields is Empty ... Settings Cannot Be applied !!", "Error",MessageBoxButtons::OK ,MessageBoxIcon::Error );
			 }
			 else if (Pass->Text != rPass->Text)
			 {
				 MessageBox::Show("Password Mismatch", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			 }
			 else
			 {
				 U = UserN->Text;
				 P = Pass->Text;
				 MessageBox::Show("User Name and Password Has Been Changed Successfully", "Success", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			 }

}

};
}
