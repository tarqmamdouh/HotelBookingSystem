#pragma once
#include "AddCity.h"
#include "City.h"
#include "EditCity.h"
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
	/// Summary for Cities
	/// </summary>
	public ref class Cities : public System::Windows::Forms::Form
	{
	public:
		Cities(void)
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
		~Cities()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  CitiesTable;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  NewC;
	private: System::Windows::Forms::Button^  RemoveC;
	private: System::Windows::Forms::Button^  EditC;


	private: System::Windows::Forms::Button^  infoC;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  CityN;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  CityID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  NOH;
	private: System::Windows::Forms::ContextMenuStrip^  RM;
	private: System::Windows::Forms::ToolStripMenuItem^  edititing;

	private: System::Windows::Forms::ToolStripMenuItem^  removing;
	private: System::Windows::Forms::ToolStripMenuItem^  viewing;





	private: System::ComponentModel::IContainer^  components;







	protected:




	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Cities::typeid));
			this->CitiesTable = (gcnew System::Windows::Forms::DataGridView());
			this->CityN = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CityID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->NOH = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->RM = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->viewing = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->edititing = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->removing = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->infoC = (gcnew System::Windows::Forms::Button());
			this->RemoveC = (gcnew System::Windows::Forms::Button());
			this->EditC = (gcnew System::Windows::Forms::Button());
			this->NewC = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CitiesTable))->BeginInit();
			this->RM->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// CitiesTable
			// 
			this->CitiesTable->AllowUserToAddRows = false;
			this->CitiesTable->AllowUserToDeleteRows = false;
			this->CitiesTable->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->CitiesTable->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->CitiesTable->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->CitiesTable->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->CityN, this->CityID,
					this->NOH
			});
			this->CitiesTable->ContextMenuStrip = this->RM;
			this->CitiesTable->Cursor = System::Windows::Forms::Cursors::Hand;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::BottomCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::ActiveCaption;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->CitiesTable->DefaultCellStyle = dataGridViewCellStyle1;
			this->CitiesTable->Location = System::Drawing::Point(0, 87);
			this->CitiesTable->MultiSelect = false;
			this->CitiesTable->Name = L"CitiesTable";
			this->CitiesTable->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->CitiesTable->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->CitiesTable->Size = System::Drawing::Size(768, 445);
			this->CitiesTable->StandardTab = true;
			this->CitiesTable->TabIndex = 1;
			this->CitiesTable->EnabledChanged += gcnew System::EventHandler(this, &Cities::CitiesTable_EnabledChanged);
			this->CitiesTable->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Cities::CitiesTable_MouseDoubleClick);
			// 
			// CityN
			// 
			this->CityN->Frozen = true;
			this->CityN->HeaderText = L"                             City Name";
			this->CityN->Name = L"CityN";
			this->CityN->ReadOnly = true;
			this->CityN->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->CityN->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			this->CityN->Width = 240;
			// 
			// CityID
			// 
			this->CityID->HeaderText = L"                                 ID";
			this->CityID->Name = L"CityID";
			this->CityID->ReadOnly = true;
			this->CityID->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->CityID->Width = 240;
			// 
			// NOH
			// 
			this->NOH->HeaderText = L"                             Number of Hotels";
			this->NOH->Name = L"NOH";
			this->NOH->ReadOnly = true;
			this->NOH->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->NOH->Width = 240;
			// 
			// RM
			// 
			this->RM->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->viewing, this->edititing,
					this->removing
			});
			this->RM->Name = L"contextMenuStrip1";
			this->RM->RenderMode = System::Windows::Forms::ToolStripRenderMode::Professional;
			this->RM->Size = System::Drawing::Size(127, 70);
			this->RM->Opening += gcnew System::ComponentModel::CancelEventHandler(this, &Cities::RM_Opening);
			// 
			// viewing
			// 
			this->viewing->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"viewing.Image")));
			this->viewing->Name = L"viewing";
			this->viewing->Size = System::Drawing::Size(126, 22);
			this->viewing->Text = L"View..";
			this->viewing->Click += gcnew System::EventHandler(this, &Cities::view_Click);
			// 
			// edititing
			// 
			this->edititing->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"edititing.Image")));
			this->edititing->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->edititing->Name = L"edititing";
			this->edititing->Size = System::Drawing::Size(126, 22);
			this->edititing->Text = L"Edit...";
			this->edititing->Click += gcnew System::EventHandler(this, &Cities::edititing_Click);
			// 
			// removing
			// 
			this->removing->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"removing.Image")));
			this->removing->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->removing->Name = L"removing";
			this->removing->Size = System::Drawing::Size(126, 22);
			this->removing->Text = L"Remove...";
			this->removing->Click += gcnew System::EventHandler(this, &Cities::removing_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::LightGray;
			this->groupBox1->Controls->Add(this->infoC);
			this->groupBox1->Controls->Add(this->RemoveC);
			this->groupBox1->Controls->Add(this->EditC);
			this->groupBox1->Controls->Add(this->NewC);
			this->groupBox1->Location = System::Drawing::Point(1, -4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(767, 91);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			// 
			// infoC
			// 
			this->infoC->BackColor = System::Drawing::Color::Transparent;
			this->infoC->Cursor = System::Windows::Forms::Cursors::Hand;
			this->infoC->FlatAppearance->BorderSize = 0;
			this->infoC->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->infoC->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DarkGray;
			this->infoC->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->infoC->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->infoC->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"infoC.Image")));
			this->infoC->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->infoC->Location = System::Drawing::Point(361, 11);
			this->infoC->Name = L"infoC";
			this->infoC->Size = System::Drawing::Size(109, 68);
			this->infoC->TabIndex = 3;
			this->infoC->Text = L"City info";
			this->infoC->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->infoC->UseVisualStyleBackColor = false;
			this->infoC->Click += gcnew System::EventHandler(this, &Cities::infoC_Click);
			// 
			// RemoveC
			// 
			this->RemoveC->BackColor = System::Drawing::Color::Transparent;
			this->RemoveC->Cursor = System::Windows::Forms::Cursors::Hand;
			this->RemoveC->FlatAppearance->BorderSize = 0;
			this->RemoveC->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->RemoveC->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DarkGray;
			this->RemoveC->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->RemoveC->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RemoveC->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"RemoveC.Image")));
			this->RemoveC->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->RemoveC->Location = System::Drawing::Point(246, 11);
			this->RemoveC->Name = L"RemoveC";
			this->RemoveC->Size = System::Drawing::Size(109, 68);
			this->RemoveC->TabIndex = 2;
			this->RemoveC->Text = L"Remove City";
			this->RemoveC->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->RemoveC->UseVisualStyleBackColor = false;
			this->RemoveC->Click += gcnew System::EventHandler(this, &Cities::RemoveC_Click);
			// 
			// EditC
			// 
			this->EditC->BackColor = System::Drawing::Color::Transparent;
			this->EditC->Cursor = System::Windows::Forms::Cursors::Hand;
			this->EditC->FlatAppearance->BorderSize = 0;
			this->EditC->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->EditC->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DarkGray;
			this->EditC->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->EditC->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EditC->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"EditC.Image")));
			this->EditC->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->EditC->Location = System::Drawing::Point(131, 11);
			this->EditC->Name = L"EditC";
			this->EditC->Size = System::Drawing::Size(85, 68);
			this->EditC->TabIndex = 1;
			this->EditC->Text = L"Edit City";
			this->EditC->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->EditC->UseVisualStyleBackColor = false;
			this->EditC->Click += gcnew System::EventHandler(this, &Cities::EditC_Click);
			// 
			// NewC
			// 
			this->NewC->BackColor = System::Drawing::Color::Transparent;
			this->NewC->Cursor = System::Windows::Forms::Cursors::Hand;
			this->NewC->FlatAppearance->BorderSize = 0;
			this->NewC->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->NewC->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DarkGray;
			this->NewC->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->NewC->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NewC->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"NewC.Image")));
			this->NewC->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->NewC->Location = System::Drawing::Point(12, 11);
			this->NewC->Name = L"NewC";
			this->NewC->Size = System::Drawing::Size(85, 68);
			this->NewC->TabIndex = 0;
			this->NewC->Text = L"New City";
			this->NewC->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->NewC->UseVisualStyleBackColor = false;
			this->NewC->Click += gcnew System::EventHandler(this, &Cities::NewC_Click);
			// 
			// Cities
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(767, 531);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->CitiesTable);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Location = System::Drawing::Point(211, 119);
			this->Name = L"Cities";
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"Cities";
			this->Load += gcnew System::EventHandler(this, &Cities::Cities_Load);
			this->EnabledChanged += gcnew System::EventHandler(this, &Cities::Cities_EnabledChanged);
			this->VisibleChanged += gcnew System::EventHandler(this, &Cities::Cities_VisibleChanged);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CitiesTable))->EndInit();
			this->RM->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		AddCity ^ form = gcnew AddCity;
		City ^ info = gcnew City;
		EditCity ^ Edit = gcnew EditCity;;
		int index;
	private: System::Void tableLayoutPanel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	}
	private: System::Void EditC_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (CitiesTable->RowCount == 0)
				 {
					 MessageBox::Show("No Cities Available please Add City First !!", "ERROR !!", MessageBoxButtons::OK, MessageBoxIcon::Error);
				 }
				 else
				 {
					 index = CitiesTable->SelectedRows[0]->Index;
					 Edit->name = CitiesTable->SelectedRows[0]->Cells[0]->Value->ToString();
					 Edit->old = CitiesTable->SelectedRows[0]->Cells[0]->Value->ToString();
					 Edit->Owner = this;
					 Edit->ShowDialog();
				 }

	}
	private: System::Void NewC_Click(System::Object^  sender, System::EventArgs^  e) {
				 AddCity ^ form = gcnew AddCity();
				 form->Owner = this;
				 form->Show();

	}
	private: System::Void Cities_Load(System::Object^  sender, System::EventArgs^  e) {
				 CitiesTable->AllowUserToAddRows = true;
				 for (int i = 0; i < ((NCities)); i++)
				 {
					 CitiesTable->Rows->Add();
					 String^ s = gcnew String(Citiesarr[i].CityName.c_str());
					 CitiesTable->Rows[i]->Cells[0]->Value = s;
					 CitiesTable->Rows[i]->Cells[1]->Value = Citiesarr[i].CityID;
					 CitiesTable->Rows[i]->Cells[2]->Value = Citiesarr[i].NumbersOfHotels;
				 }
				 CitiesTable->AllowUserToAddRows = false;
	}
	private: System::Void CitiesTable_EnabledChanged(System::Object^  sender, System::EventArgs^  e) {
				 if (this->Enabled)
				 {
					 NCities = 0, NCitiesID = 0, NumHotels = 0;
					 ReadAllCities(Citiesarr, NCities, NCitiesID, NumHotels);
					 CitiesTable->Rows->Clear();
					 for (int i = 0; i < (NCities); i++)
					 {
						 CitiesTable->Rows->Add();
						 String^ s = gcnew String(Citiesarr[i].CityName.c_str());
						 CitiesTable->Rows[i]->Cells[0]->Value = s;
						 CitiesTable->Rows[i]->Cells[1]->Value = Citiesarr[i].CityID;
						 CitiesTable->Rows[i]->Cells[2]->Value = Citiesarr[i].NumbersOfHotels;
					 }
					 /**********************************************((Save))*******************************************************************************/
					 String ^m;
					 string std;
					 CitiesTable->Sort(CitiesTable->Columns[1], ListSortDirection::Ascending);
					 m = ".\\data\\Cities.txt";
					 std = msclr::interop::marshal_as<std::string>(m);
					 remove(std.c_str());
					 CitiesTable->RowCount = NCities;
					 for (int i = 0; i < NCities; i++)
					 {
						 Citiesarr[i].CityName = Convert(CitiesTable->Rows[i]->Cells[0]->Value->ToString());
						 Citiesarr[i].CityID = atoi(Convert(CitiesTable->Rows[i]->Cells[1]->Value->ToString()).c_str());
						 Citiesarr[i].NumbersOfHotels = atoi(Convert(CitiesTable->Rows[i]->Cells[2]->Value->ToString()).c_str());
						 if (this->CitiesTable->RowCount == i)

							 break;

					 }
					 ofstream City(".\\data\\Cities.txt", ios::app);
					 SaveCities(Citiesarr, NCities);
					 City.close();
				 }
	}
	private: System::Void infoC_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (CitiesTable->RowCount == 0)
				 {
					 MessageBox::Show("No Cities Available please Add City First !!", "ERROR !!", MessageBoxButtons::OK, MessageBoxIcon::Error);
				 }
				 else
				 {
					 info->S = CitiesTable->SelectedRows[0]->Cells[0]->Value->ToString();
					 info->ID = CitiesTable->SelectedRows[0]->Cells[1]->Value->ToString();
					 info->Num = CitiesTable->SelectedRows[0]->Cells[2]->Value->ToString();
					 info->ShowDialog();
				 }
	}
	private: System::Void view_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (CitiesTable->RowCount == 0)
				 {
					 MessageBox::Show("No Cities Available please Add City First !!", "ERROR !!", MessageBoxButtons::OK, MessageBoxIcon::Error);
				 }
				 else
				 {
					 info->S = CitiesTable->SelectedRows[0]->Cells[0]->Value->ToString();
					 info->ID = CitiesTable->SelectedRows[0]->Cells[1]->Value->ToString();
					 info->Num = CitiesTable->SelectedRows[0]->Cells[2]->Value->ToString();
					 info->ShowDialog();
				 }

	}
	private: System::Void RemoveC_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (CitiesTable->RowCount == 0)
				 {
					 MessageBox::Show("Nothing To Remove", "ERROR !!", MessageBoxButtons::OK, MessageBoxIcon::Error);
				 }
				 else
				 {
					 index = CitiesTable->SelectedRows[0]->Index;
					 /************************************************((Avoid Crash))********************************************************/
					 NCities = 0, NCitiesID = 0, NumHotels = 0;
					 ReadAllCities(Citiesarr, NCities, NCitiesID, NumHotels);
					 CitiesTable->Rows->Clear();
					 for (int i = 0; i < (NCities); i++)
					 {
						 CitiesTable->Rows->Add();
						 String^ s = gcnew String(Citiesarr[i].CityName.c_str());
						 CitiesTable->Rows[i]->Cells[0]->Value = s;
						 CitiesTable->Rows[i]->Cells[1]->Value = Citiesarr[i].CityID;

						 CitiesTable->Rows[i]->Cells[2]->Value = Citiesarr[i].NumbersOfHotels;
					 }
					 /********************************************************************************************************/
					 if (MessageBox::Show("Are You Sure That You Want To Remove " + CitiesTable->Rows[index]->Cells[0]->Value->ToString() + " City", "Are You Sure ?", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == ::System::Windows::Forms::DialogResult::Yes)
					 {
						 String ^ m;
					 /************************************************((Remove photo))********************************************************/
						 m = ".\\images\\Cities\\" + CitiesTable->Rows[index]->Cells[0]->Value->ToString() + ".jpg";
						 string std = msclr::interop::marshal_as<std::string>(m);
						 remove(std.c_str());
						 /************************************************((Remove text file))********************************************************/
						 m = ".\\data\\" + CitiesTable->Rows[index]->Cells[0]->Value->ToString() + ".txt";
						 std = msclr::interop::marshal_as<std::string>(m);
						 remove(std.c_str());
						 /*********************************************((Remove From Code))***********************************************************/
						 CitiesTable->Rows->RemoveAt(index);
						 NCities--;  NCitiesID--;   NumHotels--;
						 /**********************************************((Save))*******************************************************************************/
						 CitiesTable->Sort(CitiesTable->Columns[1], ListSortDirection::Ascending);
						 m = ".\\data\\Cities.txt";
						 std = msclr::interop::marshal_as<std::string>(m);
						 remove(std.c_str());
						 CitiesTable->RowCount = NCities;
						 for (int i = 0; i < NCities; i++)
						 {
							 Citiesarr[i].CityName = Convert(CitiesTable->Rows[i]->Cells[0]->Value->ToString());
							 Citiesarr[i].CityID = atoi(Convert(CitiesTable->Rows[i]->Cells[1]->Value->ToString()).c_str());
							 Citiesarr[i].NumbersOfHotels = atoi(Convert(CitiesTable->Rows[i]->Cells[2]->Value->ToString()).c_str());
							 if (this->CitiesTable->RowCount == i)

								 break;

						 }
						 ofstream City(".\\data\\Cities.txt", ios::app);
						 SaveCities(Citiesarr, NCities);
						 City.close();
					 }
				 }


	}
	private: System::Void RM_Opening(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
	}
	string Convert(String ^ s)
			 {
				 string x;
				 x = marshal_as<std::string>(s);
				 return x;
			 }
	private: System::Void removing_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (CitiesTable->RowCount == 0)
				 {
					 MessageBox::Show("Nothing To Remove", "ERROR !!", MessageBoxButtons::OK, MessageBoxIcon::Error);
				 }
				 else
				 {
					 index = CitiesTable->SelectedRows[0]->Index;
					 /************************************************((Avoid Crash))********************************************************/
					 NCities = 0, NCitiesID = 0, NumHotels = 0;
					 ReadAllCities(Citiesarr, NCities, NCitiesID, NumHotels);
					 CitiesTable->Rows->Clear();
					 for (int i = 0; i < (NCities); i++)
					 {
						 CitiesTable->Rows->Add();
						 String^ s = gcnew String(Citiesarr[i].CityName.c_str());
						 CitiesTable->Rows[i]->Cells[0]->Value = s;
						 CitiesTable->Rows[i]->Cells[1]->Value = Citiesarr[i].CityID;
						 CitiesTable->Rows[i]->Cells[2]->Value = Citiesarr[i].NumbersOfHotels;
					 }
					 /********************************************************************************************************/
					 if (MessageBox::Show("Are You Sure That You Want To Remove " + CitiesTable->Rows[index]->Cells[0]->Value->ToString() + " City", "Are You Sure ?", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == ::System::Windows::Forms::DialogResult::Yes)
					 {
						 String ^ m;
						 /************************************************((Remove photo))********************************************************/
						 m = ".\\images\\Cities\\" + CitiesTable->Rows[index]->Cells[0]->Value->ToString() + ".jpg";
						 string std = msclr::interop::marshal_as<std::string>(m);
						 remove(std.c_str());
						 /************************************************((Remove text file))********************************************************/
						 m = ".\\data\\" + CitiesTable->Rows[index]->Cells[0]->Value->ToString() + ".txt";
						 std = msclr::interop::marshal_as<std::string>(m);
						 remove(std.c_str());
						 /*********************************************((Remove From Code))***********************************************************/
						 CitiesTable->Rows->RemoveAt(index);
						 NCities--;  NCitiesID--;   NumHotels--;
						 /**********************************************((Save))*******************************************************************************/
						 CitiesTable->Sort(CitiesTable->Columns[1], ListSortDirection::Ascending);
						 m = ".\\data\\Cities.txt";
						 std = msclr::interop::marshal_as<std::string>(m);
						 remove(std.c_str());
						 CitiesTable->RowCount = NCities;
						 for (int i = 0; i < NCities; i++)
						 {
							 Citiesarr[i].CityName = Convert(CitiesTable->Rows[i]->Cells[0]->Value->ToString());
							 Citiesarr[i].CityID = atoi(Convert(CitiesTable->Rows[i]->Cells[1]->Value->ToString()).c_str());
							 Citiesarr[i].NumbersOfHotels = atoi(Convert(CitiesTable->Rows[i]->Cells[2]->Value->ToString()).c_str());
							 if (this->CitiesTable->RowCount == i)
								 break;
						 }
						 ofstream City(".\\data\\Cities.txt", ios::app);
						 SaveCities(Citiesarr, NCities);
						 City.close();
					 }
				 }

	}
	private: System::Void CitiesTable_MouseDoubleClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
				 if (CitiesTable->RowCount == 0)
				 {
					 MessageBox::Show("No Cities Available please Add City First !!", "ERROR !!", MessageBoxButtons::OK, MessageBoxIcon::Error);
				 }
				 else
				 {
					 info->S = CitiesTable->SelectedRows[0]->Cells[0]->Value->ToString();
					 info->ID = CitiesTable->SelectedRows[0]->Cells[1]->Value->ToString();
					 info->Num = CitiesTable->SelectedRows[0]->Cells[2]->Value->ToString();
					 info->ShowDialog();
				 }

	}
	private: System::Void Cities_EnabledChanged(System::Object^  sender, System::EventArgs^  e) {
				 if (this->Enabled == true)
				 {
					 if (Edit->Text_Changed)
					 {
						 CitiesTable->Rows[index]->Cells[0]->Value = Edit->name;
						 /**********************************************((Save))*******************************************************************************/
						 CitiesTable->Sort(CitiesTable->Columns[1], ListSortDirection::Ascending);
						 String ^ m;
						 string std;
						 m = ".\\data\\Cities.txt";
						 std = msclr::interop::marshal_as<std::string>(m);
						 remove(std.c_str());
						 CitiesTable->RowCount = NCities;
						 for (int i = 0; i < NCities; i++)
						 {
							 Citiesarr[i].CityName = Convert(CitiesTable->Rows[i]->Cells[0]->Value->ToString());
							 Citiesarr[i].CityID = atoi(Convert(CitiesTable->Rows[i]->Cells[1]->Value->ToString()).c_str());
							 Citiesarr[i].NumbersOfHotels = atoi(Convert(CitiesTable->Rows[i]->Cells[2]->Value->ToString()).c_str());
							 if (this->CitiesTable->RowCount == i)

								 break;

						 }
						 ofstream City(".\\data\\Cities.txt", ios::app);
						 SaveCities(Citiesarr, NCities);
						 City.close();
						 Edit->Text_Changed = false;
					 }
				 }
	}
	private: System::Void edititing_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (CitiesTable->RowCount == 0)
				 {
					 MessageBox::Show("No Cities Available please Add City First !!", "ERROR !!", MessageBoxButtons::OK, MessageBoxIcon::Error);
				 }
				 else
				 {
					 index = CitiesTable->SelectedRows[0]->Index;
					 Edit->name = CitiesTable->SelectedRows[0]->Cells[0]->Value->ToString();
					 Edit->old = CitiesTable->SelectedRows[0]->Cells[0]->Value->ToString();
					 Edit->Owner = this;
					 Edit->ShowDialog();
				 }
	}
	private: System::Void Cities_VisibleChanged(System::Object^  sender, System::EventArgs^  e) {
				 if (this->Visible)
				 {
					 NCities = 0, NCitiesID = 0, NumHotels = 0;
					 ReadAllCities(Citiesarr, NCities, NCitiesID, NumHotels);
					 CitiesTable->Rows->Clear();
					 for (int i = 0; i < (NCities); i++)
					 {
						 CitiesTable->Rows->Add();
						 String^ s = gcnew String(Citiesarr[i].CityName.c_str());
						 CitiesTable->Rows[i]->Cells[0]->Value = s;
						 CitiesTable->Rows[i]->Cells[1]->Value = Citiesarr[i].CityID;
						 CitiesTable->Rows[i]->Cells[2]->Value = Citiesarr[i].NumbersOfHotels;
					 }
				 }
	};
	};
}