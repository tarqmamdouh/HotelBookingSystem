#pragma once
#include <string>
#include "APanel.h"
#include <fstream>
using namespace std;
namespace Hotelbookingsystem {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	/// <summary>
	/// Summary for login
	/// </summary>
	public ref class login : public System::Windows::Forms::Form
	{
	public:
		login(void)
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
		~login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  user;
	private: System::Windows::Forms::TextBox^  pass;
	private: System::Windows::Forms::Button^  btnLogIn;
	private: System::Windows::Forms::Button^  btnExit;



	protected:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(login::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->user = (gcnew System::Windows::Forms::TextBox());
			this->pass = (gcnew System::Windows::Forms::TextBox());
			this->btnLogIn = (gcnew System::Windows::Forms::Button());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Lucida Calligraphy", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(250, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(171, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"User Name";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Lucida Calligraphy", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(266, 92);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(145, 31);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Password";
			// 
			// user
			// 
			this->user->CharacterCasing = System::Windows::Forms::CharacterCasing::Lower;
			this->user->Location = System::Drawing::Point(424, 35);
			this->user->Name = L"user";
			this->user->Size = System::Drawing::Size(225, 20);
			this->user->TabIndex = 2;
			// 
			// pass
			// 
			this->pass->CharacterCasing = System::Windows::Forms::CharacterCasing::Lower;
			this->pass->Location = System::Drawing::Point(423, 95);
			this->pass->Name = L"pass";
			this->pass->PasswordChar = '*';
			this->pass->Size = System::Drawing::Size(225, 20);
			this->pass->TabIndex = 3;
			this->pass->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &login::pass_KeyUp);
			// 
			// btnLogIn
			// 
			this->btnLogIn->BackColor = System::Drawing::Color::Transparent;
			this->btnLogIn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnLogIn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnLogIn->Location = System::Drawing::Point(423, 142);
			this->btnLogIn->Name = L"btnLogIn";
			this->btnLogIn->Size = System::Drawing::Size(88, 32);
			this->btnLogIn->TabIndex = 4;
			this->btnLogIn->Text = L"LOG IN";
			this->btnLogIn->UseVisualStyleBackColor = false;
			this->btnLogIn->Click += gcnew System::EventHandler(this, &login::button1_Click);
			// 
			// btnExit
			// 
			this->btnExit->BackColor = System::Drawing::Color::Transparent;
			this->btnExit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnExit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnExit->Location = System::Drawing::Point(560, 141);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(88, 32);
			this->btnExit->TabIndex = 5;
			this->btnExit->Text = L"EXIT";
			this->btnExit->UseVisualStyleBackColor = false;
			this->btnExit->Click += gcnew System::EventHandler(this, &login::button2_Click);
			// 
			// login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(784, 258);
			this->Controls->Add(this->btnExit);
			this->Controls->Add(this->btnLogIn);
			this->Controls->Add(this->pass);
			this->Controls->Add(this->user);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(800, 297);
			this->Name = L"login";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"login";
			this->Activated += gcnew System::EventHandler(this, &login::login_Activated);
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &login::login_FormClosed);
			this->Load += gcnew System::EventHandler(this, &login::login_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		APanel ^ F = gcnew APanel();
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Close();
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (pass->Text == F->SC->P && user->Text == F->SC->U)
			 {
				 MessageBox::Show("Welcome " + user->Text + " !!","WELCOME !",MessageBoxButtons::OK,MessageBoxIcon::Asterisk);
				 this->Visible = false;
				 F->Show();
			 }
			 else
				 MessageBox::Show("Wrong User Name or Password !!","Error",MessageBoxButtons::OK,MessageBoxIcon::Stop);

}
private: System::Void login_Load(System::Object^  sender, System::EventArgs^  e) {
			 string user, pass;
			 ifstream load("cnfg.ini");
			 getline(load, user);
			 getline(load, pass);

			 F->SC->U = gcnew String(user.c_str());
			 F->SC->P = gcnew String(pass.c_str());
			 load.close();
}
private: System::Void button1_Roll(System::Object^  sender, System::EventArgs^  e)
{
}
private: System::Void login_Activated(System::Object^  sender, System::EventArgs^  e) {

}
private: System::Void login_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
			 /***************************************((Saving Configurations))********************************************/
			 ofstream cfg("cnfg.ini");
			 cfg << Convert(F->SC->U) << endl;
			 cfg << Convert(F->SC->U) << endl;
			/*************************************************************************************************************/
}
private: System::Void pass_KeyUp(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 if (e->KeyCode == Keys::Enter)
			 {
				 if (pass->Text == F->SC->P && user->Text == F->SC->U)
				 {
					 MessageBox::Show("Welcome " + user->Text + " !!", "WELCOME !", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
					 this->Visible = false;
					 F->Show();
				 }
				 else
					 MessageBox::Show("Wrong User Name or Password !!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Stop);
			 }
}
string Convert(String ^ s)
{
			 string x;
			 x = marshal_as<std::string>(s);
			 return x;
}
};
}
