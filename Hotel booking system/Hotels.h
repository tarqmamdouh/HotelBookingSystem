#pragma once
#include "AddHotel.h"
#include "Hotelinfo.h"
#include "EditHotel.h"
namespace Hotelbookingsystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Hotels
	/// </summary>
	public ref class Hotels : public System::Windows::Forms::Form
	{
	public:
		Hotels(void)
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
		~Hotels()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  HotelsTable;
	private: System::Windows::Forms::GroupBox^  groupBox1;


	private: System::Windows::Forms::Button^  infoH;
	private: System::Windows::Forms::Button^  RemoveH;
	private: System::Windows::Forms::Button^  EditH;
	private: System::Windows::Forms::Button^  NewH;




	private: System::Windows::Forms::ContextMenuStrip^  RM;
	private: System::Windows::Forms::ToolStripMenuItem^  viewing;
	private: System::Windows::Forms::ToolStripMenuItem^  edititing;
	private: System::Windows::Forms::ToolStripMenuItem^  removing;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  HotelN;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  HotelID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  PPN;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  NOR;
	private: System::ComponentModel::IContainer^  components;








	protected:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Hotels::typeid));
			this->HotelsTable = (gcnew System::Windows::Forms::DataGridView());
			this->HotelN = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->HotelID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PPN = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->NOR = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->RM = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->viewing = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->edititing = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->removing = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->infoH = (gcnew System::Windows::Forms::Button());
			this->RemoveH = (gcnew System::Windows::Forms::Button());
			this->EditH = (gcnew System::Windows::Forms::Button());
			this->NewH = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->HotelsTable))->BeginInit();
			this->RM->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// HotelsTable
			// 
			this->HotelsTable->AllowUserToAddRows = false;
			this->HotelsTable->AllowUserToDeleteRows = false;
			this->HotelsTable->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->HotelsTable->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->HotelsTable->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->HotelsTable->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->HotelN, this->HotelID,
					this->PPN, this->NOR
			});
			this->HotelsTable->ContextMenuStrip = this->RM;
			this->HotelsTable->Cursor = System::Windows::Forms::Cursors::Hand;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::ActiveCaption;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->HotelsTable->DefaultCellStyle = dataGridViewCellStyle1;
			this->HotelsTable->Location = System::Drawing::Point(-2, 85);
			this->HotelsTable->MultiSelect = false;
			this->HotelsTable->Name = L"HotelsTable";
			this->HotelsTable->ReadOnly = true;
			this->HotelsTable->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->HotelsTable->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->HotelsTable->Size = System::Drawing::Size(769, 447);
			this->HotelsTable->StandardTab = true;
			this->HotelsTable->TabIndex = 1;
			this->HotelsTable->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Hotels::HotelsTable_CellContentClick);
			this->HotelsTable->EnabledChanged += gcnew System::EventHandler(this, &Hotels::HotelsTable_EnabledChanged);
			this->HotelsTable->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Hotels::HotelsTable_MouseDoubleClick);
			// 
			// HotelN
			// 
			this->HotelN->HeaderText = L"                 Hotel Name";
			this->HotelN->Name = L"HotelN";
			this->HotelN->ReadOnly = true;
			this->HotelN->Width = 180;
			// 
			// HotelID
			// 
			this->HotelID->HeaderText = L"                         ID";
			this->HotelID->Name = L"HotelID";
			this->HotelID->ReadOnly = true;
			this->HotelID->Width = 180;
			// 
			// PPN
			// 
			this->PPN->HeaderText = L"                 Price Per Night";
			this->PPN->Name = L"PPN";
			this->PPN->ReadOnly = true;
			this->PPN->Width = 180;
			// 
			// NOR
			// 
			this->NOR->HeaderText = L"           Location (City Name)";
			this->NOR->Name = L"NOR";
			this->NOR->ReadOnly = true;
			this->NOR->Width = 180;
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
			// 
			// viewing
			// 
			this->viewing->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"viewing.Image")));
			this->viewing->Name = L"viewing";
			this->viewing->Size = System::Drawing::Size(126, 22);
			this->viewing->Text = L"View..";
			this->viewing->Click += gcnew System::EventHandler(this, &Hotels::viewing_Click);
			// 
			// edititing
			// 
			this->edititing->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"edititing.Image")));
			this->edititing->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->edititing->Name = L"edititing";
			this->edititing->Size = System::Drawing::Size(126, 22);
			this->edititing->Text = L"Edit...";
			this->edititing->Click += gcnew System::EventHandler(this, &Hotels::edititing_Click);
			// 
			// removing
			// 
			this->removing->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"removing.Image")));
			this->removing->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->removing->Name = L"removing";
			this->removing->Size = System::Drawing::Size(126, 22);
			this->removing->Text = L"Remove...";
			this->removing->Click += gcnew System::EventHandler(this, &Hotels::removing_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::LightGray;
			this->groupBox1->Controls->Add(this->infoH);
			this->groupBox1->Controls->Add(this->RemoveH);
			this->groupBox1->Controls->Add(this->EditH);
			this->groupBox1->Controls->Add(this->NewH);
			this->groupBox1->Location = System::Drawing::Point(0, -5);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(767, 91);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Enter += gcnew System::EventHandler(this, &Hotels::groupBox1_Enter);
			// 
			// infoH
			// 
			this->infoH->BackColor = System::Drawing::Color::Transparent;
			this->infoH->Cursor = System::Windows::Forms::Cursors::Hand;
			this->infoH->FlatAppearance->BorderSize = 0;
			this->infoH->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->infoH->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DarkGray;
			this->infoH->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->infoH->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->infoH->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"infoH.Image")));
			this->infoH->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->infoH->Location = System::Drawing::Point(361, 11);
			this->infoH->Name = L"infoH";
			this->infoH->Size = System::Drawing::Size(109, 68);
			this->infoH->TabIndex = 3;
			this->infoH->Text = L"Hotel info";
			this->infoH->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->infoH->UseVisualStyleBackColor = false;
			this->infoH->Click += gcnew System::EventHandler(this, &Hotels::infoH_Click);
			// 
			// RemoveH
			// 
			this->RemoveH->BackColor = System::Drawing::Color::Transparent;
			this->RemoveH->Cursor = System::Windows::Forms::Cursors::Hand;
			this->RemoveH->FlatAppearance->BorderSize = 0;
			this->RemoveH->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->RemoveH->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DarkGray;
			this->RemoveH->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->RemoveH->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RemoveH->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"RemoveH.Image")));
			this->RemoveH->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->RemoveH->Location = System::Drawing::Point(239, 11);
			this->RemoveH->Name = L"RemoveH";
			this->RemoveH->Size = System::Drawing::Size(116, 68);
			this->RemoveH->TabIndex = 2;
			this->RemoveH->Text = L"Remove Hotel";
			this->RemoveH->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->RemoveH->UseVisualStyleBackColor = false;
			this->RemoveH->Click += gcnew System::EventHandler(this, &Hotels::RemoveH_Click);
			// 
			// EditH
			// 
			this->EditH->BackColor = System::Drawing::Color::Transparent;
			this->EditH->Cursor = System::Windows::Forms::Cursors::Hand;
			this->EditH->FlatAppearance->BorderSize = 0;
			this->EditH->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->EditH->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DarkGray;
			this->EditH->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->EditH->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EditH->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"EditH.Image")));
			this->EditH->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->EditH->Location = System::Drawing::Point(117, 11);
			this->EditH->Name = L"EditH";
			this->EditH->Size = System::Drawing::Size(89, 68);
			this->EditH->TabIndex = 1;
			this->EditH->Text = L"Edit Hotel";
			this->EditH->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->EditH->UseVisualStyleBackColor = false;
			this->EditH->Click += gcnew System::EventHandler(this, &Hotels::EditH_Click);
			// 
			// NewH
			// 
			this->NewH->BackColor = System::Drawing::Color::Transparent;
			this->NewH->Cursor = System::Windows::Forms::Cursors::Hand;
			this->NewH->FlatAppearance->BorderSize = 0;
			this->NewH->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->NewH->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DarkGray;
			this->NewH->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->NewH->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NewH->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"NewH.Image")));
			this->NewH->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->NewH->Location = System::Drawing::Point(12, 11);
			this->NewH->Name = L"NewH";
			this->NewH->Size = System::Drawing::Size(89, 68);
			this->NewH->TabIndex = 0;
			this->NewH->Text = L"New Hotel";
			this->NewH->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->NewH->UseVisualStyleBackColor = false;
			this->NewH->Click += gcnew System::EventHandler(this, &Hotels::NewH_Click);
			// 
			// Hotels
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(767, 531);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->HotelsTable);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Location = System::Drawing::Point(211, 119);
			this->Name = L"Hotels";
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"Hotels";
			this->Load += gcnew System::EventHandler(this, &Hotels::Hotels_Load);
			this->EnabledChanged += gcnew System::EventHandler(this, &Hotels::Hotels_EnabledChanged);
			this->VisibleChanged += gcnew System::EventHandler(this, &Hotels::Hotels_VisibleChanged);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->HotelsTable))->EndInit();
			this->RM->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

		Hotelinfo ^ info = gcnew Hotelinfo;
		EditHotel ^ Edit = gcnew EditHotel;
		int index;
		int Rows = 0;
	private: System::Void groupBox1_Enter(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void NewH_Click(System::Object^  sender, System::EventArgs^  e) {
				 AddHotel ^ form = gcnew AddHotel();
				 form->Owner = this;
				 form->Show();
	}
	private: System::Void Hotels_Load(System::Object^  sender, System::EventArgs^  e) {
				 HotelsTable->AllowUserToAddRows = true;
				 ReadAllCities(Citiesarr, NCities, NCitiesID, NumHotels);
				 ReadAllHotels(Hotelsarr, NHotels, NHotelsID, NPricePerNight, NincludeCity);
				 for (int i = 0; i < (NHotels); i++)
				 {
					 if (Check_city(Citiesarr, Hotelsarr[i].includeCity))
					 {
						 HotelsTable->Rows->Add();
						 String^ s = gcnew String(Hotelsarr[i].HotelName.c_str());
						 String^ CN = gcnew String((CityNAme(Hotelsarr[i].includeCity).c_str()));
						 //convert city id to city name

						 HotelsTable->Rows[Rows]->Cells[0]->Value = s;
						 HotelsTable->Rows[Rows]->Cells[1]->Value = Hotelsarr[i].HotelID;
						 HotelsTable->Rows[Rows]->Cells[2]->Value = Hotelsarr[i].PricePerNight;
						 HotelsTable->Rows[Rows]->Cells[3]->Value = CN;
						 Rows++;
					 }

				 }
				 Rows = 0;
				 HotelsTable->AllowUserToAddRows = false;
				 /**********************************************((Save))*******************************************************************************/
				 HotelsTable->Sort(HotelsTable->Columns[1], ListSortDirection::Ascending);
				 for (int i = 0; i < NHotels; i++)
				 {
					 if (Check_city(Citiesarr, Hotelsarr[i].includeCity))
					 {
						 Hotelsarr[Rows].HotelName = Convert(HotelsTable->Rows[Rows]->Cells[0]->Value->ToString());
						 Hotelsarr[Rows].HotelID = atoi(Convert(HotelsTable->Rows[Rows]->Cells[1]->Value->ToString()).c_str());
						 Hotelsarr[Rows].PricePerNight = atoi(Convert(HotelsTable->Rows[Rows]->Cells[2]->Value->ToString()).c_str());
						 int C_id = Get_City_ID(Convert(HotelsTable->Rows[Rows]->Cells[3]->Value->ToString()));
						 Hotelsarr[Rows].includeCity = C_id;
						 Rows++;
						 if (this->HotelsTable->RowCount == i)
							 break;
					 }
				 }
				 Rows = 0;
				 String ^ m;
				 string std;
				 m = ".\\data\\Hotels.txt";
				 std = msclr::interop::marshal_as<std::string>(m);
				 remove(std.c_str());
				 SaveHotels(Hotelsarr, NHotels);

	}
	private: System::Void HotelsTable_EnabledChanged(System::Object^  sender, System::EventArgs^  e) {
				 if (this->Enabled)
				 {
					 NHotels = 0; NHotelsID = 0; NPricePerNight = 0; NincludeCity = 0;
					 ReadAllHotels(Hotelsarr, NHotels, NHotelsID, NPricePerNight, NincludeCity);
					 ReadAllCities(Citiesarr, NCities, NCitiesID, NumHotels);
					 HotelsTable->Rows->Clear();
					 for (int i = 0; i < (NHotels); i++)
					 {
						 if (Check_city(Citiesarr, Hotelsarr[i].includeCity))
						 {
							 HotelsTable->Rows->Add();
							 String^ s = gcnew String(Hotelsarr[i].HotelName.c_str());
							 String^ CN = gcnew String((CityNAme(Hotelsarr[i].includeCity).c_str()));
							 //convert city id to city name

							 HotelsTable->Rows[i]->Cells[0]->Value = s;
							 HotelsTable->Rows[i]->Cells[1]->Value = Hotelsarr[i].HotelID;
							 HotelsTable->Rows[i]->Cells[2]->Value = Hotelsarr[i].PricePerNight;
							 HotelsTable->Rows[i]->Cells[3]->Value = CN;
						 }
					 }
					 /**********************************************((Save))*******************************************************************************/
					 String ^m;
					 string std;
					 HotelsTable->Sort(HotelsTable->Columns[1], ListSortDirection::Ascending);
					 m = ".\\data\\Hotels.txt";
					 std = msclr::interop::marshal_as<std::string>(m);
					 remove(std.c_str());
					 for (int i = 0; i < NHotels; i++)
					 {
						 Hotelsarr[i].HotelName = Convert(HotelsTable->Rows[i]->Cells[0]->Value->ToString());
						 Hotelsarr[i].HotelID = atoi(Convert(HotelsTable->Rows[i]->Cells[1]->Value->ToString()).c_str());
						 Hotelsarr[i].PricePerNight = atoi(Convert(HotelsTable->Rows[i]->Cells[2]->Value->ToString()).c_str());
						 Hotelsarr[i].includeCity = Get_City_ID(Convert(HotelsTable->Rows[i]->Cells[3]->Value->ToString()).c_str());

						 if (this->HotelsTable->RowCount == i)

							 break;

					 }
					 ofstream Hotel(".\\data\\Hotels.txt", ios::app);
					 SaveHotels(Hotelsarr, NHotels);
					 Hotel.close();
				 }
	}
	private: System::Void HotelsTable_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	}
	private: System::Void infoH_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (HotelsTable->RowCount == 0)
				 {
					 MessageBox::Show("No Hotels Availables ", "ERROR !!", MessageBoxButtons::OK, MessageBoxIcon::Error);
				 }
				 else
				 {
					 info->Name = HotelsTable->SelectedRows[0]->Cells[0]->Value->ToString();
					 info->ID = HotelsTable->SelectedRows[0]->Cells[1]->Value->ToString();
					 info->PricePerNight = HotelsTable->SelectedRows[0]->Cells[2]->Value->ToString();
					 info->CityName = HotelsTable->SelectedRows[0]->Cells[3]->Value->ToString();
					 info->ShowDialog();
				 }
	}
	private: System::Void EditH_Click(System::Object^  sender, System::EventArgs^  e) {
				 ReadAllHotels(Hotelsarr, NHotels, NHotelsID, NPricePerNight, NincludeCity);
				 if (HotelsTable->RowCount == 0)
				 {
					 MessageBox::Show("No Hotels Available please Add Hotel First !!", "ERROR !!", MessageBoxButtons::OK, MessageBoxIcon::Error);
				 }
				 else
				 {
					 index = HotelsTable->SelectedRows[0]->Index;
					 Edit->Name = HotelsTable->SelectedRows[0]->Cells[0]->Value->ToString();
					 Edit->PricePerNight = HotelsTable->SelectedRows[0]->Cells[2]->Value->ToString();
					 Edit->Owner = this;
					 Edit->ShowDialog();
				 }
	}
	private: System::Void Hotels_EnabledChanged(System::Object^  sender, System::EventArgs^  e) {
				 if (this->Enabled == true)
				 {
					 if (Edit->Text_Changed)
					 {

						 ReadAllHotels(Hotelsarr, NHotels, NHotelsID, NPricePerNight, NincludeCity);
						 HotelsTable->Rows[index]->Cells[0]->Value = Edit->Name;
						 HotelsTable->Rows[index]->Cells[2]->Value = Edit->PricePerNight;
						 /**********************************************((Save))*******************************************************************************/
						 HotelsTable->Sort(HotelsTable->Columns[1], ListSortDirection::Ascending);
						 for (int i = 0; i < NHotels; i++)
						 {
							 if (Check_city(Citiesarr, Hotelsarr[i].includeCity))
							 {
								 Hotelsarr[Rows].HotelName = Convert(HotelsTable->Rows[Rows]->Cells[0]->Value->ToString());
								 Hotelsarr[Rows].HotelID = atoi(Convert(HotelsTable->Rows[Rows]->Cells[1]->Value->ToString()).c_str());
								 Hotelsarr[Rows].PricePerNight = atoi(Convert(HotelsTable->Rows[Rows]->Cells[2]->Value->ToString()).c_str());
								 int C_id = Get_City_ID(Convert(HotelsTable->Rows[Rows]->Cells[3]->Value->ToString()));
								 Hotelsarr[Rows].includeCity = C_id;
								 Rows++;
								 if (this->HotelsTable->RowCount == i)
									 break;
							 }
						 }
						 Rows = 0;
						 String ^ m;
						 string std;
						 m = ".\\data\\Hotels.txt";
						 std = msclr::interop::marshal_as<std::string>(m);
						 remove(std.c_str());
						 SaveHotels(Hotelsarr, NHotels);
						 Edit->Text_Changed = false;
					 }
				 }
	}


	private: System::Void RemoveH_Click(System::Object^  sender, System::EventArgs^  e) {

				 if (HotelsTable->RowCount == 0)
				 {
					 MessageBox::Show("Nothing To Remove", "ERROR !!", MessageBoxButtons::OK, MessageBoxIcon::Error);
				 }
				 else
				 {
					 index = HotelsTable->SelectedRows[0]->Index;
					 /************************************************((Avoid Crash))********************************************************/
					 HotelsTable->Rows->Clear();
					 for (int i = 0; i < (NHotels); i++)
					 {
						 if (Check_city(Citiesarr, Hotelsarr[i].includeCity))
						 {
							 HotelsTable->Rows->Add();
							 String^ s = gcnew String(Hotelsarr[i].HotelName.c_str());
							 String^ CN = gcnew String((CityNAme(Hotelsarr[i].includeCity).c_str()));
							 //convert city id to city name

							 HotelsTable->Rows[i]->Cells[0]->Value = s;
							 HotelsTable->Rows[i]->Cells[1]->Value = Hotelsarr[i].HotelID;
							 HotelsTable->Rows[i]->Cells[2]->Value = Hotelsarr[i].PricePerNight;
							 HotelsTable->Rows[i]->Cells[3]->Value = CN;
						 }
					 }
					 /********************************************************************************************************/
					 if (MessageBox::Show("Are You Sure That You Want To Remove " + HotelsTable->Rows[index]->Cells[0]->Value->ToString() + " Hotel", "Are You Sure ?", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == ::System::Windows::Forms::DialogResult::Yes)
					 {
						 String ^ m;
						 /************************************************((Remove photo))********************************************************/
						 m = ".\\images\\Hotels\\" + HotelsTable->Rows[index]->Cells[0]->Value->ToString() + ".jpg";
						 string std = msclr::interop::marshal_as<std::string>(m);
						 remove(std.c_str());
						 /*********************************************((Remove From Code))***********************************************************/
						 int C_id = Get_City_ID(Convert(HotelsTable->Rows[index]->Cells[3]->Value->ToString()));
						 Decrease_Num_of_Hotels(Citiesarr, C_id);
						 HotelsTable->Rows->RemoveAt(index);
						 NHotels--;  NHotelsID--; NPricePerNight--; NincludeCity--;
						 /**********************************************((Save))*******************************************************************************/
						 HotelsTable->Sort(HotelsTable->Columns[1], ListSortDirection::Ascending);
						 HotelsTable->RowCount = NHotels;
						 for (int i = 0; i < NHotels; i++)
						 {
							 Hotelsarr[i].HotelName = Convert(HotelsTable->Rows[i]->Cells[0]->Value->ToString());
							 Hotelsarr[i].HotelID = atoi(Convert(HotelsTable->Rows[i]->Cells[1]->Value->ToString()).c_str());
							 Hotelsarr[i].PricePerNight = atoi(Convert(HotelsTable->Rows[i]->Cells[2]->Value->ToString()).c_str());
							 int C_id = Get_City_ID(Convert(HotelsTable->Rows[i]->Cells[3]->Value->ToString()));
							 Hotelsarr[i].includeCity = C_id;
							 if (this->HotelsTable->RowCount == i)
								 break;

						 }
						 m = ".\\data\\Hotels.txt";
						 std = msclr::interop::marshal_as<std::string>(m);
						 remove(std.c_str());
						 SaveHotels(Hotelsarr, NHotels);
					 }
				 }

	}
			 //------------------------------((convert from system string to std string ))----------------------------------------------------------
	string Convert(String ^ s)
			 {
				 string x;
				 x = marshal_as<std::string>(s);
				 return x;
			 }
	private: System::Void viewing_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (HotelsTable->RowCount == 0)
				 {
					 MessageBox::Show("No Hotels Availables ", "ERROR !!", MessageBoxButtons::OK, MessageBoxIcon::Error);
				 }
				 else
				 {
					 info->Name = HotelsTable->SelectedRows[0]->Cells[0]->Value->ToString();
					 info->ID = HotelsTable->SelectedRows[0]->Cells[1]->Value->ToString();
					 info->PricePerNight = HotelsTable->SelectedRows[0]->Cells[2]->Value->ToString();
					 info->CityName = HotelsTable->SelectedRows[0]->Cells[3]->Value->ToString();
					 info->ShowDialog();
				 }
	}
	private: System::Void edititing_Click(System::Object^  sender, System::EventArgs^  e) {
				 ReadAllHotels(Hotelsarr, NHotels, NHotelsID, NPricePerNight, NincludeCity);
				 if (HotelsTable->RowCount == 0)
				 {
					 MessageBox::Show("No Hotels Available please Add Hotel First !!", "ERROR !!", MessageBoxButtons::OK, MessageBoxIcon::Error);
				 }
				 else
				 {
					 index = HotelsTable->SelectedRows[0]->Index;
					 Edit->Name = HotelsTable->SelectedRows[0]->Cells[0]->Value->ToString();
					 Edit->PricePerNight = HotelsTable->SelectedRows[0]->Cells[2]->Value->ToString();
					 Edit->Owner = this;
					 Edit->ShowDialog();
				 }
	}
	private: System::Void removing_Click(System::Object^  sender, System::EventArgs^  e) {

				 if (HotelsTable->RowCount == 0)
				 {
					 MessageBox::Show("Nothing To Remove", "ERROR !!", MessageBoxButtons::OK, MessageBoxIcon::Error);
				 }
				 else
				 {
					 index = HotelsTable->SelectedRows[0]->Index;
					 /************************************************((Avoid Crash))********************************************************/
					 HotelsTable->Rows->Clear();
					 for (int i = 0; i < (NHotels); i++)
					 {
							 HotelsTable->Rows->Add();
							 String^ s = gcnew String(Hotelsarr[i].HotelName.c_str());
							 String^ CN = gcnew String((CityNAme(Hotelsarr[i].includeCity).c_str()));
							 //convert city id to city name

							 HotelsTable->Rows[i]->Cells[0]->Value = s;
							 HotelsTable->Rows[i]->Cells[1]->Value = Hotelsarr[i].HotelID;
							 HotelsTable->Rows[i]->Cells[2]->Value = Hotelsarr[i].PricePerNight;
							 HotelsTable->Rows[i]->Cells[3]->Value = CN;
					 }
					 /********************************************************************************************************/
					 if (MessageBox::Show("Are You Sure That You Want To Remove " + HotelsTable->Rows[index]->Cells[0]->Value->ToString() + "Hotel", "Are You Sure ?", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == ::System::Windows::Forms::DialogResult::Yes)
					 {
						 String ^ m;
						 /************************************************((Remove photo))********************************************************/
						 m = ".\\images\\Hotels\\" + HotelsTable->Rows[index]->Cells[0]->Value->ToString() + ".jpg";
						 string std = msclr::interop::marshal_as<std::string>(m);
						 remove(std.c_str());
						 /*********************************************((Remove From Code))***********************************************************/
						 int C_id = Get_City_ID(Convert(HotelsTable->Rows[index]->Cells[3]->Value->ToString()));
						 Decrease_Num_of_Hotels(Citiesarr, C_id);
						 HotelsTable->Rows->RemoveAt(index);
						 NHotels--;  NHotelsID--; NPricePerNight--; NincludeCity--;
						 /**********************************************((Save))*******************************************************************************/
						 HotelsTable->Sort(HotelsTable->Columns[1], ListSortDirection::Ascending);
						 HotelsTable->RowCount = NHotels;
						 for (int i = 0; i < NHotels; i++)
						 {
							 Hotelsarr[i].HotelName = Convert(HotelsTable->Rows[i]->Cells[0]->Value->ToString());
							 Hotelsarr[i].HotelID = atoi(Convert(HotelsTable->Rows[i]->Cells[1]->Value->ToString()).c_str());
							 Hotelsarr[i].PricePerNight = atoi(Convert(HotelsTable->Rows[i]->Cells[2]->Value->ToString()).c_str());
							 int C_id = Get_City_ID(Convert(HotelsTable->Rows[i]->Cells[3]->Value->ToString()));
							 Hotelsarr[i].includeCity = C_id;
							 if (this->HotelsTable->RowCount == i)
								 break;

						 }
						 m = ".\\data\\Hotels.txt";
						 std = msclr::interop::marshal_as<std::string>(m);
						 remove(std.c_str());
						 SaveHotels(Hotelsarr, NHotels);
					 }
				 }

	}
	private: System::Void Hotels_VisibleChanged(System::Object^  sender, System::EventArgs^  e) {
				 if (this->Visible == true)
				 {
					 NHotels = 0; NHotelsID = 0; NPricePerNight = 0; NincludeCity = 0;
					 ReadAllHotels(Hotelsarr, NHotels, NHotelsID, NPricePerNight, NincludeCity);
					 ReadAllCities(Citiesarr, NCities, NCitiesID, NumHotels);
					 HotelsTable->Rows->Clear();
					 for (int i = 0; i < (NHotels); i++)
					 {
						 if (Check_city(Citiesarr, Hotelsarr[i].includeCity))
						 {
							 HotelsTable->Rows->Add();
							 String^ s = gcnew String(Hotelsarr[i].HotelName.c_str());
							 String^ CN = gcnew String((CityNAme(Hotelsarr[i].includeCity).c_str()));
							 //convert city id to city name

							 HotelsTable->Rows[Rows]->Cells[0]->Value = s;
							 HotelsTable->Rows[Rows]->Cells[1]->Value = Hotelsarr[i].HotelID;
							 HotelsTable->Rows[Rows]->Cells[2]->Value = Hotelsarr[i].PricePerNight;
							 HotelsTable->Rows[Rows]->Cells[3]->Value = CN;
							 Rows++;
						 }

					 }
					 Rows = 0;
					 /**********************************************((Save))*******************************************************************************/
					 HotelsTable->Sort(HotelsTable->Columns[1], ListSortDirection::Ascending);
					 for (int i = 0; i < NHotels; i++)
					 {
						 if (Check_city(Citiesarr, Hotelsarr[i].includeCity))
						 {
						 Hotelsarr[Rows].HotelName = Convert(HotelsTable->Rows[Rows]->Cells[0]->Value->ToString());
						 Hotelsarr[Rows].HotelID = atoi(Convert(HotelsTable->Rows[Rows]->Cells[1]->Value->ToString()).c_str());
						 Hotelsarr[Rows].PricePerNight = atoi(Convert(HotelsTable->Rows[Rows]->Cells[2]->Value->ToString()).c_str());
						 int C_id = Get_City_ID(Convert(HotelsTable->Rows[Rows]->Cells[3]->Value->ToString()));
						 Hotelsarr[Rows].includeCity = C_id;
						 Rows++;
						 if (this->HotelsTable->RowCount == i)
							 break;
						 }
					 }
					 Rows = 0;
					 String ^ m;
					 string std;
					 m = ".\\data\\Hotels.txt";
					 std = msclr::interop::marshal_as<std::string>(m);
					 remove(std.c_str());
					 SaveHotels(Hotelsarr, NHotels);

				 }
	}
	private: System::Void HotelsTable_MouseDoubleClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
				 if (HotelsTable->RowCount == 0)
				 {
					 MessageBox::Show("No Hotels Availables ", "ERROR !!", MessageBoxButtons::OK, MessageBoxIcon::Error);
				 }
				 else
				 {
					 info->Name = HotelsTable->SelectedRows[0]->Cells[0]->Value->ToString();
					 info->ID = HotelsTable->SelectedRows[0]->Cells[1]->Value->ToString();
					 info->PricePerNight = HotelsTable->SelectedRows[0]->Cells[2]->Value->ToString();
					 info->CityName = HotelsTable->SelectedRows[0]->Cells[3]->Value->ToString();
					 info->ShowDialog();
				 }
	}
};
}