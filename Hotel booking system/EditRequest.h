#pragma once
#include "HotelsList.h"
namespace Hotelbookingsystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for EditRequest
	/// </summary>
	public ref class EditRequest : public System::Windows::Forms::Form
	{
	public:
		EditRequest(void)
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
		~EditRequest()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  NORE;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  NONE;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  HIDE;

	private: System::Windows::Forms::PictureBox^  pictureBox1;


	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::LinkLabel^  ListHotel;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(EditRequest::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->NORE = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->NONE = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->HIDE = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->ListHotel = (gcnew System::Windows::Forms::LinkLabel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(168, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(251, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Edit Your Request";
			// 
			// NORE
			// 
			this->NORE->Location = System::Drawing::Point(215, 83);
			this->NORE->Name = L"NORE";
			this->NORE->Size = System::Drawing::Size(56, 20);
			this->NORE->TabIndex = 1;
			this->NORE->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &EditRequest::NORE_KeyPress);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(7, 75);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(202, 28);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Number of Rooms :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(7, 124);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(202, 28);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Number of Nights :";
			// 
			// NONE
			// 
			this->NONE->Location = System::Drawing::Point(215, 131);
			this->NONE->Name = L"NONE";
			this->NONE->Size = System::Drawing::Size(56, 20);
			this->NONE->TabIndex = 3;
			this->NONE->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &EditRequest::NONE_KeyPress);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(102, 178);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(107, 28);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Hotel ID :";
			// 
			// HIDE
			// 
			this->HIDE->Location = System::Drawing::Point(215, 184);
			this->HIDE->Name = L"HIDE";
			this->HIDE->Size = System::Drawing::Size(56, 20);
			this->HIDE->TabIndex = 5;
			this->HIDE->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &EditRequest::HIDE_KeyPress);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(548, 1);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(59, 59);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
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
			this->button2->Location = System::Drawing::Point(512, 265);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(91, 36);
			this->button2->TabIndex = 15;
			this->button2->Text = L"   Edit";
			this->button2->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &EditRequest::button2_Click);
			// 
			// ListHotel
			// 
			this->ListHotel->AutoSize = true;
			this->ListHotel->BackColor = System::Drawing::Color::Transparent;
			this->ListHotel->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ListHotel->Location = System::Drawing::Point(277, 190);
			this->ListHotel->Name = L"ListHotel";
			this->ListHotel->Size = System::Drawing::Size(76, 16);
			this->ListHotel->TabIndex = 16;
			this->ListHotel->TabStop = true;
			this->ListHotel->Text = L"Hotel list \?";
			this->ListHotel->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &EditRequest::ListHotel_LinkClicked);
			this->ListHotel->EnabledChanged += gcnew System::EventHandler(this, &EditRequest::ListHotel_EnabledChanged);
			// 
			// EditRequest
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(607, 307);
			this->Controls->Add(this->ListHotel);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->HIDE);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->NONE);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->NORE);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"EditRequest";
			this->Text = L"Edit Request";
			this->Activated += gcnew System::EventHandler(this, &EditRequest::EditRequest_Activated);
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &EditRequest::EditRequest_FormClosed);
			this->Load += gcnew System::EventHandler(this, &EditRequest::EditRequest_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		HotelsList ^ List = gcnew HotelsList;
   public: String^ NumORom;
	public: String^ NumONi;
	public: String^ ID;
	public: String^ total;
	public: String^ PPN;
	public: bool Text_Changed;
	private: System::Void EditRequest_Load(System::Object^  sender, System::EventArgs^  e) {
				 NORE->Text = NumORom;
				 NONE->Text = NumONi;
				 HIDE->Text = ID;
	}
	private: System::Void ListHotel_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
				 List->Owner = this;
				 List->ShowDialog();
	}
	private: System::Void ListHotel_EnabledChanged(System::Object^  sender, System::EventArgs^  e) {
				 if (this->Enabled == true)
				 {
					 if (List->is_changed)
					 {
						 HIDE->Text = List->id;
						 List->is_changed = false;
					 }

				 }
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (NORE->Text == "" || NONE->Text == "" || HIDE->Text == "")
					 MessageBox::Show("One or More Text Fields are Empty Operation Could Not Be Complete", "OPERATION FILED", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				 else
				 {
					 if (Check_Hotel(atoi(Convert(HIDE->Text).c_str()))) // check if the hotel id exists....
					 {
						 NumORom = NORE->Text;
						 NumONi = NONE->Text;
						 HIDE->Text = ID;
						 Text_Changed = true;
						 total = (atoi(Convert(NumORom).c_str()) * atoi(Convert(NumONi).c_str()) * atoi(Convert(PPN).c_str())).ToString();
						 MessageBox::Show("Total Cost updated succesfully ... New Request Cost is : " + total, "Success!", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
						 this->Close();
					 }
					 else
					 {
						 MessageBox::Show("Please enter Valid Hotel ID ! (use Hotel List To Help you)  ", "OPERATION FILED", MessageBoxButtons::OK, MessageBoxIcon::Warning);
						 HIDE->Text = "";
					 }
				 }
	}
	private: System::Void EditRequest_Activated(System::Object^  sender, System::EventArgs^  e) {
				 this->Owner->Enabled = false;
	}
	private: System::Void EditRequest_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
				 this->Owner->Enabled = true;
	}
			 string Convert(String ^ s)
			 {
				 string x;
				 x = marshal_as<std::string>(s);
				 return x;
			 }
private: System::Void NORE_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			 if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08){
				 e->Handled = true;
			 }
}
private: System::Void NONE_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			 if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08){
				 e->Handled = true;
			 }
}
private: System::Void HIDE_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			 if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08){
				 e->Handled = true;
			 }
}
};
}

