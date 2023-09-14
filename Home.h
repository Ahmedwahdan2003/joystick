#pragma once
#include"used_classes.h"
#include"Room1.h"
#include"room2.h"
namespace joystick {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Home
	/// </summary>
	public ref class Home : public System::Windows::Forms::Form
	{
	public:
		Home(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
            Timer^ timer = gcnew Timer();
            timer->Interval = 1000; 
            room2->TopLevel = false;
            room1->TopLevel = false;
            room1_pnl->Controls->Add(room1);
            room2_pnl->Controls->Add(room2);
            timer->Start();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Home()
		{
			if (components)
			{
				delete components;
			}
		}
    private: System::Windows::Forms::Button^ Room2_btn;
    protected:
    private: System::Windows::Forms::Button^ Room1_btn;
    private: System::Windows::Forms::Button^ Room3_btn;
    private: System::Windows::Forms::Button^ Room4_btn;
    private: System::Windows::Forms::Button^ billiard1_btn;
    private: System::Windows::Forms::Button^ billiard2_btn;
    private: System::Windows::Forms::Button^ Room5_btn;
    private: System::Windows::Forms::Button^ pingpong_btn;
    private: System::Windows::Forms::Button^ end_day_btn;
    private: System::Windows::Forms::Button^ settings_btn;
    private: System::Windows::Forms::Button^ home_btn;
    private: System::Windows::Forms::Button^ reports_btn;
    private: System::Windows::Forms::Button^ storage_btn;
    private: System::Windows::Forms::Button^ exit_btn;
    private: System::Windows::Forms::Label^ time_lb;
    private: System::Windows::Forms::Timer^ timer1;
    private: System::Windows::Forms::Panel^ room1_pnl;
    private: System::Windows::Forms::Panel^ room2_pnl;

           

    private: System::ComponentModel::IContainer^ components;

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
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Home::typeid));
            this->Room2_btn = (gcnew System::Windows::Forms::Button());
            this->Room1_btn = (gcnew System::Windows::Forms::Button());
            this->Room3_btn = (gcnew System::Windows::Forms::Button());
            this->Room4_btn = (gcnew System::Windows::Forms::Button());
            this->billiard1_btn = (gcnew System::Windows::Forms::Button());
            this->billiard2_btn = (gcnew System::Windows::Forms::Button());
            this->Room5_btn = (gcnew System::Windows::Forms::Button());
            this->pingpong_btn = (gcnew System::Windows::Forms::Button());
            this->end_day_btn = (gcnew System::Windows::Forms::Button());
            this->settings_btn = (gcnew System::Windows::Forms::Button());
            this->home_btn = (gcnew System::Windows::Forms::Button());
            this->reports_btn = (gcnew System::Windows::Forms::Button());
            this->storage_btn = (gcnew System::Windows::Forms::Button());
            this->exit_btn = (gcnew System::Windows::Forms::Button());
            this->time_lb = (gcnew System::Windows::Forms::Label());
            this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
            this->room1_pnl = (gcnew System::Windows::Forms::Panel());
            this->room2_pnl = (gcnew System::Windows::Forms::Panel());
            this->SuspendLayout();
            // 
            // Room2_btn
            // 
            this->Room2_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->Room2_btn->Cursor = System::Windows::Forms::Cursors::Hand;
            this->Room2_btn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->Room2_btn->FlatAppearance->BorderSize = 0;
            this->Room2_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->Room2_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->Room2_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->Room2_btn->Location = System::Drawing::Point(362, 168);
            this->Room2_btn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->Room2_btn->Name = L"Room2_btn";
            this->Room2_btn->Size = System::Drawing::Size(243, 137);
            this->Room2_btn->TabIndex = 3;
            this->Room2_btn->UseVisualStyleBackColor = false;
            this->Room2_btn->Click += gcnew System::EventHandler(this, &Home::Room2_btn_Click);
            // 
            // Room1_btn
            // 
            this->Room1_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->Room1_btn->Cursor = System::Windows::Forms::Cursors::Hand;
            this->Room1_btn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->Room1_btn->FlatAppearance->BorderSize = 0;
            this->Room1_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->Room1_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->Room1_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->Room1_btn->Location = System::Drawing::Point(38, 168);
            this->Room1_btn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->Room1_btn->Name = L"Room1_btn";
            this->Room1_btn->Size = System::Drawing::Size(243, 137);
            this->Room1_btn->TabIndex = 4;
            this->Room1_btn->UseVisualStyleBackColor = false;
            this->Room1_btn->Click += gcnew System::EventHandler(this, &Home::Room1_btn_Click);
            // 
            // Room3_btn
            // 
            this->Room3_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->Room3_btn->Cursor = System::Windows::Forms::Cursors::Hand;
            this->Room3_btn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->Room3_btn->FlatAppearance->BorderSize = 0;
            this->Room3_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->Room3_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->Room3_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->Room3_btn->Location = System::Drawing::Point(696, 168);
            this->Room3_btn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->Room3_btn->Name = L"Room3_btn";
            this->Room3_btn->Size = System::Drawing::Size(243, 137);
            this->Room3_btn->TabIndex = 5;
            this->Room3_btn->UseVisualStyleBackColor = false;
            // 
            // Room4_btn
            // 
            this->Room4_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->Room4_btn->Cursor = System::Windows::Forms::Cursors::Hand;
            this->Room4_btn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->Room4_btn->FlatAppearance->BorderSize = 0;
            this->Room4_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->Room4_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->Room4_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->Room4_btn->Location = System::Drawing::Point(1008, 168);
            this->Room4_btn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->Room4_btn->Name = L"Room4_btn";
            this->Room4_btn->Size = System::Drawing::Size(243, 137);
            this->Room4_btn->TabIndex = 6;
            this->Room4_btn->UseVisualStyleBackColor = false;
            // 
            // billiard1_btn
            // 
            this->billiard1_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->billiard1_btn->Cursor = System::Windows::Forms::Cursors::Hand;
            this->billiard1_btn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->billiard1_btn->FlatAppearance->BorderSize = 0;
            this->billiard1_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->billiard1_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->billiard1_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->billiard1_btn->Location = System::Drawing::Point(1008, 361);
            this->billiard1_btn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->billiard1_btn->Name = L"billiard1_btn";
            this->billiard1_btn->Size = System::Drawing::Size(243, 137);
            this->billiard1_btn->TabIndex = 7;
            this->billiard1_btn->UseVisualStyleBackColor = false;
            // 
            // billiard2_btn
            // 
            this->billiard2_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->billiard2_btn->Cursor = System::Windows::Forms::Cursors::Hand;
            this->billiard2_btn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->billiard2_btn->FlatAppearance->BorderSize = 0;
            this->billiard2_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->billiard2_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->billiard2_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->billiard2_btn->Location = System::Drawing::Point(1008, 542);
            this->billiard2_btn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->billiard2_btn->Name = L"billiard2_btn";
            this->billiard2_btn->Size = System::Drawing::Size(243, 137);
            this->billiard2_btn->TabIndex = 8;
            this->billiard2_btn->UseVisualStyleBackColor = false;
            // 
            // Room5_btn
            // 
            this->Room5_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->Room5_btn->Cursor = System::Windows::Forms::Cursors::Hand;
            this->Room5_btn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->Room5_btn->FlatAppearance->BorderSize = 0;
            this->Room5_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->Room5_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->Room5_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->Room5_btn->Location = System::Drawing::Point(38, 361);
            this->Room5_btn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->Room5_btn->Name = L"Room5_btn";
            this->Room5_btn->Size = System::Drawing::Size(243, 137);
            this->Room5_btn->TabIndex = 9;
            this->Room5_btn->UseVisualStyleBackColor = false;
            // 
            // pingpong_btn
            // 
            this->pingpong_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->pingpong_btn->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pingpong_btn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->pingpong_btn->FlatAppearance->BorderSize = 0;
            this->pingpong_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->pingpong_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->pingpong_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->pingpong_btn->Location = System::Drawing::Point(38, 542);
            this->pingpong_btn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->pingpong_btn->Name = L"pingpong_btn";
            this->pingpong_btn->Size = System::Drawing::Size(243, 137);
            this->pingpong_btn->TabIndex = 10;
            this->pingpong_btn->UseVisualStyleBackColor = false;
            // 
            // end_day_btn
            // 
            this->end_day_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->end_day_btn->Cursor = System::Windows::Forms::Cursors::Hand;
            this->end_day_btn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->end_day_btn->FlatAppearance->BorderSize = 0;
            this->end_day_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->end_day_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->end_day_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->end_day_btn->Location = System::Drawing::Point(547, 621);
            this->end_day_btn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->end_day_btn->Name = L"end_day_btn";
            this->end_day_btn->Size = System::Drawing::Size(208, 58);
            this->end_day_btn->TabIndex = 11;
            this->end_day_btn->UseVisualStyleBackColor = false;
            // 
            // settings_btn
            // 
            this->settings_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->settings_btn->Cursor = System::Windows::Forms::Cursors::Hand;
            this->settings_btn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->settings_btn->FlatAppearance->BorderSize = 0;
            this->settings_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->settings_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->settings_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->settings_btn->Location = System::Drawing::Point(265, 11);
            this->settings_btn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->settings_btn->Name = L"settings_btn";
            this->settings_btn->Size = System::Drawing::Size(174, 48);
            this->settings_btn->TabIndex = 12;
            this->settings_btn->UseVisualStyleBackColor = false;
            // 
            // home_btn
            // 
            this->home_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->home_btn->Cursor = System::Windows::Forms::Cursors::Hand;
            this->home_btn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->home_btn->FlatAppearance->BorderSize = 0;
            this->home_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->home_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->home_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->home_btn->Location = System::Drawing::Point(476, 11);
            this->home_btn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->home_btn->Name = L"home_btn";
            this->home_btn->Size = System::Drawing::Size(174, 48);
            this->home_btn->TabIndex = 13;
            this->home_btn->UseVisualStyleBackColor = false;
            // 
            // storage_btn
            // 
            this->storage_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->storage_btn->Cursor = System::Windows::Forms::Cursors::Hand;
            this->storage_btn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->storage_btn->FlatAppearance->BorderSize = 0;
            this->storage_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->storage_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->storage_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->storage_btn->Location = System::Drawing::Point(877, 11);
            this->storage_btn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->storage_btn->Name = L"storage_btn";
            this->storage_btn->Size = System::Drawing::Size(174, 48);
            this->storage_btn->TabIndex = 15;
            this->storage_btn->UseVisualStyleBackColor = false;
            // 
            // exit_btn
            // 
            this->exit_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->exit_btn->Cursor = System::Windows::Forms::Cursors::Hand;
            this->exit_btn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->exit_btn->FlatAppearance->BorderSize = 0;
            this->exit_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->exit_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->exit_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->exit_btn->Location = System::Drawing::Point(1204, 5);
            this->exit_btn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->exit_btn->Name = L"exit_btn";
            this->exit_btn->Size = System::Drawing::Size(64, 63);
            this->exit_btn->TabIndex = 16;
            this->exit_btn->UseVisualStyleBackColor = false;
            this->exit_btn->Click += gcnew System::EventHandler(this, &Home::exit_btn_Click);
            // 
            // time_lb
            // 
            this->time_lb->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->time_lb->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->time_lb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->time_lb->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->time_lb->Location = System::Drawing::Point(532, 467);
            this->time_lb->Name = L"time_lb";
            this->time_lb->Size = System::Drawing::Size(241, 60);
            this->time_lb->TabIndex = 17;
            this->time_lb->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // timer1
            // 
            this->timer1->Enabled = true;
            this->timer1->Interval = 1000;
            this->timer1->Tick += gcnew System::EventHandler(this, &Home::timer1_Tick);
            // 
            // room1_pnl
            // 
            this->room1_pnl->Location = System::Drawing::Point(684, 64);
            this->room1_pnl->Name = L"room1_pnl";
            this->room1_pnl->Size = System::Drawing::Size(640, 615);
            this->room1_pnl->TabIndex = 18;
            this->room1_pnl->Visible = false;
            // 
            // room2_pnl
            // 
            this->room2_pnl->Location = System::Drawing::Point(684, 61);
            this->room2_pnl->Name = L"room2_pnl";
            this->room2_pnl->Size = System::Drawing::Size(640, 615);
            this->room2_pnl->TabIndex = 19;
            this->room2_pnl->Visible = false;
            // 
            // Home
            // 
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
            this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
            this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->ClientSize = System::Drawing::Size(1280, 720);
            this->Controls->Add(this->room2_pnl);
            this->Controls->Add(this->room1_pnl);
            this->Controls->Add(this->time_lb);
            this->Controls->Add(this->exit_btn);
            this->Controls->Add(this->storage_btn);
            this->Controls->Add(this->reports_btn);
            this->Controls->Add(this->home_btn);
            this->Controls->Add(this->settings_btn);
            this->Controls->Add(this->end_day_btn);
            this->Controls->Add(this->pingpong_btn);
            this->Controls->Add(this->Room5_btn);
            this->Controls->Add(this->billiard2_btn);
            this->Controls->Add(this->billiard1_btn);
            this->Controls->Add(this->Room4_btn);
            this->Controls->Add(this->Room3_btn);
            this->Controls->Add(this->Room1_btn);
            this->Controls->Add(this->Room2_btn);
            this->DoubleBuffered = true;
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
            this->Name = L"Home";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"Home";
            this->Load += gcnew System::EventHandler(this, &Home::Home_Load);
            this->ResumeLayout(false);

        }
#pragma endregion
	private: System::Void Home_Load(System::Object^ sender, System::EventArgs^ e) {
		
	}
    private: System::Void exit_btn_Click(System::Object^ sender, System::EventArgs^ e) {
        Application::Exit();
    }
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {

    DateTime currentTime = DateTime::Now;


    time_lb->Text = currentTime.ToString("hh:mm:ss tt");

}
private: System::Void Room1_btn_Click(System::Object^ sender, System::EventArgs^ e) {
    
    room1_pnl->Visible = true;
    room2_pnl->Visible = false;
    room1->Show();
    
}
    
    
    room2_pnl->Visible = true;
    room1_pnl->Visible = false;
    room2->Show();
}
};
}
