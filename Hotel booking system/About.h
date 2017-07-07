#pragma once

namespace Hotelbookingsystem {

	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::IO;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for About
	/// </summary>
	public ref class About : public System::Windows::Forms::Form
	{
	public:
		About(void)
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
		~About()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^  tab;
	protected:

	protected:
	private: System::Windows::Forms::TabPage^  Description;
	private: System::Windows::Forms::TabPage^  Information;
	private: System::Windows::Forms::TabPage^  Thanks;
	private: System::Windows::Forms::RichTextBox^  Desc;
	private: System::Windows::Forms::RichTextBox^  Info;
	private: System::Windows::Forms::RichTextBox^  thank;
	private: System::Windows::Forms::PictureBox^  pictureBox2;





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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(About::typeid));
			this->tab = (gcnew System::Windows::Forms::TabControl());
			this->Description = (gcnew System::Windows::Forms::TabPage());
			this->Desc = (gcnew System::Windows::Forms::RichTextBox());
			this->Information = (gcnew System::Windows::Forms::TabPage());
			this->Info = (gcnew System::Windows::Forms::RichTextBox());
			this->Thanks = (gcnew System::Windows::Forms::TabPage());
			this->thank = (gcnew System::Windows::Forms::RichTextBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->tab->SuspendLayout();
			this->Description->SuspendLayout();
			this->Information->SuspendLayout();
			this->Thanks->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// tab
			// 
			this->tab->Controls->Add(this->Description);
			this->tab->Controls->Add(this->Information);
			this->tab->Controls->Add(this->Thanks);
			this->tab->Location = System::Drawing::Point(12, 12);
			this->tab->Name = L"tab";
			this->tab->SelectedIndex = 0;
			this->tab->Size = System::Drawing::Size(709, 243);
			this->tab->SizeMode = System::Windows::Forms::TabSizeMode::Fixed;
			this->tab->TabIndex = 0;
			// 
			// Description
			// 
			this->Description->Controls->Add(this->Desc);
			this->Description->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Description->Location = System::Drawing::Point(4, 22);
			this->Description->Name = L"Description";
			this->Description->Padding = System::Windows::Forms::Padding(3);
			this->Description->Size = System::Drawing::Size(701, 217);
			this->Description->TabIndex = 0;
			this->Description->Text = L"Description ...";
			this->Description->UseVisualStyleBackColor = true;
			this->Description->Click += gcnew System::EventHandler(this, &About::Description_Click);
			// 
			// Desc
			// 
			this->Desc->Font = (gcnew System::Drawing::Font(L"Adobe Fan Heiti Std B", 11.25F, System::Drawing::FontStyle::Bold));
			this->Desc->Location = System::Drawing::Point(0, 0);
			this->Desc->Name = L"Desc";
			this->Desc->ReadOnly = true;
			this->Desc->Size = System::Drawing::Size(701, 217);
			this->Desc->TabIndex = 0;
			this->Desc->Text = resources->GetString(L"Desc.Text");
			// 
			// Information
			// 
			this->Information->Controls->Add(this->pictureBox2);
			this->Information->Controls->Add(this->Info);
			this->Information->Location = System::Drawing::Point(4, 22);
			this->Information->Name = L"Information";
			this->Information->Padding = System::Windows::Forms::Padding(3);
			this->Information->Size = System::Drawing::Size(701, 217);
			this->Information->TabIndex = 1;
			this->Information->Text = L"Information ...";
			this->Information->UseVisualStyleBackColor = true;
			// 
			// Info
			// 
			this->Info->Location = System::Drawing::Point(0, 0);
			this->Info->Name = L"Info";
			this->Info->ReadOnly = true;
			this->Info->Size = System::Drawing::Size(701, 217);
			this->Info->TabIndex = 1;
			this->Info->Text = resources->GetString(L"Info.Text");
			// 
			// Thanks
			// 
			this->Thanks->Controls->Add(this->thank);
			this->Thanks->Location = System::Drawing::Point(4, 22);
			this->Thanks->Name = L"Thanks";
			this->Thanks->Padding = System::Windows::Forms::Padding(3);
			this->Thanks->Size = System::Drawing::Size(701, 217);
			this->Thanks->TabIndex = 2;
			this->Thanks->Text = L"Thanks to ....";
			this->Thanks->UseVisualStyleBackColor = true;
			// 
			// thank
			// 
			this->thank->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->thank->Location = System::Drawing::Point(0, 0);
			this->thank->Name = L"thank";
			this->thank->ReadOnly = true;
			this->thank->Size = System::Drawing::Size(701, 217);
			this->thank->TabIndex = 2;
			this->thank->Text = resources->GetString(L"thank.Text");
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::SystemColors::Control;
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.InitialImage")));
			this->pictureBox2->Location = System::Drawing::Point(529, 3);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(172, 158);
			this->pictureBox2->TabIndex = 2;
			this->pictureBox2->TabStop = false;
			// 
			// About
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Gainsboro;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(729, 531);
			this->Controls->Add(this->tab);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Location = System::Drawing::Point(211, 119);
			this->Name = L"About";
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"About...";
			this->Load += gcnew System::EventHandler(this, &About::About_Load);
			this->tab->ResumeLayout(false);
			this->Description->ResumeLayout(false);
			this->Information->ResumeLayout(false);
			this->Thanks->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void About_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void Description_Click(System::Object^  sender, System::EventArgs^  e) {
	}
};
}
