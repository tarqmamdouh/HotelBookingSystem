#pragma once
#include "Hotels.h"
namespace Hotelbookingsystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for HotelsList
	/// </summary>
	public ref class HotelsList : public System::Windows::Forms::Form
	{
	public:
		HotelsList(void)
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
		~HotelsList()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::Button^  Sel;
	public: System::Windows::Forms::DataGridView^  Hlist;
	private:


	private: System::Windows::Forms::DataGridViewTextBoxColumn^  LCName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  LCID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  PPN;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(HotelsList::typeid));
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Sel = (gcnew System::Windows::Forms::Button());
			this->Hlist = (gcnew System::Windows::Forms::DataGridView());
			this->LCName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->LCID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PPN = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Hlist))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F));
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->button1->Location = System::Drawing::Point(524, 420);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(80, 24);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Close";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &HotelsList::button1_Click);
			// 
			// Sel
			// 
			this->Sel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Sel->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Sel.Image")));
			this->Sel->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->Sel->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->Sel->Location = System::Drawing::Point(430, 421);
			this->Sel->Name = L"Sel";
			this->Sel->Size = System::Drawing::Size(80, 23);
			this->Sel->TabIndex = 4;
			this->Sel->Text = L"Select";
			this->Sel->UseVisualStyleBackColor = true;
			this->Sel->Click += gcnew System::EventHandler(this, &HotelsList::Sel_Click);
			// 
			// Hlist
			// 
			this->Hlist->AllowUserToDeleteRows = false;
			this->Hlist->AllowUserToResizeColumns = false;
			this->Hlist->AllowUserToResizeRows = false;
			this->Hlist->BackgroundColor = System::Drawing::SystemColors::ButtonFace;
			this->Hlist->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->Hlist->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Hlist->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->LCName, this->LCID,
					this->PPN
			});
			this->Hlist->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Hlist->GridColor = System::Drawing::SystemColors::ControlDarkDark;
			this->Hlist->Location = System::Drawing::Point(0, 4);
			this->Hlist->MultiSelect = false;
			this->Hlist->Name = L"Hlist";
			this->Hlist->ReadOnly = true;
			this->Hlist->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->Hlist->Size = System::Drawing::Size(615, 407);
			this->Hlist->TabIndex = 3;
			this->Hlist->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &HotelsList::Hlist_MouseDoubleClick);
			// 
			// LCName
			// 
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->LCName->DefaultCellStyle = dataGridViewCellStyle1;
			this->LCName->HeaderText = L"                   Hotel Name";
			this->LCName->Name = L"LCName";
			this->LCName->ReadOnly = true;
			this->LCName->Width = 190;
			// 
			// LCID
			// 
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->LCID->DefaultCellStyle = dataGridViewCellStyle2;
			this->LCID->HeaderText = L"                        ID";
			this->LCID->Name = L"LCID";
			this->LCID->ReadOnly = true;
			this->LCID->Width = 190;
			// 
			// PPN
			// 
			this->PPN->HeaderText = L"              Price Per Night";
			this->PPN->Name = L"PPN";
			this->PPN->ReadOnly = true;
			this->PPN->Width = 190;
			// 
			// HotelsList
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(614, 448);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Sel);
			this->Controls->Add(this->Hlist);
			this->Name = L"HotelsList";
			this->Text = L"Hotels List";
			this->Activated += gcnew System::EventHandler(this, &HotelsList::HotelsList_Activated);
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &HotelsList::HotelsList_FormClosed);
			this->Load += gcnew System::EventHandler(this, &HotelsList::HotelsList_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Hlist))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
public: String ^ PPNight;
public: String ^ id;
public: bool is_changed;
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Close();
	}
private: System::Void HotelsList_Load(System::Object^  sender, System::EventArgs^  e) {
			 ReadAllHotels(Hotelsarr, NHotels, NHotelsID, NPricePerNight, NincludeCity);
			 Hlist->AllowUserToAddRows = true;
			 for (int i = 0; i < ((NHotels)); i++)
			 {
				 Hlist->Rows->Add();
				 String^ s = gcnew String(Hotelsarr[i].HotelName.c_str());
				 Hlist->Rows[i]->Cells[0]->Value = s;
				 Hlist->Rows[i]->Cells[1]->Value = Hotelsarr[i].HotelID;
				 Hlist->Rows[i]->Cells[2]->Value = Hotelsarr[i].PricePerNight;
			 }
			 Hlist->AllowUserToAddRows = false;
			 is_changed = false;
}
private: System::Void HotelsList_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
			 this->Owner->Enabled = true;
			 Hlist->Rows->Clear();
}
private: System::Void Sel_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (Hlist->RowCount == 0)
			 {
				 MessageBox::Show("No Cities Available please Add City First !!", "ERROR !!", MessageBoxButtons::OK, MessageBoxIcon::Error);
			 }
			 else
			 {
				 id = Hlist->SelectedRows[0]->Cells[1]->Value->ToString();
				 Name = Hlist->SelectedRows[0]->Cells[0]->Value->ToString();
				 PPNight = Hlist->SelectedRows[0]->Cells[2]->Value->ToString();
				 is_changed = true;
			 }
			 this->Close();
}
private: System::Void Hlist_MouseDoubleClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 if (Hlist->RowCount == 0)
			 {
				 MessageBox::Show("No Hotels Available please Add Hotel First !!", "ERROR !!", MessageBoxButtons::OK, MessageBoxIcon::Error);
			 }
			 else
			 {
				 id = Hlist->SelectedRows[0]->Cells[1]->Value->ToString();
				 Name = Hlist->SelectedRows[0]->Cells[0]->Value->ToString();
				 PPNight = Hlist->SelectedRows[0]->Cells[2]->Value->ToString();
				 is_changed = true;
			 }
			 this->Close();
}
private: System::Void HotelsList_Activated(System::Object^  sender, System::EventArgs^  e) {
			 this->Owner->Enabled = false;
}
};
}
