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
	private: System::Windows::Forms::Panel^ room1_orders_pnl;
	private: System::Windows::Forms::TextBox^ room1_user_time;
	private: System::Windows::Forms::ComboBox^ room1_combobox;
	private: System::Windows::Forms::Button^ room1_remove_btn;
	private: System::Windows::Forms::Button^ room1_add_btn;
	private: System::Windows::Forms::Button^ room1_endtime_btn;
	private: System::Windows::Forms::Button^ Room1_starttime_btn;
	private: System::Windows::Forms::Button^ room1_close_btn;
	private: System::Windows::Forms::TextBox^ room2_user_time;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;

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
			this->room1_close_btn = (gcnew System::Windows::Forms::Button());
			this->Room1_starttime_btn = (gcnew System::Windows::Forms::Button());
			this->room1_endtime_btn = (gcnew System::Windows::Forms::Button());
			this->room1_add_btn = (gcnew System::Windows::Forms::Button());
			this->room1_remove_btn = (gcnew System::Windows::Forms::Button());
			this->room1_combobox = (gcnew System::Windows::Forms::ComboBox());
			this->room1_user_time = (gcnew System::Windows::Forms::TextBox());
			this->room1_orders_pnl = (gcnew System::Windows::Forms::Panel());
			this->room2_user_time = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->Rooms_tabs->SuspendLayout();
			this->room1_tab->SuspendLayout();
			this->room2_tab->SuspendLayout();
			this->room3_tab->SuspendLayout();
			this->SuspendLayout();
			// 
			// Rooms_tabs
			// 
			this->Rooms_tabs->Controls->Add(this->room1_tab);
			this->Rooms_tabs->Controls->Add(this->room2_tab);
			this->Rooms_tabs->Controls->Add(this->room3_tab);
			this->Rooms_tabs->Controls->Add(this->troom4_tab);
			this->Rooms_tabs->Controls->Add(this->room5_tab);
			this->Rooms_tabs->Controls->Add(this->billiard1_tab);
			this->Rooms_tabs->Controls->Add(this->billiard2_tab);
			this->Rooms_tabs->Controls->Add(this->pingpong_tab);
			this->Rooms_tabs->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Rooms_tabs->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Rooms_tabs->Location = System::Drawing::Point(0, 0);
			this->Rooms_tabs->Name = L"Rooms_tabs";
			this->Rooms_tabs->SelectedIndex = 0;
			this->Rooms_tabs->Size = System::Drawing::Size(1095, 648);
			this->Rooms_tabs->TabIndex = 0;
			// 
			// room1_tab
			// 
			this->room1_tab->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"room1_tab.BackgroundImage")));
			this->room1_tab->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->room1_tab->Controls->Add(this->room1_orders_pnl);
			this->room1_tab->Controls->Add(this->room1_user_time);
			this->room1_tab->Controls->Add(this->room1_combobox);
			this->room1_tab->Controls->Add(this->room1_remove_btn);
			this->room1_tab->Controls->Add(this->room1_add_btn);
			this->room1_tab->Controls->Add(this->room1_endtime_btn);
			this->room1_tab->Controls->Add(this->Room1_starttime_btn);
			this->room1_tab->Controls->Add(this->room1_close_btn);
			this->room1_tab->Location = System::Drawing::Point(4, 36);
			this->room1_tab->Name = L"room1_tab";
			this->room1_tab->Padding = System::Windows::Forms::Padding(3);
			this->room1_tab->Size = System::Drawing::Size(1087, 608);
			this->room1_tab->TabIndex = 0;
			this->room1_tab->Text = L"ROOM1";
			this->room1_tab->UseVisualStyleBackColor = true;
			// 
			// room2_tab
			// 
			this->room2_tab->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"room2_tab.BackgroundImage")));
			this->room2_tab->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->room2_tab->Controls->Add(this->comboBox1);
			this->room2_tab->Controls->Add(this->button5);
			this->room2_tab->Controls->Add(this->button4);
			this->room2_tab->Controls->Add(this->button3);
			this->room2_tab->Controls->Add(this->button2);
			this->room2_tab->Controls->Add(this->button1);
			this->room2_tab->Controls->Add(this->room2_user_time);
			this->room2_tab->Location = System::Drawing::Point(4, 36);
			this->room2_tab->Name = L"room2_tab";
			this->room2_tab->Padding = System::Windows::Forms::Padding(3);
			this->room2_tab->Size = System::Drawing::Size(1054, 602);
			this->room2_tab->TabIndex = 1;
			this->room2_tab->Text = L"ROOM2";
			this->room2_tab->UseVisualStyleBackColor = true;
			this->room2_tab->Click += gcnew System::EventHandler(this, &Rooms::room2_tab_Click);
			// 
			// room3_tab
			// 
			this->room3_tab->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"room3_tab.BackgroundImage")));
			this->room3_tab->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->room3_tab->Controls->Add(this->button10);
			this->room3_tab->Controls->Add(this->button9);
			this->room3_tab->Controls->Add(this->button8);
			this->room3_tab->Controls->Add(this->button7);
			this->room3_tab->Controls->Add(this->button6);
			this->room3_tab->Location = System::Drawing::Point(4, 36);
			this->room3_tab->Name = L"room3_tab";
			this->room3_tab->Padding = System::Windows::Forms::Padding(3);
			this->room3_tab->Size = System::Drawing::Size(1054, 602);
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
			this->troom4_tab->Size = System::Drawing::Size(1054, 602);
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
			this->room5_tab->Size = System::Drawing::Size(1054, 602);
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
			this->billiard1_tab->Size = System::Drawing::Size(1054, 602);
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
			this->billiard2_tab->Size = System::Drawing::Size(1054, 602);
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
			this->pingpong_tab->Size = System::Drawing::Size(1087, 608);
			this->pingpong_tab->TabIndex = 7;
			this->pingpong_tab->Text = L"PING PONG";
			this->pingpong_tab->UseVisualStyleBackColor = true;
			// 
			// room1_close_btn
			// 
			this->room1_close_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->room1_close_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->room1_close_btn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->room1_close_btn->FlatAppearance->BorderSize = 0;
			this->room1_close_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->room1_close_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->room1_close_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->room1_close_btn->Location = System::Drawing::Point(887, 15);
			this->room1_close_btn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->room1_close_btn->Name = L"room1_close_btn";
			this->room1_close_btn->Size = System::Drawing::Size(137, 36);
			this->room1_close_btn->TabIndex = 4;
			this->room1_close_btn->UseVisualStyleBackColor = false;
			// 
			// Room1_starttime_btn
			// 
			this->Room1_starttime_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Room1_starttime_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Room1_starttime_btn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Room1_starttime_btn->FlatAppearance->BorderSize = 0;
			this->Room1_starttime_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Room1_starttime_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Room1_starttime_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Room1_starttime_btn->Location = System::Drawing::Point(438, 399);
			this->Room1_starttime_btn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Room1_starttime_btn->Name = L"Room1_starttime_btn";
			this->Room1_starttime_btn->Size = System::Drawing::Size(129, 33);
			this->Room1_starttime_btn->TabIndex = 5;
			this->Room1_starttime_btn->UseVisualStyleBackColor = false;
			// 
			// room1_endtime_btn
			// 
			this->room1_endtime_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->room1_endtime_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->room1_endtime_btn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->room1_endtime_btn->FlatAppearance->BorderSize = 0;
			this->room1_endtime_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->room1_endtime_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->room1_endtime_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->room1_endtime_btn->Location = System::Drawing::Point(438, 470);
			this->room1_endtime_btn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->room1_endtime_btn->Name = L"room1_endtime_btn";
			this->room1_endtime_btn->Size = System::Drawing::Size(129, 33);
			this->room1_endtime_btn->TabIndex = 6;
			this->room1_endtime_btn->UseVisualStyleBackColor = false;
			// 
			// room1_add_btn
			// 
			this->room1_add_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->room1_add_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->room1_add_btn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->room1_add_btn->FlatAppearance->BorderSize = 0;
			this->room1_add_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->room1_add_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->room1_add_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->room1_add_btn->Location = System::Drawing::Point(815, 399);
			this->room1_add_btn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->room1_add_btn->Name = L"room1_add_btn";
			this->room1_add_btn->Size = System::Drawing::Size(155, 33);
			this->room1_add_btn->TabIndex = 7;
			this->room1_add_btn->UseVisualStyleBackColor = false;
			// 
			// room1_remove_btn
			// 
			this->room1_remove_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->room1_remove_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->room1_remove_btn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->room1_remove_btn->FlatAppearance->BorderSize = 0;
			this->room1_remove_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->room1_remove_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->room1_remove_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->room1_remove_btn->Location = System::Drawing::Point(815, 470);
			this->room1_remove_btn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->room1_remove_btn->Name = L"room1_remove_btn";
			this->room1_remove_btn->Size = System::Drawing::Size(155, 33);
			this->room1_remove_btn->TabIndex = 8;
			this->room1_remove_btn->UseVisualStyleBackColor = false;
			// 
			// room1_combobox
			// 
			this->room1_combobox->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->room1_combobox->ForeColor = System::Drawing::Color::Transparent;
			this->room1_combobox->FormattingEnabled = true;
			this->room1_combobox->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"indomy(small)", L"pepsi", L"fury", L"indomy(large)" });
			this->room1_combobox->Location = System::Drawing::Point(781, 328);
			this->room1_combobox->Name = L"room1_combobox";
			this->room1_combobox->Size = System::Drawing::Size(267, 35);
			this->room1_combobox->TabIndex = 9;
			// 
			// room1_user_time
			// 
			this->room1_user_time->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->room1_user_time->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->room1_user_time->Location = System::Drawing::Point(469, 334);
			this->room1_user_time->Name = L"room1_user_time";
			this->room1_user_time->Size = System::Drawing::Size(98, 22);
			this->room1_user_time->TabIndex = 10;
			// 
			// room1_orders_pnl
			// 
			this->room1_orders_pnl->Location = System::Drawing::Point(22, 279);
			this->room1_orders_pnl->Name = L"room1_orders_pnl";
			this->room1_orders_pnl->Size = System::Drawing::Size(283, 287);
			this->room1_orders_pnl->TabIndex = 11;
			// 
			// room2_user_time
			// 
			this->room2_user_time->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->room2_user_time->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->room2_user_time->Location = System::Drawing::Point(459, 332);
			this->room2_user_time->Name = L"room2_user_time";
			this->room2_user_time->Size = System::Drawing::Size(98, 22);
			this->room2_user_time->TabIndex = 11;
			this->room2_user_time->TextChanged += gcnew System::EventHandler(this, &Rooms::room2_user_time_TextChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(440, 400);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(129, 33);
			this->button1->TabIndex = 12;
			this->button1->UseVisualStyleBackColor = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(440, 472);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(129, 33);
			this->button2->TabIndex = 13;
			this->button2->UseVisualStyleBackColor = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Location = System::Drawing::Point(815, 400);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(152, 33);
			this->button3->TabIndex = 14;
			this->button3->UseVisualStyleBackColor = false;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button4->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Location = System::Drawing::Point(801, 472);
			this->button4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(166, 33);
			this->button4->TabIndex = 15;
			this->button4->UseVisualStyleBackColor = false;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button5->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Location = System::Drawing::Point(885, 16);
			this->button5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(143, 33);
			this->button5->TabIndex = 16;
			this->button5->UseVisualStyleBackColor = false;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(755, 326);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(263, 35);
			this->comboBox1->TabIndex = 17;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button6->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button6->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Location = System::Drawing::Point(428, 403);
			this->button6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(143, 33);
			this->button6->TabIndex = 17;
			this->button6->UseVisualStyleBackColor = false;
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button7->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button7->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Location = System::Drawing::Point(428, 475);
			this->button7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(143, 33);
			this->button7->TabIndex = 18;
			this->button7->UseVisualStyleBackColor = false;
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button8->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button8->FlatAppearance->BorderSize = 0;
			this->button8->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button8->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Location = System::Drawing::Point(815, 475);
			this->button8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(143, 33);
			this->button8->TabIndex = 19;
			this->button8->UseVisualStyleBackColor = false;
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button9->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button9->FlatAppearance->BorderSize = 0;
			this->button9->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button9->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Location = System::Drawing::Point(815, 403);
			this->button9->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(143, 33);
			this->button9->TabIndex = 20;
			this->button9->UseVisualStyleBackColor = false;
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button10->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button10->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button10->FlatAppearance->BorderSize = 0;
			this->button10->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button10->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Location = System::Drawing::Point(885, 19);
			this->button10->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(143, 33);
			this->button10->TabIndex = 21;
			this->button10->UseVisualStyleBackColor = false;
			// 
			// Rooms
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1095, 648);
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
			this->room1_tab->ResumeLayout(false);
			this->room1_tab->PerformLayout();
			this->room2_tab->ResumeLayout(false);
			this->room2_tab->PerformLayout();
			this->room3_tab->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Room1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void room2_tab_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void room2_user_time_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
