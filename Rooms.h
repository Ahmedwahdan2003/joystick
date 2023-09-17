#pragma once
#include"used_classes.h"
#include<map>
#include <vcclr.h>
namespace joystick {
    
    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace System::Collections::Generic;
    

    /// <summary>
    /// Summary for Room1
    /// </summary>
    public ref class Rooms : public System::Windows::Forms::Form
    {
    public:
        

        Rooms(void)
        {
            InitializeComponent();
            countdown_timer1->Interval = 1000;
            stopwatch_timer1->Interval = 1000;
            countdown_timer2->Interval = 1000;
            stopwatch_timer2->Interval = 1000;
            //FetchItemPricesFromDatabase();      (method to get the items and their prices from the database)
           
            itemPrices->Add("pepsi", 10);
            itemPrices->Add("indomy", 10);
            itemPrices->Add("fury", 15);
            
           
        

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
    private:Dictionary<String^, int>^ itemPrices = gcnew Dictionary<String^, int>();
    private:Dictionary<String^, int>^ room1_orders_map = gcnew Dictionary<String^, int>();
    private:Dictionary<String^, int>^ room2_orders_map = gcnew Dictionary<String^, int>();
    private:Dictionary<String^, int>^ room3_orders_map = gcnew Dictionary<String^, int>();
    private:Dictionary<String^, int>^ room4_orders_map = gcnew Dictionary<String^, int>();
    private:Dictionary<String^, int>^ room5_orders_map = gcnew Dictionary<String^, int>();
    private:Dictionary<String^, int>^ billiard1_orders_map = gcnew Dictionary<String^, int>();
    private:Dictionary<String^, int>^ billiard2_orders_map = gcnew Dictionary<String^, int>();
    private:Dictionary<String^, int>^ pingpong_orders_map = gcnew Dictionary<String^, int>();
    
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

    private: System::Windows::Forms::TextBox^ textBoxHours1;

    private: System::Windows::Forms::ComboBox^ room1_combobox;
    private: System::Windows::Forms::Button^ room1_remove_btn;
    private: System::Windows::Forms::Button^ room1_add_btn;
    private: System::Windows::Forms::Button^ room1_endtime_btn;
    private: System::Windows::Forms::Button^ Room1_starttime_btn;
    private: System::Windows::Forms::Button^ room1_close_btn;
    private: System::Windows::Forms::TextBox^ room2_userinput_time;
    private: System::Windows::Forms::Button^ room2_closeroom_btn;


    private: System::Windows::Forms::Button^ button4;
    private: System::Windows::Forms::Button^ button3;
    private: System::Windows::Forms::Button^ button2;
    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::ComboBox^ room2_order_cmbx;

    private: System::Windows::Forms::Button^ button10;
    private: System::Windows::Forms::Button^ button9;
    private: System::Windows::Forms::Button^ button8;
    private: System::Windows::Forms::Button^ button7;
    private: System::Windows::Forms::Button^ button6;
    private: System::Windows::Forms::Button^ room2_add_btn;
    private: System::Windows::Forms::Button^ room2_remove_btn;



    private: System::Windows::Forms::Button^ room2_end_btn;

    private: System::Windows::Forms::Button^ room2_start_btn;

    private: System::Windows::Forms::Timer^ countdown_timer1;
    public: bool room1_available = true;
    public: bool room2_available = true;
    public: bool room3_available = true;
    public: bool room4_available = true;
    public: bool room5_available = true;
    public: bool room6_available = true;
    public: bool room7_available = true;
    public: bool room8_available = true;
    private:DateTime endTime1;
    private:DateTime finalTime1;
    private:DateTime startTime1;
    private:DateTime endTime2;
    private:DateTime finalTime2;
    private:DateTime startTime2;
    private:DateTime endTime3;
    private:DateTime finalTime3;
    private:DateTime startTime3;
    private:DateTime endTime4;
    private:DateTime finalTime4;
    private:DateTime startTime4;
    private:DateTime endTime5;
    private:DateTime finalTime5;
    private:DateTime startTime5;
    private:DateTime endTime6;
    private:DateTime finalTime6;
    private:DateTime startTime6;
    private:DateTime endTime7;
    private:DateTime finalTime7;
    private:DateTime startTime7;
    private:DateTime endTime8;
    private:DateTime finalTime8;
    private:DateTime startTime8;
    private:bool room1_endtime_btn_click;
    private:bool room2_endtime_btn_click;
    private:bool room3_endtime_btn_click;
    private:bool room4_endtime_btn_click;
    private:bool room5_endtime_btn_click;
    private:bool room6_endtime_btn_click;
    private:bool room7_endtime_btn_click;
    private:bool room8_endtime_btn_click;
    private:bool room1_startTime_btn_click;
    private:bool room2_startTime_btn_click;
    private:bool room3_startTime_btn_click;
    private:bool room4_startTime_btn_click;
    private:bool room5_startTime_btn_click;
    private:bool room6_startTime_btn_click;
    private:bool room7_startTime_btn_click;
    private:bool room8_startTime_btn_click;
    private: System::Windows::Forms::Timer^ stopwatch_timer1;
    private: System::Windows::Forms::Label^ timeremaining1_lbl;
    private: System::Windows::Forms::Label^ timer1_lbl;
    private: System::Windows::Forms::Label^ timestarted1_lbl;
    private: System::Windows::Forms::FlowLayoutPanel^ room1_orders_pnl;
    private: System::Windows::Forms::FlowLayoutPanel^ room1_recipt_pnl;
    private: System::Windows::Forms::FlowLayoutPanel^ room2_recipt_pnl;
    private: System::Windows::Forms::FlowLayoutPanel^ room2_orders_pnl;
    private: System::Windows::Forms::Label^ room2_timeremaining_lbl;

    private: System::Windows::Forms::Label^ room2_timer_lbl;

    private: System::Windows::Forms::Label^ room2_timestarted_lbl;

    private: System::Windows::Forms::Timer^ countdown_timer2;
    private: System::Windows::Forms::Timer^ stopwatch_timer2;




    private: System::ComponentModel::IContainer^ components;

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
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Rooms::typeid));
            this->Rooms_tabs = (gcnew System::Windows::Forms::TabControl());
            this->room1_tab = (gcnew System::Windows::Forms::TabPage());
            this->room1_recipt_pnl = (gcnew System::Windows::Forms::FlowLayoutPanel());
            this->room1_orders_pnl = (gcnew System::Windows::Forms::FlowLayoutPanel());
            this->timeremaining1_lbl = (gcnew System::Windows::Forms::Label());
            this->timer1_lbl = (gcnew System::Windows::Forms::Label());
            this->timestarted1_lbl = (gcnew System::Windows::Forms::Label());
            this->textBoxHours1 = (gcnew System::Windows::Forms::TextBox());
            this->room1_combobox = (gcnew System::Windows::Forms::ComboBox());
            this->room1_remove_btn = (gcnew System::Windows::Forms::Button());
            this->room1_add_btn = (gcnew System::Windows::Forms::Button());
            this->room1_endtime_btn = (gcnew System::Windows::Forms::Button());
            this->Room1_starttime_btn = (gcnew System::Windows::Forms::Button());
            this->room1_close_btn = (gcnew System::Windows::Forms::Button());
            this->room2_tab = (gcnew System::Windows::Forms::TabPage());
            this->room2_timeremaining_lbl = (gcnew System::Windows::Forms::Label());
            this->room2_timer_lbl = (gcnew System::Windows::Forms::Label());
            this->room2_timestarted_lbl = (gcnew System::Windows::Forms::Label());
            this->room2_recipt_pnl = (gcnew System::Windows::Forms::FlowLayoutPanel());
            this->room2_orders_pnl = (gcnew System::Windows::Forms::FlowLayoutPanel());
            this->room2_add_btn = (gcnew System::Windows::Forms::Button());
            this->room2_remove_btn = (gcnew System::Windows::Forms::Button());
            this->room2_end_btn = (gcnew System::Windows::Forms::Button());
            this->room2_start_btn = (gcnew System::Windows::Forms::Button());
            this->room2_order_cmbx = (gcnew System::Windows::Forms::ComboBox());
            this->room2_closeroom_btn = (gcnew System::Windows::Forms::Button());
            this->button4 = (gcnew System::Windows::Forms::Button());
            this->button3 = (gcnew System::Windows::Forms::Button());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->room2_userinput_time = (gcnew System::Windows::Forms::TextBox());
            this->room3_tab = (gcnew System::Windows::Forms::TabPage());
            this->button10 = (gcnew System::Windows::Forms::Button());
            this->button9 = (gcnew System::Windows::Forms::Button());
            this->button8 = (gcnew System::Windows::Forms::Button());
            this->button7 = (gcnew System::Windows::Forms::Button());
            this->button6 = (gcnew System::Windows::Forms::Button());
            this->troom4_tab = (gcnew System::Windows::Forms::TabPage());
            this->room5_tab = (gcnew System::Windows::Forms::TabPage());
            this->billiard1_tab = (gcnew System::Windows::Forms::TabPage());
            this->billiard2_tab = (gcnew System::Windows::Forms::TabPage());
            this->pingpong_tab = (gcnew System::Windows::Forms::TabPage());
            this->countdown_timer1 = (gcnew System::Windows::Forms::Timer(this->components));
            this->stopwatch_timer1 = (gcnew System::Windows::Forms::Timer(this->components));
            this->countdown_timer2 = (gcnew System::Windows::Forms::Timer(this->components));
            this->stopwatch_timer2 = (gcnew System::Windows::Forms::Timer(this->components));
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
            this->Rooms_tabs->Size = System::Drawing::Size(1400, 780);
            this->Rooms_tabs->TabIndex = 0;
            // 
            // room1_tab
            // 
            this->room1_tab->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"room1_tab.BackgroundImage")));
            this->room1_tab->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->room1_tab->Controls->Add(this->room1_recipt_pnl);
            this->room1_tab->Controls->Add(this->room1_orders_pnl);
            this->room1_tab->Controls->Add(this->timeremaining1_lbl);
            this->room1_tab->Controls->Add(this->timer1_lbl);
            this->room1_tab->Controls->Add(this->timestarted1_lbl);
            this->room1_tab->Controls->Add(this->textBoxHours1);
            this->room1_tab->Controls->Add(this->room1_combobox);
            this->room1_tab->Controls->Add(this->room1_remove_btn);
            this->room1_tab->Controls->Add(this->room1_add_btn);
            this->room1_tab->Controls->Add(this->room1_endtime_btn);
            this->room1_tab->Controls->Add(this->Room1_starttime_btn);
            this->room1_tab->Controls->Add(this->room1_close_btn);
            this->room1_tab->Location = System::Drawing::Point(4, 36);
            this->room1_tab->Name = L"room1_tab";
            this->room1_tab->Padding = System::Windows::Forms::Padding(3);
            this->room1_tab->Size = System::Drawing::Size(1392, 740);
            this->room1_tab->TabIndex = 0;
            this->room1_tab->Text = L"ROOM1";
            this->room1_tab->UseVisualStyleBackColor = true;
            this->room1_tab->Click += gcnew System::EventHandler(this, &Rooms::room1_tab_Click);
            // 
            // room1_recipt_pnl
            // 
            this->room1_recipt_pnl->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->room1_recipt_pnl->ForeColor = System::Drawing::Color::White;
            this->room1_recipt_pnl->Location = System::Drawing::Point(764, 98);
            this->room1_recipt_pnl->Name = L"room1_recipt_pnl";
            this->room1_recipt_pnl->Size = System::Drawing::Size(529, 227);
            this->room1_recipt_pnl->TabIndex = 17;
            // 
            // room1_orders_pnl
            // 
            this->room1_orders_pnl->Location = System::Drawing::Point(8, 333);
            this->room1_orders_pnl->Name = L"room1_orders_pnl";
            this->room1_orders_pnl->Size = System::Drawing::Size(397, 383);
            this->room1_orders_pnl->TabIndex = 16;
            // 
            // timeremaining1_lbl
            // 
            this->timeremaining1_lbl->AutoSize = true;
            this->timeremaining1_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->timeremaining1_lbl->Location = System::Drawing::Point(248, 199);
            this->timeremaining1_lbl->Name = L"timeremaining1_lbl";
            this->timeremaining1_lbl->Size = System::Drawing::Size(135, 37);
            this->timeremaining1_lbl->TabIndex = 15;
            this->timeremaining1_lbl->Text = L"00:00:00";
            // 
            // timer1_lbl
            // 
            this->timer1_lbl->AutoSize = true;
            this->timer1_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->timer1_lbl->Location = System::Drawing::Point(248, 138);
            this->timer1_lbl->Name = L"timer1_lbl";
            this->timer1_lbl->Size = System::Drawing::Size(135, 37);
            this->timer1_lbl->TabIndex = 14;
            this->timer1_lbl->Text = L"00:00:00";
            // 
            // timestarted1_lbl
            // 
            this->timestarted1_lbl->AutoSize = true;
            this->timestarted1_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->timestarted1_lbl->Location = System::Drawing::Point(248, 78);
            this->timestarted1_lbl->Name = L"timestarted1_lbl";
            this->timestarted1_lbl->Size = System::Drawing::Size(135, 37);
            this->timestarted1_lbl->TabIndex = 13;
            this->timestarted1_lbl->Text = L"00:00:00";
            // 
            // textBoxHours1
            // 
            this->textBoxHours1->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->textBoxHours1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->textBoxHours1->Location = System::Drawing::Point(592, 408);
            this->textBoxHours1->Name = L"textBoxHours1";
            this->textBoxHours1->Size = System::Drawing::Size(148, 22);
            this->textBoxHours1->TabIndex = 10;
            this->textBoxHours1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Rooms::textBoxHours1_KeyPress);
            // 
            // room1_combobox
            // 
            this->room1_combobox->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->room1_combobox->ForeColor = System::Drawing::Color::Black;
            this->room1_combobox->FormattingEnabled = true;
            this->room1_combobox->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"indomy", L"pepsi", L"fury" });
            this->room1_combobox->Location = System::Drawing::Point(1003, 402);
            this->room1_combobox->Name = L"room1_combobox";
            this->room1_combobox->Size = System::Drawing::Size(350, 35);
            this->room1_combobox->TabIndex = 9;
            // 
            // room1_remove_btn
            // 
            this->room1_remove_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
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
            this->room1_remove_btn->Location = System::Drawing::Point(1056, 574);
            this->room1_remove_btn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->room1_remove_btn->Name = L"room1_remove_btn";
            this->room1_remove_btn->Size = System::Drawing::Size(237, 56);
            this->room1_remove_btn->TabIndex = 8;
            this->room1_remove_btn->UseVisualStyleBackColor = false;
            this->room1_remove_btn->Click += gcnew System::EventHandler(this, &Rooms::room1_remove_btn_Click);
            // 
            // room1_add_btn
            // 
            this->room1_add_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
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
            this->room1_add_btn->Location = System::Drawing::Point(1069, 483);
            this->room1_add_btn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->room1_add_btn->Name = L"room1_add_btn";
            this->room1_add_btn->Size = System::Drawing::Size(224, 60);
            this->room1_add_btn->TabIndex = 7;
            this->room1_add_btn->UseVisualStyleBackColor = false;
            this->room1_add_btn->Click += gcnew System::EventHandler(this, &Rooms::room1_add_btn_Click);
            // 
            // room1_endtime_btn
            // 
            this->room1_endtime_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
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
            this->room1_endtime_btn->Location = System::Drawing::Point(578, 584);
            this->room1_endtime_btn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->room1_endtime_btn->Name = L"room1_endtime_btn";
            this->room1_endtime_btn->Size = System::Drawing::Size(177, 46);
            this->room1_endtime_btn->TabIndex = 6;
            this->room1_endtime_btn->UseVisualStyleBackColor = false;
            this->room1_endtime_btn->Click += gcnew System::EventHandler(this, &Rooms::room1_endtime_btn_Click);
            // 
            // Room1_starttime_btn
            // 
            this->Room1_starttime_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
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
            this->Room1_starttime_btn->Location = System::Drawing::Point(578, 483);
            this->Room1_starttime_btn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->Room1_starttime_btn->Name = L"Room1_starttime_btn";
            this->Room1_starttime_btn->Size = System::Drawing::Size(163, 60);
            this->Room1_starttime_btn->TabIndex = 5;
            this->Room1_starttime_btn->UseVisualStyleBackColor = false;
            this->Room1_starttime_btn->Click += gcnew System::EventHandler(this, &Rooms::Room1_starttime_btn_Click);
            // 
            // room1_close_btn
            // 
            this->room1_close_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
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
            this->room1_close_btn->Location = System::Drawing::Point(1172, 17);
            this->room1_close_btn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->room1_close_btn->Name = L"room1_close_btn";
            this->room1_close_btn->Size = System::Drawing::Size(181, 49);
            this->room1_close_btn->TabIndex = 4;
            this->room1_close_btn->UseVisualStyleBackColor = false;
            this->room1_close_btn->Click += gcnew System::EventHandler(this, &Rooms::room1_close_btn_Click);
            // 
            // room2_tab
            // 
            this->room2_tab->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"room2_tab.BackgroundImage")));
            this->room2_tab->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->room2_tab->Controls->Add(this->room2_timeremaining_lbl);
            this->room2_tab->Controls->Add(this->room2_timer_lbl);
            this->room2_tab->Controls->Add(this->room2_timestarted_lbl);
            this->room2_tab->Controls->Add(this->room2_recipt_pnl);
            this->room2_tab->Controls->Add(this->room2_orders_pnl);
            this->room2_tab->Controls->Add(this->room2_add_btn);
            this->room2_tab->Controls->Add(this->room2_remove_btn);
            this->room2_tab->Controls->Add(this->room2_end_btn);
            this->room2_tab->Controls->Add(this->room2_start_btn);
            this->room2_tab->Controls->Add(this->room2_order_cmbx);
            this->room2_tab->Controls->Add(this->room2_closeroom_btn);
            this->room2_tab->Controls->Add(this->button4);
            this->room2_tab->Controls->Add(this->button3);
            this->room2_tab->Controls->Add(this->button2);
            this->room2_tab->Controls->Add(this->button1);
            this->room2_tab->Controls->Add(this->room2_userinput_time);
            this->room2_tab->Location = System::Drawing::Point(4, 36);
            this->room2_tab->Name = L"room2_tab";
            this->room2_tab->Padding = System::Windows::Forms::Padding(3);
            this->room2_tab->Size = System::Drawing::Size(1392, 740);
            this->room2_tab->TabIndex = 1;
            this->room2_tab->Text = L"ROOM2";
            this->room2_tab->UseVisualStyleBackColor = true;
            this->room2_tab->Click += gcnew System::EventHandler(this, &Rooms::room2_tab_Click);
            // 
            // room2_timeremaining_lbl
            // 
            this->room2_timeremaining_lbl->AutoSize = true;
            this->room2_timeremaining_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->room2_timeremaining_lbl->Location = System::Drawing::Point(246, 198);
            this->room2_timeremaining_lbl->Name = L"room2_timeremaining_lbl";
            this->room2_timeremaining_lbl->Size = System::Drawing::Size(135, 37);
            this->room2_timeremaining_lbl->TabIndex = 25;
            this->room2_timeremaining_lbl->Text = L"00:00:00";
            // 
            // room2_timer_lbl
            // 
            this->room2_timer_lbl->AutoSize = true;
            this->room2_timer_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->room2_timer_lbl->Location = System::Drawing::Point(246, 139);
            this->room2_timer_lbl->Name = L"room2_timer_lbl";
            this->room2_timer_lbl->Size = System::Drawing::Size(135, 37);
            this->room2_timer_lbl->TabIndex = 24;
            this->room2_timer_lbl->Text = L"00:00:00";
            // 
            // room2_timestarted_lbl
            // 
            this->room2_timestarted_lbl->AutoSize = true;
            this->room2_timestarted_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->room2_timestarted_lbl->Location = System::Drawing::Point(246, 80);
            this->room2_timestarted_lbl->Name = L"room2_timestarted_lbl";
            this->room2_timestarted_lbl->Size = System::Drawing::Size(135, 37);
            this->room2_timestarted_lbl->TabIndex = 23;
            this->room2_timestarted_lbl->Text = L"00:00:00";
            // 
            // room2_recipt_pnl
            // 
            this->room2_recipt_pnl->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->room2_recipt_pnl->ForeColor = System::Drawing::Color::WhiteSmoke;
            this->room2_recipt_pnl->Location = System::Drawing::Point(755, 92);
            this->room2_recipt_pnl->Name = L"room2_recipt_pnl";
            this->room2_recipt_pnl->Size = System::Drawing::Size(518, 241);
            this->room2_recipt_pnl->TabIndex = 17;
            // 
            // room2_orders_pnl
            // 
            this->room2_orders_pnl->AutoScroll = true;
            this->room2_orders_pnl->Location = System::Drawing::Point(8, 335);
            this->room2_orders_pnl->Name = L"room2_orders_pnl";
            this->room2_orders_pnl->Size = System::Drawing::Size(397, 377);
            this->room2_orders_pnl->TabIndex = 22;
            // 
            // room2_add_btn
            // 
            this->room2_add_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->room2_add_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room2_add_btn->Cursor = System::Windows::Forms::Cursors::Hand;
            this->room2_add_btn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room2_add_btn->FlatAppearance->BorderSize = 0;
            this->room2_add_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room2_add_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room2_add_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->room2_add_btn->Location = System::Drawing::Point(1062, 495);
            this->room2_add_btn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->room2_add_btn->Name = L"room2_add_btn";
            this->room2_add_btn->Size = System::Drawing::Size(225, 41);
            this->room2_add_btn->TabIndex = 21;
            this->room2_add_btn->UseVisualStyleBackColor = false;
            this->room2_add_btn->Click += gcnew System::EventHandler(this, &Rooms::room2_add_btn_Click);
            // 
            // room2_remove_btn
            // 
            this->room2_remove_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->room2_remove_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room2_remove_btn->Cursor = System::Windows::Forms::Cursors::Hand;
            this->room2_remove_btn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room2_remove_btn->FlatAppearance->BorderSize = 0;
            this->room2_remove_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room2_remove_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room2_remove_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->room2_remove_btn->Location = System::Drawing::Point(1072, 582);
            this->room2_remove_btn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->room2_remove_btn->Name = L"room2_remove_btn";
            this->room2_remove_btn->Size = System::Drawing::Size(201, 41);
            this->room2_remove_btn->TabIndex = 20;
            this->room2_remove_btn->UseVisualStyleBackColor = false;
            this->room2_remove_btn->Click += gcnew System::EventHandler(this, &Rooms::room2_remove_btn_Click);
            // 
            // room2_end_btn
            // 
            this->room2_end_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->room2_end_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room2_end_btn->Cursor = System::Windows::Forms::Cursors::Hand;
            this->room2_end_btn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room2_end_btn->FlatAppearance->BorderSize = 0;
            this->room2_end_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room2_end_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room2_end_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->room2_end_btn->Location = System::Drawing::Point(575, 577);
            this->room2_end_btn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->room2_end_btn->Name = L"room2_end_btn";
            this->room2_end_btn->Size = System::Drawing::Size(176, 51);
            this->room2_end_btn->TabIndex = 19;
            this->room2_end_btn->UseVisualStyleBackColor = false;
            this->room2_end_btn->Click += gcnew System::EventHandler(this, &Rooms::room2_end_btn_Click);
            // 
            // room2_start_btn
            // 
            this->room2_start_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->room2_start_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room2_start_btn->Cursor = System::Windows::Forms::Cursors::Hand;
            this->room2_start_btn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room2_start_btn->FlatAppearance->BorderSize = 0;
            this->room2_start_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room2_start_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room2_start_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->room2_start_btn->Location = System::Drawing::Point(575, 495);
            this->room2_start_btn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->room2_start_btn->Name = L"room2_start_btn";
            this->room2_start_btn->Size = System::Drawing::Size(176, 41);
            this->room2_start_btn->TabIndex = 18;
            this->room2_start_btn->UseVisualStyleBackColor = false;
            this->room2_start_btn->Click += gcnew System::EventHandler(this, &Rooms::room2_start_btn_Click);
            // 
            // room2_order_cmbx
            // 
            this->room2_order_cmbx->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->room2_order_cmbx->FormattingEnabled = true;
            this->room2_order_cmbx->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"indomy", L"pepsi", L"fury" });
            this->room2_order_cmbx->Location = System::Drawing::Point(999, 405);
            this->room2_order_cmbx->Name = L"room2_order_cmbx";
            this->room2_order_cmbx->Size = System::Drawing::Size(356, 35);
            this->room2_order_cmbx->TabIndex = 17;
            // 
            // room2_closeroom_btn
            // 
            this->room2_closeroom_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room2_closeroom_btn->Cursor = System::Windows::Forms::Cursors::Hand;
            this->room2_closeroom_btn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room2_closeroom_btn->FlatAppearance->BorderSize = 0;
            this->room2_closeroom_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room2_closeroom_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room2_closeroom_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->room2_closeroom_btn->Location = System::Drawing::Point(1176, 23);
            this->room2_closeroom_btn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->room2_closeroom_btn->Name = L"room2_closeroom_btn";
            this->room2_closeroom_btn->Size = System::Drawing::Size(179, 39);
            this->room2_closeroom_btn->TabIndex = 16;
            this->room2_closeroom_btn->UseVisualStyleBackColor = false;
            this->room2_closeroom_btn->Click += gcnew System::EventHandler(this, &Rooms::room2_closeroom_btn_Click);
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
            this->button4->Location = System::Drawing::Point(985, 458);
            this->button4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->button4->Name = L"button4";
            this->button4->Size = System::Drawing::Size(166, 33);
            this->button4->TabIndex = 15;
            this->button4->UseVisualStyleBackColor = false;
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
            this->button3->Location = System::Drawing::Point(999, 540);
            this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->button3->Name = L"button3";
            this->button3->Size = System::Drawing::Size(152, 33);
            this->button3->TabIndex = 14;
            this->button3->UseVisualStyleBackColor = false;
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
            this->button2->Location = System::Drawing::Point(548, 540);
            this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(129, 33);
            this->button2->TabIndex = 13;
            this->button2->UseVisualStyleBackColor = false;
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
            this->button1->Location = System::Drawing::Point(548, 458);
            this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(129, 33);
            this->button1->TabIndex = 12;
            this->button1->UseVisualStyleBackColor = false;
            // 
            // room2_userinput_time
            // 
            this->room2_userinput_time->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->room2_userinput_time->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->room2_userinput_time->Location = System::Drawing::Point(598, 405);
            this->room2_userinput_time->Name = L"room2_userinput_time";
            this->room2_userinput_time->Size = System::Drawing::Size(136, 31);
            this->room2_userinput_time->TabIndex = 11;
            this->room2_userinput_time->TextChanged += gcnew System::EventHandler(this, &Rooms::room2_user_time_TextChanged);
            this->room2_userinput_time->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Rooms::room2_userinput_time_KeyPress);
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
            this->room3_tab->Size = System::Drawing::Size(1392, 740);
            this->room3_tab->TabIndex = 2;
            this->room3_tab->Text = L"ROOM3";
            this->room3_tab->UseVisualStyleBackColor = true;
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
            // troom4_tab
            // 
            this->troom4_tab->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"troom4_tab.BackgroundImage")));
            this->troom4_tab->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->troom4_tab->Location = System::Drawing::Point(4, 36);
            this->troom4_tab->Name = L"troom4_tab";
            this->troom4_tab->Padding = System::Windows::Forms::Padding(3);
            this->troom4_tab->Size = System::Drawing::Size(1392, 740);
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
            this->room5_tab->Size = System::Drawing::Size(1392, 740);
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
            this->billiard1_tab->Size = System::Drawing::Size(1392, 740);
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
            this->billiard2_tab->Size = System::Drawing::Size(1392, 740);
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
            this->pingpong_tab->Size = System::Drawing::Size(1392, 740);
            this->pingpong_tab->TabIndex = 7;
            this->pingpong_tab->Text = L"PING PONG";
            this->pingpong_tab->UseVisualStyleBackColor = true;
            // 
            // countdown_timer1
            // 
            this->countdown_timer1->Tick += gcnew System::EventHandler(this, &Rooms::countdown_timer1_tick);
            // 
            // stopwatch_timer1
            // 
            this->stopwatch_timer1->Tick += gcnew System::EventHandler(this, &Rooms::stopwatch_timer1_Tick);
            // 
            // countdown_timer2
            // 
            this->countdown_timer2->Tick += gcnew System::EventHandler(this, &Rooms::countdown_timer2_Tick);
            // 
            // stopwatch_timer2
            // 
            this->stopwatch_timer2->Tick += gcnew System::EventHandler(this, &Rooms::stopwatch_timer2_Tick);
            // 
            // Rooms
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
            this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->ClientSize = System::Drawing::Size(1400, 780);
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
    private: System::Void countdown_timer1_tick(System::Object^ sender, System::EventArgs^ e) {

        if (endTime1 != DateTime::MinValue) {
            // Calculate the remaining time
            TimeSpan remainingTime = endTime1 - DateTime::Now;

            // Check if the countdown is complete
            if (remainingTime.TotalSeconds <= 0) {
                // Countdown is complete, handle the edge case
                countdown_timer1->Stop();
                MessageBox::Show("Room1 time Ended", "Countdown Notification");
            }
            else {
                // Update your UI with the remaining time
                timeremaining1_lbl->Text = remainingTime.ToString("hh\\:mm\\:ss");
            }
        }
        else {
            // Handle the case where endTime1 is DateTime::MinValue (stopwatch mode)
            // Update your UI or perform any necessary actions here
        }

    }

    private: System::Void Room1_starttime_btn_Click(System::Object^ sender, System::EventArgs^ e) {
        double timeInput;
        if (room1_startTime_btn_click == false) {
            room1_startTime_btn_click = true;
            if (Double::TryParse(textBoxHours1->Text, timeInput) && timeInput >= 0) {
                // Convert hours to minutes
                int minutes = static_cast<int>(timeInput * 60);

                // User entered a valid number of minutes, start countdown
                startTime1 = DateTime::Now;
                room1_available = false;
                timestarted1_lbl->Text = startTime1.ToString("hh:mm:ss tt");
                endTime1 = DateTime::Now.AddMinutes(minutes);
                countdown_timer1->Start();
                stopwatch_timer1->Stop();
            }
            else if (timeInput < 0) {
                MessageBox::Show("please enter non negative value", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
            else {
                // User didn't enter a valid number, start stopwatch
                startTime1 = DateTime::Now;
                room1_available = false;
                timestarted1_lbl->Text = startTime1.ToString("hh:mm:ss tt");
                endTime1 = DateTime::MinValue;
                countdown_timer1->Stop();
                stopwatch_timer1->Start();
            }
        }
            else {
            MessageBox::Show("Room is already online", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
    }
    

private: System::Void room1_endtime_btn_Click(System::Object^ sender, System::EventArgs^ e) {
    if (timestarted1_lbl->Text == "00:00:00")
    {
        MessageBox::Show("No Room Started", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
    else {
    room1_endtime_btn_click = true;
        countdown_timer1->Stop();
        stopwatch_timer1->Stop();
        room1_available = true;
        finalTime1 = DateTime::Now;
    }
}
private: System::Void room1_tab_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void stopwatch_timer1_Tick(System::Object^ sender, System::EventArgs^ e) {

    TimeSpan elapsedTime = DateTime::Now - startTime1;
    timer1_lbl->Text = elapsedTime.ToString("hh\\:mm\\:ss");
}
private: System::Void room1_remove_btn_Click(System::Object^ sender, System::EventArgs^ e) {
    
    if (room1_startTime_btn_click == true) {
        if (room1_combobox->SelectedIndex == -1) {
            MessageBox::Show("Please choose an item from the list first.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
        else {
            String^ selectedItem = room1_combobox->SelectedItem->ToString();
            RemoveItemFromPanel(selectedItem, room1_orders_pnl, room1_orders_map);
        }
    }
    else {
        MessageBox::Show("room has to start first", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
}

private: System::Void room1_add_btn_Click(System::Object^ sender, System::EventArgs^ e) {
    if (room1_startTime_btn_click == true) {
        if (room1_combobox->SelectedIndex == -1) {
            MessageBox::Show("Please choose an item from the list first.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
        else {
            String^ selected = room1_combobox->SelectedItem->ToString();
            if (!String::IsNullOrEmpty(selected)) {
                AddItemToPanel1(selected, room1_orders_pnl);
                if (room1_orders_map->ContainsKey(selected)) {
                    room1_orders_map[selected]++;
                }
                else {
                    room1_orders_map[selected] = 1;
                }
            }
        }
    }
    else {
        MessageBox::Show("room has to start first", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
}
private: System::Void AddItemToPanel1(String^ itemName,FlowLayoutPanel^ pnl_name) {
           Label^ newItemLabel = gcnew Label();
           newItemLabel->Text = itemName;

           // Calculate the Y-coordinate for the new label
           int newY = pnl_name->Controls->Count * (newItemLabel->Height + 5);

           newItemLabel->Location = System::Drawing::Point(0, newY);

           // Set other properties like size, etc. as needed
           pnl_name->Controls->Add(newItemLabel);
       }


private: System::Void RemoveItemFromPanel(String^ itemName,FlowLayoutPanel^ pnl_name, Dictionary<String^, int>^ user_orders) {
           for each (Control ^ control in pnl_name->Controls) {
               if (control->Text == itemName) {
                   pnl_name->Controls->Remove(control);
                   if (user_orders->ContainsKey(itemName)) {
                       if (user_orders[itemName] > 1) {
                           user_orders[itemName]--;
                       }
                       else {
                           user_orders->Remove(itemName);
                       }
                       break; // Exit the loop after removing the item
                   }
                   else {
                       MessageBox::Show("the orders are empty", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
                   }
               }
           }
       }
private: System::Void Rooms::FetchItemPricesFromDatabase() {
           // Execute your database query to fetch item prices and update the itemPrices map
           // ...

           // Update the itemPrices map with the fetched data
           //itemPrices.clear(); // Clear existing data
          // while (reader->Read()) {
               // Parse data from the reader and update itemPrices map
              // std::string itemName = reader->GetString(0);
             //  double itemPrice = reader->GetDouble(1);
             //  itemPrices[itemName] = itemPrice;
          // }

           // Close the reader and connection when done
        //   reader->Close();
         //  connection->Close();
       }
private: System::Void room1_close_btn_Click(System::Object^ sender, System::EventArgs^ e) {

    ////////////////////////////////////////////////////////////
    //query for saving the data for the order in the data base//
    ////////////////////////////////////////////////////////////


        if (timestarted1_lbl->Text == "00:00:00")
        {
            MessageBox::Show("The Room is empty ya ahbal", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
        else {
    if (room1_endtime_btn_click == true) {
            DisplayReceipt(room1_orders_map, itemPrices, startTime1, finalTime1, room1_recipt_pnl,"Room1");
            MessageBox::Show("Done?", "Countdown Notification");
            room1_recipt_pnl->Controls->Clear();
            room1_orders_pnl->Controls->Clear();
            timer1_lbl->Text = "00:00:00";
            timeremaining1_lbl->Text = "00:00:00";
            timestarted1_lbl->Text = "00:00:00";
            room1_orders_map->Clear();
            stopwatch_timer1->Stop();
            countdown_timer1->Stop();
            room1_startTime_btn_click = false;
            room1_endtime_btn_click = false;
        }
    else {
        MessageBox::Show("you have to end the time first", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
    }
}

       
private: void DisplayReceipt(Dictionary<String^, int>^ userOrders, Dictionary<String^, int>^ itemprices,DateTime startTime,DateTime endTime, FlowLayoutPanel^ panel_name,String^ room_id) {
           double totalCost = 0.0;
           double elapsedHours;
           double timeCost;
           int int_time_cost;
           // Clear the existing controls in the flow layout panel
           panel_name->Controls->Clear();
           
           if (endTime != DateTime::MinValue) {
               // Calculate the elapsed time in hours
               TimeSpan elapsedTime = endTime - startTime;
               elapsedHours = elapsedTime.TotalHours;

               timeCost = elapsedHours * 50;
             
               if (elapsedHours < 0.4)
                   timeCost = 20.0;

                int_time_cost =static_cast<int>(timeCost);
               // Add the time cost to the total cost
               totalCost += int_time_cost;
           }

           for each(KeyValuePair<String^, int>^ order in userOrders) {
               String^ itemName = order->Key;
               int quantity = order->Value;

               if (itemprices->ContainsKey(itemName)) {
                   double itemprice = itemprices[itemName];
                   totalCost += itemprice * quantity;

                   // Create a label to display the item details
                   Label^ labelItem = gcnew Label();
                   labelItem->AutoSize = true;
                   labelItem->Text = itemName + " x" + quantity;

                   // Add the label to the flow layout panel
                   panel_name->Controls->Add(labelItem);
               }
           }
           //MessageBox::Show("int_time_cost1: " + int_time_cost.ToString());
           //MessageBox::Show("totalCost: " + totalCost.ToString());

           // Display the total cost
           Label^ labelTotalCost = gcnew Label();
           Label^ labelTotalTimeCost = gcnew Label();
           labelTotalCost->AutoSize = true;
           labelTotalTimeCost->AutoSize = true;
           labelTotalTimeCost->Text = "Time Cost: " + int_time_cost.ToString();
           labelTotalCost->Text = "Total Cost: " + totalCost.ToString();
           SharedData::Instance->TotalAllRoomsCost += totalCost;
           SharedData::Instance->AddHoursToRoomTime(room_id, elapsedHours);

           
           // Add the total cost label to the flow layout panel
           panel_name->Controls->Add(labelTotalTimeCost);
           panel_name->Controls->Add(labelTotalCost);
       }




private: System::Void room2_start_btn_Click(System::Object^ sender, System::EventArgs^ e) {
    double timeInput;
    if (room2_startTime_btn_click == false) {
        room2_startTime_btn_click = true;
        //if(room2_timestarted_lbl->Text == "00:00:00")
        if (Double::TryParse(room2_userinput_time->Text, timeInput) && timeInput >= 0) {
            // Convert hours to minutes
            int minutes = static_cast<int>(timeInput * 60);

            // User entered a valid number of minutes, start countdown
            startTime2 = DateTime::Now;
            room2_available = false;
            room2_timestarted_lbl->Text = startTime2.ToString("hh:mm:ss tt");
            endTime2 = DateTime::Now.AddMinutes(minutes);
            countdown_timer2->Start();
            stopwatch_timer2->Stop();
        }
        else if (timeInput < 0) {
            MessageBox::Show("please enter non negative value", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
        else {
            // User didn't enter a valid number, start stopwatch
            startTime2 = DateTime::Now;
            room2_available = false;
            room2_timestarted_lbl->Text = startTime2.ToString("hh:mm:ss tt");
            endTime2 = DateTime::MinValue;
            countdown_timer2->Stop();
            stopwatch_timer2->Start();
        }
    }
    else {
        MessageBox::Show("Room is already online", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
}
private: System::Void room2_end_btn_Click(System::Object^ sender, System::EventArgs^ e) {
    if (room2_timestarted_lbl->Text == "00:00:00")
    {
        MessageBox::Show("No Room Started", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
    else {
    room2_endtime_btn_click = true;
        countdown_timer2->Stop();
        stopwatch_timer2->Stop();
        room2_available = true;
        finalTime2 = DateTime::Now;
    }

}
private: System::Void room2_add_btn_Click(System::Object^ sender, System::EventArgs^ e) {
    if (room2_startTime_btn_click == true) {
        if (room2_order_cmbx->SelectedIndex == -1) {
            MessageBox::Show("Please choose an item from the list first.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
        else {
            String^ selected = room2_order_cmbx->SelectedItem->ToString();
            if (!String::IsNullOrEmpty(selected)) {
                AddItemToPanel1(selected, room2_orders_pnl);
                if (room2_orders_map->ContainsKey(selected)) {
                    room2_orders_map[selected]++;
                }
                else {
                    room2_orders_map[selected] = 1;
                }
            }
        }
    }
    else {
        MessageBox::Show("room has to start first", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
}
private: System::Void room2_remove_btn_Click(System::Object^ sender, System::EventArgs^ e) {
    if (room2_startTime_btn_click == true) {
        if (room2_order_cmbx->SelectedIndex == -1) {
            MessageBox::Show("Please choose an item from the list first.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
        else {
            String^ selectedItem = room2_order_cmbx->SelectedItem->ToString();
            RemoveItemFromPanel(selectedItem, room2_orders_pnl, room2_orders_map);
        }
    }
    else {
        MessageBox::Show("room has to start first", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
}
private: System::Void room2_closeroom_btn_Click(System::Object^ sender, System::EventArgs^ e) {
    ////////////////////////////////////////////////////////////
     //query for saving the data for the order in the data base//
     ////////////////////////////////////////////////////////////


        if (room2_timestarted_lbl->Text == "00:00:00")
        {
            MessageBox::Show("The Room is empty ya ahbal", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
        else {
    if (room2_endtime_btn_click == true) {
            DisplayReceipt(room2_orders_map, itemPrices, startTime2, finalTime2, room2_recipt_pnl,"Room2");
            MessageBox::Show("Done?", "Countdown Notification");
            room2_recipt_pnl->Controls->Clear();
            room2_orders_pnl->Controls->Clear();
            room2_timer_lbl->Text = "00:00:00";
            room2_timeremaining_lbl->Text = "00:00:00";
            room2_timestarted_lbl->Text = "00:00:00";
            room2_orders_map->Clear();
            stopwatch_timer2->Stop();
            countdown_timer2->Stop();
            room2_startTime_btn_click = false;
            room2_endtime_btn_click = false;
        }
    else {
        MessageBox::Show("you have to end the time first", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
         }
    }
}
private: System::Void countdown_timer2_Tick(System::Object^ sender, System::EventArgs^ e) {
    if (endTime2 != DateTime::MinValue) {
        // Calculate the remaining time
        TimeSpan remainingTime = endTime2 - DateTime::Now;

        // Check if the countdown is complete
        if (remainingTime.TotalSeconds <= 0) {
            // Countdown is complete, handle the edge case
            countdown_timer2->Stop();
            MessageBox::Show("Room2 time Ended", "Countdown Notification");
        }
        else {
            // Update your UI with the remaining time
            room2_timeremaining_lbl->Text = remainingTime.ToString("hh\\:mm\\:ss");
        }
    }
    else {
        // Handle the case where endTime1 is DateTime::MinValue (stopwatch mode)
        // Update your UI or perform any necessary actions here
    }
}
private: System::Void stopwatch_timer2_Tick(System::Object^ sender, System::EventArgs^ e) {
    TimeSpan elapsedTime = DateTime::Now - startTime2;
    room2_timer_lbl->Text = elapsedTime.ToString("hh\\:mm\\:ss");
}
private: System::Void room2_userinput_time_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
    if (!Char::IsDigit(e->KeyChar) && e->KeyChar != '.' && !Char::IsControl(e->KeyChar)) {
        // Block the input by setting e->Handled to true
        e->Handled = true;
    }

    // Allow only one decimal point
    if (e->KeyChar == '.' && room2_userinput_time->Text->Contains(".")) {
        // Block the input by setting e->Handled to true
        e->Handled = true;
    }
}
private: System::Void textBoxHours1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {

    if (!Char::IsDigit(e->KeyChar) && e->KeyChar != '.' && !Char::IsControl(e->KeyChar)) {
        // Block the input by setting e->Handled to true
        e->Handled = true;
    }

    // Allow only one decimal point
    if (e->KeyChar == '.' && textBoxHours1->Text->Contains(".")) {
        // Block the input by setting e->Handled to true
        e->Handled = true;
    }
}



};
}
