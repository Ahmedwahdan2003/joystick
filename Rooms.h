#pragma once

namespace joystick {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Room1
	/// </summary>
	public ref class Rooms : public System::Windows::Forms::Form
	{
	public:
		Rooms(void)
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
		~Rooms()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ Rooms_tabs;
	protected:
	private: System::Windows::Forms::TabPage^ room1_tab;
	private: System::Windows::Forms::TabPage^ room2_tab;
	private: System::Windows::Forms::TabPage^ room3_tab;
	private: System::Windows::Forms::TabPage^ troom4_tab;
	private: System::Windows::Forms::TabPage^ room5_tab;
	private: System::Windows::Forms::TabPage^ billiard1_tab;
	private: System::Windows::Forms::TabPage^ billiard2_tab;
	private: System::Windows::Forms::TabPage^ pingpong_tab;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Rooms::typeid));
			this->Rooms_tabs = (gcnew System::Windows::Forms::TabControl());
			this->room1_tab = (gcnew System::Windows::Forms::TabPage());
			this->room2_tab = (gcnew System::Windows::Forms::TabPage());
			this->room3_tab = (gcnew System::Windows::Forms::TabPage());
			this->troom4_tab = (gcnew System::Windows::Forms::TabPage());
			this->room5_tab = (gcnew System::Windows::Forms::TabPage());
			this->billiard1_tab = (gcnew System::Windows::Forms::TabPage());
			this->billiard2_tab = (gcnew System::Windows::Forms::TabPage());
			this->pingpong_tab = (gcnew System::Windows::Forms::TabPage());
			this->Rooms_tabs->SuspendLayout();
			this->SuspendLayout();
			// 
			// Rooms_tabs
			// 
			this->Rooms_tabs->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Rooms_tabs->Controls->Add(this->room1_tab);
			this->Rooms_tabs->Controls->Add(this->room2_tab);
			this->Rooms_tabs->Controls->Add(this->room3_tab);
			this->Rooms_tabs->Controls->Add(this->troom4_tab);
			this->Rooms_tabs->Controls->Add(this->room5_tab);
			this->Rooms_tabs->Controls->Add(this->billiard1_tab);
			this->Rooms_tabs->Controls->Add(this->billiard2_tab);
			this->Rooms_tabs->Controls->Add(this->pingpong_tab);
			this->Rooms_tabs->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Rooms_tabs->Location = System::Drawing::Point(0, 0);
			this->Rooms_tabs->Name = L"Rooms_tabs";
			this->Rooms_tabs->SelectedIndex = 0;
			this->Rooms_tabs->Size = System::Drawing::Size(1294, 804);
			this->Rooms_tabs->TabIndex = 0;
			// 
			// room1_tab
			// 
			this->room1_tab->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"room1_tab.BackgroundImage")));
			this->room1_tab->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->room1_tab->Location = System::Drawing::Point(4, 36);
			this->room1_tab->Name = L"room1_tab";
			this->room1_tab->Padding = System::Windows::Forms::Padding(3);
			this->room1_tab->Size = System::Drawing::Size(1286, 764);
			this->room1_tab->TabIndex = 0;
			this->room1_tab->Text = L"ROOM1";
			this->room1_tab->UseVisualStyleBackColor = true;
			// 
			// room2_tab
			// 
			this->room2_tab->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"room2_tab.BackgroundImage")));
			this->room2_tab->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->room2_tab->Location = System::Drawing::Point(4, 36);
			this->room2_tab->Name = L"room2_tab";
			this->room2_tab->Padding = System::Windows::Forms::Padding(3);
			this->room2_tab->Size = System::Drawing::Size(1416, 764);
			this->room2_tab->TabIndex = 1;
			this->room2_tab->Text = L"ROOM2";
			this->room2_tab->UseVisualStyleBackColor = true;
			// 
			// room3_tab
			// 
			this->room3_tab->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"room3_tab.BackgroundImage")));
			this->room3_tab->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->room3_tab->Location = System::Drawing::Point(4, 36);
			this->room3_tab->Name = L"room3_tab";
			this->room3_tab->Padding = System::Windows::Forms::Padding(3);
			this->room3_tab->Size = System::Drawing::Size(1416, 764);
			this->room3_tab->TabIndex = 2;
			this->room3_tab->Text = L"ROOM3";
			this->room3_tab->UseVisualStyleBackColor = true;
			// 
			// troom4_tab
			// 
			this->troom4_tab->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"troom4_tab.BackgroundImage")));
			this->troom4_tab->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->troom4_tab->Location = System::Drawing::Point(4, 36);
			this->troom4_tab->Name = L"troom4_tab";
			this->troom4_tab->Padding = System::Windows::Forms::Padding(3);
			this->troom4_tab->Size = System::Drawing::Size(1416, 764);
			this->troom4_tab->TabIndex = 3;
			this->troom4_tab->Text = L"ROOM4";
			this->troom4_tab->UseVisualStyleBackColor = true;
			// 
			// room5_tab
			// 
			this->room5_tab->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"room5_tab.BackgroundImage")));
			this->room5_tab->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->room5_tab->Location = System::Drawing::Point(4, 36);
			this->room5_tab->Name = L"room5_tab";
			this->room5_tab->Padding = System::Windows::Forms::Padding(3);
			this->room5_tab->Size = System::Drawing::Size(1416, 764);
			this->room5_tab->TabIndex = 4;
			this->room5_tab->Text = L"ROOM5";
			this->room5_tab->UseVisualStyleBackColor = true;
			// 
			// billiard1_tab
			// 
			this->billiard1_tab->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"billiard1_tab.BackgroundImage")));
			this->billiard1_tab->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->billiard1_tab->Location = System::Drawing::Point(4, 36);
			this->billiard1_tab->Name = L"billiard1_tab";
			this->billiard1_tab->Padding = System::Windows::Forms::Padding(3);
			this->billiard1_tab->Size = System::Drawing::Size(1416, 764);
			this->billiard1_tab->TabIndex = 5;
			this->billiard1_tab->Text = L"Billiard1";
			this->billiard1_tab->UseVisualStyleBackColor = true;
			// 
			// billiard2_tab
			// 
			this->billiard2_tab->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"billiard2_tab.BackgroundImage")));
			this->billiard2_tab->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->billiard2_tab->Location = System::Drawing::Point(4, 36);
			this->billiard2_tab->Name = L"billiard2_tab";
			this->billiard2_tab->Padding = System::Windows::Forms::Padding(3);
			this->billiard2_tab->Size = System::Drawing::Size(1416, 764);
			this->billiard2_tab->TabIndex = 6;
			this->billiard2_tab->Text = L"Billiard2";
			this->billiard2_tab->UseVisualStyleBackColor = true;
			// 
			// pingpong_tab
			// 
			this->pingpong_tab->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pingpong_tab.BackgroundImage")));
			this->pingpong_tab->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pingpong_tab->Location = System::Drawing::Point(4, 36);
			this->pingpong_tab->Name = L"pingpong_tab";
			this->pingpong_tab->Padding = System::Windows::Forms::Padding(3);
			this->pingpong_tab->Size = System::Drawing::Size(1087, 606);
			this->pingpong_tab->TabIndex = 7;
			this->pingpong_tab->Text = L"PING PONG";
			this->pingpong_tab->UseVisualStyleBackColor = true;
			// 
			// Rooms
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1416, 800);
			this->Controls->Add(this->Rooms_tabs);
			this->DoubleBuffered = true;
			this->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"Rooms";
			this->Text = L"Room1";
			this->Load += gcnew System::EventHandler(this, &Rooms::Room1_Load);
			this->Rooms_tabs->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Room1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
