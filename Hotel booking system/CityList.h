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
	/// Summary for CityList
	/// </summary>
	public ref class CityList : public System::Windows::Forms::Form
	{
	public:
		CityList(void)
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
		~CityList()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  Clist;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  LCName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  LCID;
	private: System::Windows::Forms::Button^  Sel;
	private: System::Windows::Forms::Button^  button1;
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
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(CityList::typeid));
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->Clist = (gcnew System::Windows::Forms::DataGridView());
			this->LCName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->LCID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Sel = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Clist))->BeginInit();
			this->SuspendLayout();
			// 
			// Clist
			// 
			this->Clist->AllowUserToDeleteRows = false;
			this->Clist->AllowUserToResizeColumns = false;
			this->Clist->AllowUserToResizeRows = false;
			this->Clist->BackgroundColor = System::Drawing::SystemColors::ButtonFace;
			this->Clist->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->Clist->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Clist->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) { this->LCName, this->LCID });
			this->Clist->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Clist->GridColor = System::Drawing::SystemColors::ControlDarkDark;
			resources->ApplyResources(this->Clist, L"Clist");
			this->Clist->MultiSelect = false;
			this->Clist->Name = L"Clist";
			this->Clist->ReadOnly = true;
			this->Clist->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->Clist->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &CityList::Clist_CellContentClick);
			this->Clist->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &CityList::Clist_MouseDoubleClick);
			// 
			// LCName
			// 
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->LCName->DefaultCellStyle = dataGridViewCellStyle1;
			resources->ApplyResources(this->LCName, L"LCName");
			this->LCName->Name = L"LCName";
			this->LCName->ReadOnly = true;
			// 
			// LCID
			// 
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->LCID->DefaultCellStyle = dataGridViewCellStyle2;
			resources->ApplyResources(this->LCID, L"LCID");
			this->LCID->Name = L"LCID";
			this->LCID->ReadOnly = true;
			// 
			// Sel
			// 
			this->Sel->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->Sel, L"Sel");
			this->Sel->Name = L"Sel";
			this->Sel->UseVisualStyleBackColor = true;
			this->Sel->Click += gcnew System::EventHandler(this, &CityList::Sel_Click);
			// 
			// button1
			// 
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->button1, L"button1");
			this->button1->Name = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &CityList::button1_Click);
			// 
			// CityList
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Sel);
			this->Controls->Add(this->Clist);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			this->Name = L"CityList";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &CityList::CityList_FormClosed);
			this->Load += gcnew System::EventHandler(this, &CityList::CityList_Load);
			this->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &CityList::CityList_MouseDoubleClick);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Clist))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	public: String ^ id;
	public: bool is_changed;
private: System::Void Clist_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	}
private: System::Void CityList_Load(System::Object^  sender, System::EventArgs^  e) {
				 ReadAllCities(Citiesarr, NCities, NCitiesID, NumHotels);
				 Clist->AllowUserToAddRows = true;
				 for (int i = 0; i < ((NCities)); i++)
				 {
					 Clist->Rows->Add();
					 String^ s = gcnew String(Citiesarr[i].CityName.c_str());
					 Clist->Rows[i]->Cells[0]->Value = s;
					 Clist->Rows[i]->Cells[1]->Value = Citiesarr[i].CityID;
				 }
				 Clist->AllowUserToAddRows = false;
				 this->Owner->Enabled = false;
				 is_changed = false;
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Close();
	}
private: System::Void Sel_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (Clist->RowCount == 0)
			 {
				 MessageBox::Show("No Cities Available please Add City First !!", "ERROR !!", MessageBoxButtons::OK, MessageBoxIcon::Error);
			 }
			 else
			 {
				 id = Clist->SelectedRows[0]->Cells[1]->Value->ToString();
				 is_changed = true;
			 }
			 this->Close();
}
private: System::Void CityList_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
			 this->Owner->Enabled = true;
			 Clist->Rows->Clear();
}
private: System::Void CityList_MouseDoubleClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {

}
private: System::Void Clist_MouseDoubleClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 if (Clist->RowCount == 0)
			 {
				 MessageBox::Show("No Cities Available please Add City First !!", "ERROR !!", MessageBoxButtons::OK, MessageBoxIcon::Error);
			 }
			 else
			 {
				 id = Clist->SelectedRows[0]->Cells[1]->Value->ToString();
				 is_changed = true;
			 }
			 this->Close();
}
};
}
