#pragma once
#include "AddRequest.h"
#include "EditRequest.h"
#include "Requestinfo.h"
namespace Hotelbookingsystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Requests
	/// </summary>
	public ref class Requests : public System::Windows::Forms::Form
	{
	public:
		Requests(void)
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
		~Requests()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  infoR;
	protected:

	private: System::Windows::Forms::Button^  RemoveR;



	private: System::Windows::Forms::Button^  NewR;

	private: System::Windows::Forms::DataGridView^  RequestTable;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  CityID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  NOR;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  NOH;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  HN;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  RequestC;
	private: System::Windows::Forms::Button^  EditR;
	private: System::Windows::Forms::ContextMenuStrip^  RM;
	private: System::Windows::Forms::ToolStripMenuItem^  viewing;
	private: System::Windows::Forms::ToolStripMenuItem^  edititing;
	private: System::Windows::Forms::ToolStripMenuItem^  removing;
	private: System::ComponentModel::IContainer^  components;





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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Requests::typeid));
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->infoR = (gcnew System::Windows::Forms::Button());
			this->RemoveR = (gcnew System::Windows::Forms::Button());
			this->EditR = (gcnew System::Windows::Forms::Button());
			this->NewR = (gcnew System::Windows::Forms::Button());
			this->RequestTable = (gcnew System::Windows::Forms::DataGridView());
			this->CityID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->NOR = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->NOH = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->HN = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->RequestC = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->RM = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->viewing = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->edititing = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->removing = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RequestTable))->BeginInit();
			this->RM->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::LightGray;
			this->groupBox1->Controls->Add(this->infoR);
			this->groupBox1->Controls->Add(this->RemoveR);
			this->groupBox1->Controls->Add(this->EditR);
			this->groupBox1->Controls->Add(this->NewR);
			this->groupBox1->Location = System::Drawing::Point(0, -3);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(767, 91);
			this->groupBox1->TabIndex = 3;
			this->groupBox1->TabStop = false;
			// 
			// infoR
			// 
			this->infoR->BackColor = System::Drawing::Color::Transparent;
			this->infoR->Cursor = System::Windows::Forms::Cursors::Hand;
			this->infoR->FlatAppearance->BorderSize = 0;
			this->infoR->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->infoR->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DarkGray;
			this->infoR->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->infoR->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->infoR->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"infoR.Image")));
			this->infoR->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->infoR->Location = System::Drawing::Point(385, 11);
			this->infoR->Name = L"infoR";
			this->infoR->Size = System::Drawing::Size(109, 68);
			this->infoR->TabIndex = 3;
			this->infoR->Text = L"Request  info";
			this->infoR->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->infoR->UseVisualStyleBackColor = false;
			this->infoR->Click += gcnew System::EventHandler(this, &Requests::infoR_Click);
			// 
			// RemoveR
			// 
			this->RemoveR->BackColor = System::Drawing::Color::Transparent;
			this->RemoveR->Cursor = System::Windows::Forms::Cursors::Hand;
			this->RemoveR->FlatAppearance->BorderSize = 0;
			this->RemoveR->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->RemoveR->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DarkGray;
			this->RemoveR->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->RemoveR->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RemoveR->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"RemoveR.Image")));
			this->RemoveR->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->RemoveR->Location = System::Drawing::Point(246, 11);
			this->RemoveR->Name = L"RemoveR";
			this->RemoveR->Size = System::Drawing::Size(133, 68);
			this->RemoveR->TabIndex = 2;
			this->RemoveR->Text = L"Remove Request";
			this->RemoveR->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->RemoveR->UseVisualStyleBackColor = false;
			this->RemoveR->Click += gcnew System::EventHandler(this, &Requests::RemoveR_Click);
			// 
			// EditR
			// 
			this->EditR->BackColor = System::Drawing::Color::Transparent;
			this->EditR->Cursor = System::Windows::Forms::Cursors::Hand;
			this->EditR->FlatAppearance->BorderSize = 0;
			this->EditR->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->EditR->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DarkGray;
			this->EditR->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->EditR->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EditR->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"EditR.Image")));
			this->EditR->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->EditR->Location = System::Drawing::Point(131, 11);
			this->EditR->Name = L"EditR";
			this->EditR->Size = System::Drawing::Size(109, 68);
			this->EditR->TabIndex = 1;
			this->EditR->Text = L"Edit Request";
			this->EditR->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->EditR->UseVisualStyleBackColor = false;
			this->EditR->Click += gcnew System::EventHandler(this, &Requests::EditR_Click);
			// 
			// NewR
			// 
			this->NewR->BackColor = System::Drawing::Color::Transparent;
			this->NewR->Cursor = System::Windows::Forms::Cursors::Hand;
			this->NewR->FlatAppearance->BorderSize = 0;
			this->NewR->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->NewR->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DarkGray;
			this->NewR->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->NewR->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NewR->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"NewR.Image")));
			this->NewR->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->NewR->Location = System::Drawing::Point(12, 11);
			this->NewR->Name = L"NewR";
			this->NewR->Size = System::Drawing::Size(113, 68);
			this->NewR->TabIndex = 0;
			this->NewR->Text = L"New Request";
			this->NewR->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->NewR->UseVisualStyleBackColor = false;
			this->NewR->Click += gcnew System::EventHandler(this, &Requests::NewR_Click);
			// 
			// RequestTable
			// 
			this->RequestTable->AllowUserToAddRows = false;
			this->RequestTable->AllowUserToDeleteRows = false;
			this->RequestTable->AllowUserToResizeRows = false;
			this->RequestTable->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->RequestTable->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->RequestTable->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->RequestTable->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->CityID,
					this->NOR, this->NOH, this->HN, this->RequestC
			});
			this->RequestTable->ContextMenuStrip = this->RM;
			this->RequestTable->Cursor = System::Windows::Forms::Cursors::Hand;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::BottomCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::ActiveCaption;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->RequestTable->DefaultCellStyle = dataGridViewCellStyle1;
			this->RequestTable->Location = System::Drawing::Point(-1, 88);
			this->RequestTable->MultiSelect = false;
			this->RequestTable->Name = L"RequestTable";
			this->RequestTable->RowHeadersVisible = false;
			this->RequestTable->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->RequestTable->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->RequestTable->Size = System::Drawing::Size(768, 443);
			this->RequestTable->StandardTab = true;
			this->RequestTable->TabIndex = 2;
			this->RequestTable->EnabledChanged += gcnew System::EventHandler(this, &Requests::RequestTable_EnabledChanged);
			this->RequestTable->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Requests::RequestTable_MouseDoubleClick);
			// 
			// CityID
			// 
			this->CityID->Frozen = true;
			this->CityID->HeaderText = L"                      ID";
			this->CityID->Name = L"CityID";
			this->CityID->ReadOnly = true;
			this->CityID->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->CityID->Width = 153;
			// 
			// NOR
			// 
			this->NOR->Frozen = true;
			this->NOR->HeaderText = L"            Number of Rooms";
			this->NOR->Name = L"NOR";
			this->NOR->ReadOnly = true;
			this->NOR->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->NOR->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			this->NOR->Width = 153;
			// 
			// NOH
			// 
			this->NOH->HeaderText = L"        Number of Nights";
			this->NOH->Name = L"NOH";
			this->NOH->ReadOnly = true;
			this->NOH->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->NOH->Width = 153;
			// 
			// HN
			// 
			this->HN->HeaderText = L"               Hotel Name";
			this->HN->Name = L"HN";
			this->HN->Width = 153;
			// 
			// RequestC
			// 
			this->RequestC->HeaderText = L"                Request Cost";
			this->RequestC->Name = L"RequestC";
			this->RequestC->Width = 153;
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
			this->viewing->Click += gcnew System::EventHandler(this, &Requests::viewing_Click);
			// 
			// edititing
			// 
			this->edititing->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"edititing.Image")));
			this->edititing->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->edititing->Name = L"edititing";
			this->edititing->Size = System::Drawing::Size(126, 22);
			this->edititing->Text = L"Edit...";
			this->edititing->Click += gcnew System::EventHandler(this, &Requests::edititing_Click);
			// 
			// removing
			// 
			this->removing->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"removing.Image")));
			this->removing->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->removing->Name = L"removing";
			this->removing->Size = System::Drawing::Size(126, 22);
			this->removing->Text = L"Remove...";
			this->removing->Click += gcnew System::EventHandler(this, &Requests::removing_Click);
			// 
			// Requests
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(767, 531);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->RequestTable);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Location = System::Drawing::Point(205, 118);
			this->Name = L"Requests";
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"Requests";
			this->Load += gcnew System::EventHandler(this, &Requests::Requests_Load);
			this->EnabledChanged += gcnew System::EventHandler(this, &Requests::Requests_EnabledChanged);
			this->VisibleChanged += gcnew System::EventHandler(this, &Requests::Requests_VisibleChanged);
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RequestTable))->EndInit();
			this->RM->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		AddRequest ^ Add = gcnew AddRequest;
		EditRequest ^ Edit = gcnew EditRequest;
		Requestinfo ^ info = gcnew Requestinfo;
		int index;
		int Rows = 0;
	private: System::Void Requests_Load(System::Object^  sender, System::EventArgs^  e) {
				 ReadAllRequests(Requestsarr, NNOR, NNON, NRID, NCost, NHotelID);
				 ReadAllHotels(Hotelsarr, NHotels, NHotelsID, NPricePerNight, NincludeCity);
				 RequestTable->AllowUserToAddRows = true;
				 for (int i = 0; i < ((NNOR)); i++)
				 {
					 if (Check_Hotel(Requestsarr[i].HotelID))
					 {
						 RequestTable->Rows->Add();
						 RequestTable->Rows[Rows]->Cells[0]->Value = Requestsarr[i].RequestID;
						 RequestTable->Rows[Rows]->Cells[1]->Value = Requestsarr[i].NumbersOfRooms;
						 RequestTable->Rows[Rows]->Cells[2]->Value = Requestsarr[i].NumberOfNights;
						 String^ s = gcnew String(Search_Hotel_ID(Requestsarr[i].HotelID).c_str());
						 RequestTable->Rows[Rows]->Cells[3]->Value = s;
						 RequestTable->Rows[Rows]->Cells[4]->Value = Requestsarr[i].RequestCost;
						 Rows++;
					 }
				 }
				 Rows = 0;
				 RequestTable->AllowUserToAddRows = false;
				 /**********************************************((Save))*******************************************************************************/
				 String ^m;
				 string std;
				 RequestTable->Sort(RequestTable->Columns[0], ListSortDirection::Ascending);
				 m = ".\\data\\Requests.txt";
				 std = msclr::interop::marshal_as<std::string>(m);
				 remove(std.c_str());
				 RequestTable->RowCount = NNOR;
				 for (int i = 0; i < NNOR; i++)
				 {
					 if (Check_Hotel(Requestsarr[i].HotelID))
					 {
						 Requestsarr[Rows].RequestID = atoi(Convert(RequestTable->Rows[Rows]->Cells[0]->Value->ToString()).c_str());
						 Requestsarr[Rows].NumbersOfRooms = atoi(Convert(RequestTable->Rows[Rows]->Cells[1]->Value->ToString()).c_str());
						 Requestsarr[Rows].NumberOfNights = atoi(Convert(RequestTable->Rows[Rows]->Cells[2]->Value->ToString()).c_str());
						 Requestsarr[Rows].HotelID = Search_Hotel_Name(Convert(RequestTable->Rows[Rows]->Cells[3]->Value->ToString()).c_str());
						 Requestsarr[Rows].RequestCost = atoi(Convert(RequestTable->Rows[Rows]->Cells[4]->Value->ToString()).c_str());
						 Rows++;
						 if (this->RequestTable->RowCount == i)
							 break;
					 }
				 }
				 ofstream City(".\\data\\Requests.txt", ios::app);
				 SaveRequests(Requestsarr, NNOR);
				 City.close();
	}
	private: System::Void NewR_Click(System::Object^  sender, System::EventArgs^  e) {
				 AddRequest ^ Add = gcnew AddRequest;
				 Add->Owner = this;
				 Add->Show();
	}
	private: System::Void RequestTable_EnabledChanged(System::Object^  sender, System::EventArgs^  e) {

	}
	private: System::Void Requests_EnabledChanged(System::Object^  sender, System::EventArgs^  e) {
				 if (this->Enabled == true)
				 {
					 if (Edit->Text_Changed)
					 {
						 RequestTable->Rows[index]->Cells[1]->Value = Edit->NumORom;
						 RequestTable->Rows[index]->Cells[2]->Value = Edit->NumONi;
						 RequestTable->Rows[index]->Cells[4]->Value = Edit->total;
						 Edit->Text_Changed = false;
					 }
					 else
					 {
						 ReadAllRequests(Requestsarr, NNOR, NNON, NRID, NCost, NHotelID);
						 RequestTable->Rows->Clear();
						 for (int i = 0; i < ((NNOR)); i++)
						 {
							 RequestTable->Rows->Add();
							 RequestTable->Rows[i]->Cells[0]->Value = Requestsarr[i].RequestID;
							 RequestTable->Rows[i]->Cells[1]->Value = Requestsarr[i].NumbersOfRooms;
							 RequestTable->Rows[i]->Cells[2]->Value = Requestsarr[i].NumberOfNights;
							 String^ s = gcnew String(Search_Hotel_ID(Requestsarr[i].HotelID).c_str());
							 RequestTable->Rows[i]->Cells[3]->Value = s;
							 RequestTable->Rows[i]->Cells[4]->Value = Requestsarr[i].RequestCost;
						 }
					 }
					 /**********************************************((Save))*******************************************************************************/
					 String ^m;
					 string std;
					 RequestTable->Sort(RequestTable->Columns[0], ListSortDirection::Ascending);
					 m = ".\\data\\Requests.txt";
					 std = msclr::interop::marshal_as<std::string>(m);
					 remove(std.c_str());
					 RequestTable->RowCount = NNOR;
					 for (int i = 0; i < NNOR; i++)
					 {
						 Requestsarr[i].RequestID = atoi(Convert(RequestTable->Rows[i]->Cells[0]->Value->ToString()).c_str());
						 Requestsarr[i].NumbersOfRooms = atoi(Convert(RequestTable->Rows[i]->Cells[1]->Value->ToString()).c_str());
						 Requestsarr[i].NumberOfNights = atoi(Convert(RequestTable->Rows[i]->Cells[2]->Value->ToString()).c_str());
						 Requestsarr[i].HotelID = Search_Hotel_Name(Convert(RequestTable->Rows[i]->Cells[3]->Value->ToString()).c_str());
						 Requestsarr[i].RequestCost = atoi(Convert(RequestTable->Rows[i]->Cells[4]->Value->ToString()).c_str());
						 if (this->RequestTable->RowCount == i)
							 break;

					 }
					 ofstream City(".\\data\\Requests.txt", ios::app);
					 SaveRequests(Requestsarr, NNOR);
					 City.close();
				 }
	}
	private: System::Void EditR_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (RequestTable->RowCount == 0)
				 {
					 MessageBox::Show("No Requests Available please Add Request First !!", "ERROR !!", MessageBoxButtons::OK, MessageBoxIcon::Error);
				 }
				 else
				 {
					 index = RequestTable->SelectedRows[0]->Index;
					 Edit->NumORom = RequestTable->SelectedRows[0]->Cells[1]->Value->ToString();
					 Edit->NumONi = RequestTable->SelectedRows[0]->Cells[2]->Value->ToString();
					 Edit->total = RequestTable->SelectedRows[0]->Cells[4]->Value->ToString();
					 Edit->PPN = (Search_Hotel_PPN(Converts(RequestTable->SelectedRows[0]->Cells[3]->Value->ToString()))).ToString();
					 int id = Search_Hotel_Name(Converts(RequestTable->SelectedRows[0]->Cells[3]->Value->ToString()));
					 Edit->ID = id.ToString();
					 Edit->Owner = this;
					 Edit->ShowDialog();
				 }
	}
	private: System::Void RemoveR_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (RequestTable->RowCount == 0)
				 {
					 MessageBox::Show("Nothing To Remove", "ERROR !!", MessageBoxButtons::OK, MessageBoxIcon::Error);
				 }
				 else
				 {
					 index = RequestTable->SelectedRows[0]->Index;
					 /************************************************((Avoid Crash))********************************************************/
					 ReadAllRequests(Requestsarr, NNOR, NNON, NRID, NCost, NHotelID);
					 RequestTable->Rows->Clear();
					 for (int i = 0; i < ((NNOR)); i++)
					 {
						 RequestTable->Rows->Add();
						 RequestTable->Rows[i]->Cells[0]->Value = Requestsarr[i].RequestID;
						 RequestTable->Rows[i]->Cells[1]->Value = Requestsarr[i].NumbersOfRooms;
						 RequestTable->Rows[i]->Cells[2]->Value = Requestsarr[i].NumberOfNights;
						 String^ s = gcnew String(Search_Hotel_ID(Requestsarr[i].HotelID).c_str());
						 RequestTable->Rows[i]->Cells[3]->Value = s;
						 RequestTable->Rows[i]->Cells[4]->Value = Requestsarr[i].RequestCost;
					 }
					 /**************************************************************************************************************************/
					 if (MessageBox::Show("Are You Sure That You Want To Remove The Request Which has ID : " + RequestTable->Rows[index]->Cells[0]->Value->ToString(), "Are You Sure ?", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == ::System::Windows::Forms::DialogResult::Yes)
					 {
						 /*********************************************((Remove From Code))***********************************************************/
						 RequestTable->Rows->RemoveAt(index);
						 NNOR--;  NNON--;   NRID--, NCost--, NHotelID--;
						 /**********************************************((Save))*******************************************************************************/
						 String ^m;
						 string std;
						 RequestTable->Sort(RequestTable->Columns[0], ListSortDirection::Ascending);
						 m = ".\\data\\Requests.txt";
						 std = msclr::interop::marshal_as<std::string>(m);
						 remove(std.c_str());
						 RequestTable->RowCount = NNOR;
						 for (int i = 0; i < NNOR; i++)
						 {
							 Requestsarr[i].RequestID = atoi(Convert(RequestTable->Rows[i]->Cells[0]->Value->ToString()).c_str());
							 Requestsarr[i].NumbersOfRooms = atoi(Convert(RequestTable->Rows[i]->Cells[1]->Value->ToString()).c_str());
							 Requestsarr[i].NumberOfNights = atoi(Convert(RequestTable->Rows[i]->Cells[2]->Value->ToString()).c_str());
							 Requestsarr[i].HotelID = Search_Hotel_Name(Convert(RequestTable->Rows[i]->Cells[3]->Value->ToString()).c_str());
							 Requestsarr[i].RequestCost = atoi(Convert(RequestTable->Rows[i]->Cells[4]->Value->ToString()).c_str());
							 if (this->RequestTable->RowCount == i)
								 break;

						 }
						 ofstream City(".\\data\\Requests.txt", ios::app);
						 SaveRequests(Requestsarr, NNOR);
						 City.close();
					 }
					 /********************************************************************************************************/
				 }

	}
	private: System::Void infoR_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (RequestTable->RowCount == 0)
				 {
					 MessageBox::Show("No Requests Available please Add Requests !!", "ERROR !!", MessageBoxButtons::OK, MessageBoxIcon::Error);
				 }
				 else
				 {
					 info->ID = RequestTable->SelectedRows[0]->Cells[0]->Value->ToString();
					 info->NumORom = RequestTable->SelectedRows[0]->Cells[1]->Value->ToString();
					 info->NumONi = RequestTable->SelectedRows[0]->Cells[2]->Value->ToString();
					 info->HName = RequestTable->SelectedRows[0]->Cells[3]->Value->ToString();
					 info->total = RequestTable->SelectedRows[0]->Cells[4]->Value->ToString();
					 info->ShowDialog();
				 }
	}
	private: System::Void RequestTable_MouseDoubleClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
				 if (RequestTable->RowCount == 0)
				 {
					 MessageBox::Show("No Requests Available please Add Requests !!", "ERROR !!", MessageBoxButtons::OK, MessageBoxIcon::Error);
				 }
				 else
				 {
					 info->ID = RequestTable->SelectedRows[0]->Cells[0]->Value->ToString();
					 info->NumORom = RequestTable->SelectedRows[0]->Cells[1]->Value->ToString();
					 info->NumONi = RequestTable->SelectedRows[0]->Cells[2]->Value->ToString();
					 info->HName = RequestTable->SelectedRows[0]->Cells[3]->Value->ToString();
					 info->total = RequestTable->SelectedRows[0]->Cells[4]->Value->ToString();
					 info->ShowDialog();
				 }
	}
	private: System::Void viewing_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (RequestTable->RowCount == 0)
				 {
					 MessageBox::Show("No Requests Available please Add Requests !!", "ERROR !!", MessageBoxButtons::OK, MessageBoxIcon::Error);
				 }
				 else
				 {
					 info->ID = RequestTable->SelectedRows[0]->Cells[0]->Value->ToString();
					 info->NumORom = RequestTable->SelectedRows[0]->Cells[1]->Value->ToString();
					 info->NumONi = RequestTable->SelectedRows[0]->Cells[2]->Value->ToString();
					 info->HName = RequestTable->SelectedRows[0]->Cells[3]->Value->ToString();
					 info->total = RequestTable->SelectedRows[0]->Cells[4]->Value->ToString();
					 info->ShowDialog();
				 }
	}
	private: System::Void edititing_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (RequestTable->RowCount == 0)
				 {
					 MessageBox::Show("No Requests Available please Add Request First !!", "ERROR !!", MessageBoxButtons::OK, MessageBoxIcon::Error);
				 }
				 else
				 {
					 index = RequestTable->SelectedRows[0]->Index;
					 Edit->NumORom = RequestTable->SelectedRows[0]->Cells[1]->Value->ToString();
					 Edit->NumONi = RequestTable->SelectedRows[0]->Cells[2]->Value->ToString();
					 Edit->total = RequestTable->SelectedRows[0]->Cells[4]->Value->ToString();
					 Edit->PPN = (Search_Hotel_PPN(Converts(RequestTable->SelectedRows[0]->Cells[3]->Value->ToString()))).ToString();
					 int id = Search_Hotel_Name(Converts(RequestTable->SelectedRows[0]->Cells[3]->Value->ToString()));
					 Edit->ID = id.ToString();
					 Edit->Owner = this;
					 Edit->ShowDialog();
				 }
	}
	private: System::Void removing_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (RequestTable->RowCount == 0)
				 {
					 MessageBox::Show("Nothing To Remove", "ERROR !!", MessageBoxButtons::OK, MessageBoxIcon::Error);
				 }
				 else
				 {
					 index = RequestTable->SelectedRows[0]->Index;
					 /************************************************((Avoid Crash))********************************************************/
					 ReadAllRequests(Requestsarr, NNOR, NNON, NRID, NCost, NHotelID);
					 RequestTable->Rows->Clear();
					 for (int i = 0; i < ((NNOR)); i++)
					 {
						 RequestTable->Rows->Add();
						 RequestTable->Rows[i]->Cells[0]->Value = Requestsarr[i].RequestID;
						 RequestTable->Rows[i]->Cells[1]->Value = Requestsarr[i].NumbersOfRooms;
						 RequestTable->Rows[i]->Cells[2]->Value = Requestsarr[i].NumberOfNights;
						 String^ s = gcnew String(Search_Hotel_ID(Requestsarr[i].HotelID).c_str());
						 RequestTable->Rows[i]->Cells[3]->Value = s;
						 RequestTable->Rows[i]->Cells[4]->Value = Requestsarr[i].RequestCost;
					 }
					 /**************************************************************************************************************************/
					 if (MessageBox::Show("Are You Sure That You Want To Remove The Request Which has ID : " + RequestTable->Rows[index]->Cells[0]->Value->ToString(), "Are You Sure ?", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == ::System::Windows::Forms::DialogResult::Yes)
					 {
						 /*********************************************((Remove From Code))***********************************************************/
						 RequestTable->Rows->RemoveAt(index);
						 NNOR--;  NNON--;   NRID--, NCost--, NHotelID--;
						 /**********************************************((Save))*******************************************************************************/
						 String ^m;
						 string std;
						 RequestTable->Sort(RequestTable->Columns[0], ListSortDirection::Ascending);
						 m = ".\\data\\Requests.txt";
						 std = msclr::interop::marshal_as<std::string>(m);
						 remove(std.c_str());
						 RequestTable->RowCount = NNOR;
						 for (int i = 0; i < NNOR; i++)
						 {
							 Requestsarr[i].RequestID = atoi(Convert(RequestTable->Rows[i]->Cells[0]->Value->ToString()).c_str());
							 Requestsarr[i].NumbersOfRooms = atoi(Convert(RequestTable->Rows[i]->Cells[1]->Value->ToString()).c_str());
							 Requestsarr[i].NumberOfNights = atoi(Convert(RequestTable->Rows[i]->Cells[2]->Value->ToString()).c_str());
							 Requestsarr[i].HotelID = Search_Hotel_Name(Convert(RequestTable->Rows[i]->Cells[3]->Value->ToString()).c_str());
							 Requestsarr[i].RequestCost = atoi(Convert(RequestTable->Rows[i]->Cells[4]->Value->ToString()).c_str());
							 if (this->RequestTable->RowCount == i)
								 break;

						 }
						 ofstream City(".\\data\\Requests.txt", ios::app);
						 SaveRequests(Requestsarr, NNOR);
						 City.close();
					 }
					 /********************************************************************************************************/
				 }
	}
	string Convert(String ^ s)
			 {
				 string x;
				 x = marshal_as<std::string>(s);
				 return x;
			 }
	private: System::Void Requests_VisibleChanged(System::Object^  sender, System::EventArgs^  e) {
				 if (this->Visible == true)
				 {
					 ReadAllRequests(Requestsarr, NNOR, NNON, NRID, NCost, NHotelID);
					 ReadAllHotels(Hotelsarr, NHotels, NHotelsID, NPricePerNight, NincludeCity);
					 RequestTable->Rows->Clear();
					 Rows = 0;
					 for (int i = 0; i < ((NNOR)); i++)
					 {
						 if (Check_Hotel(Requestsarr[i].HotelID))
						 {
							 RequestTable->Rows->Add();
							 RequestTable->Rows[Rows]->Cells[0]->Value = Requestsarr[i].RequestID;
							 RequestTable->Rows[Rows]->Cells[1]->Value = Requestsarr[i].NumbersOfRooms;
							 RequestTable->Rows[Rows]->Cells[2]->Value = Requestsarr[i].NumberOfNights;
							 String^ s = gcnew String(Search_Hotel_ID(Requestsarr[i].HotelID).c_str());
							 RequestTable->Rows[Rows]->Cells[3]->Value = s;
							 RequestTable->Rows[Rows]->Cells[4]->Value = Requestsarr[i].RequestCost;
							 Rows++;
						 }
					 }
					 Rows = 0;
					 /**********************************************((Save))*******************************************************************************/
					 RequestTable->Sort(RequestTable->Columns[0], ListSortDirection::Ascending);
					 for (int i = 0; i < NNOR; i++)
					 {
						 if (Check_Hotel(Requestsarr[i].HotelID))
						 {
							 Requestsarr[Rows].RequestID = atoi(Convert(RequestTable->Rows[Rows]->Cells[0]->Value->ToString()).c_str());
							 Requestsarr[Rows].NumbersOfRooms = atoi(Convert(RequestTable->Rows[Rows]->Cells[1]->Value->ToString()).c_str());
							 Requestsarr[Rows].NumberOfNights = atoi(Convert(RequestTable->Rows[Rows]->Cells[2]->Value->ToString()).c_str());
							 Requestsarr[Rows].HotelID = Search_Hotel_Name(Convert(RequestTable->Rows[Rows]->Cells[3]->Value->ToString()).c_str());
							 Requestsarr[Rows].RequestCost = atoi(Convert(RequestTable->Rows[Rows]->Cells[4]->Value->ToString()).c_str());
							 Rows++;
							 if (this->RequestTable->RowCount == i)
								 break;
						 }
					 }
					 String ^m;
					 string std;
					 m = ".\\data\\Requests.txt";
					 std = msclr::interop::marshal_as<std::string>(m);
					 remove(std.c_str());
					 Rows = 0;
					 ofstream City(".\\data\\Requests.txt", ios::app);
					 SaveRequests(Requestsarr, NNOR);
					 City.close();
				 }
	}
};
}