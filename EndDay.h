#pragma once
#include"Rooms.h"
namespace joystick {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Globalization;
	//using namespace System::Threading;

	/// <summary>
	/// Summary for EndDay
	/// </summary>
	public ref class EndDay : public System::Windows::Forms::Form
	{
	public:
		EndDay(void)
		{
			InitializeComponent();
			end_day_timer->Interval = 15000;
			end_day_timer->Start();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~EndDay()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ display_total_btn;
	protected:
		
	protected:
		double room1Time;
		double room2Time;
		double room3Time;
		double room4Time;
		double room5Time;
		double billiard1Time;
		double billiard2Time;
		double pingpongTime;
		String^ whatsapp_message;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ display_total_lbl;
	private: System::Windows::Forms::Timer^ end_day_timer;
	private: System::Windows::Forms::Label^ Room1_lbl;
	private: System::Windows::Forms::Label^ Room2_lbl;
	private: System::Windows::Forms::Label^ Room3_lbl;
	private: System::Windows::Forms::Label^ Room4_lbl;
	private: System::Windows::Forms::Label^ Room5_lbl;
	private: System::Windows::Forms::Label^ billiard1_lbl;
	private: System::Windows::Forms::Label^ billiard2_lbl;
	private: System::Windows::Forms::Label^ pingpong_lbl;
	private: System::Windows::Forms::Label^ Room1_time_lbl;
	private: System::Windows::Forms::Label^ Room2_time_lbl;
	private: System::Windows::Forms::Label^ Room3_time_lbl;
	private: System::Windows::Forms::Label^ Room4_time_lbl;
	private: System::Windows::Forms::Label^ Room5_time_lbl;
	private: System::Windows::Forms::Label^ Billiard1_time_lbl;
	private: System::Windows::Forms::Label^ Billiard2_time_lbl;
	private: System::Windows::Forms::Label^ pingpong_time_lbl;
	private: System::Windows::Forms::Button^ send_email_btn;
	private: System::Windows::Forms::Button^ button1;
















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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(EndDay::typeid));
			this->display_total_btn = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->display_total_lbl = (gcnew System::Windows::Forms::Label());
			this->end_day_timer = (gcnew System::Windows::Forms::Timer(this->components));
			this->Room1_lbl = (gcnew System::Windows::Forms::Label());
			this->Room2_lbl = (gcnew System::Windows::Forms::Label());
			this->Room3_lbl = (gcnew System::Windows::Forms::Label());
			this->Room4_lbl = (gcnew System::Windows::Forms::Label());
			this->Room5_lbl = (gcnew System::Windows::Forms::Label());
			this->billiard1_lbl = (gcnew System::Windows::Forms::Label());
			this->billiard2_lbl = (gcnew System::Windows::Forms::Label());
			this->pingpong_lbl = (gcnew System::Windows::Forms::Label());
			this->Room1_time_lbl = (gcnew System::Windows::Forms::Label());
			this->Room2_time_lbl = (gcnew System::Windows::Forms::Label());
			this->Room3_time_lbl = (gcnew System::Windows::Forms::Label());
			this->Room4_time_lbl = (gcnew System::Windows::Forms::Label());
			this->Room5_time_lbl = (gcnew System::Windows::Forms::Label());
			this->Billiard1_time_lbl = (gcnew System::Windows::Forms::Label());
			this->Billiard2_time_lbl = (gcnew System::Windows::Forms::Label());
			this->pingpong_time_lbl = (gcnew System::Windows::Forms::Label());
			this->send_email_btn = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// display_total_btn
			// 
			this->display_total_btn->AutoSize = true;
			this->display_total_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->display_total_btn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"display_total_btn.BackgroundImage")));
			this->display_total_btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->display_total_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->display_total_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->display_total_btn->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->display_total_btn->Location = System::Drawing::Point(857, 489);
			this->display_total_btn->Name = L"display_total_btn";
			this->display_total_btn->Size = System::Drawing::Size(208, 100);
			this->display_total_btn->TabIndex = 1;
			this->display_total_btn->Text = L"display_Total";
			this->display_total_btn->UseVisualStyleBackColor = false;
			this->display_total_btn->Click += gcnew System::EventHandler(this, &EndDay::display_total_btn_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label1->Location = System::Drawing::Point(276, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(179, 32);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Today Total: ";
			// 
			// display_total_lbl
			// 
			this->display_total_lbl->AutoSize = true;
			this->display_total_lbl->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->display_total_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->display_total_lbl->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->display_total_lbl->Location = System::Drawing::Point(455, 25);
			this->display_total_lbl->Name = L"display_total_lbl";
			this->display_total_lbl->Size = System::Drawing::Size(30, 32);
			this->display_total_lbl->TabIndex = 3;
			this->display_total_lbl->Text = L"..";
			// 
			// end_day_timer
			// 
			this->end_day_timer->Tick += gcnew System::EventHandler(this, &EndDay::end_day_timer_Tick);
			// 
			// Room1_lbl
			// 
			this->Room1_lbl->AutoSize = true;
			this->Room1_lbl->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Room1_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Room1_lbl->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->Room1_lbl->Location = System::Drawing::Point(2, 129);
			this->Room1_lbl->Name = L"Room1_lbl";
			this->Room1_lbl->Size = System::Drawing::Size(190, 32);
			this->Room1_lbl->TabIndex = 4;
			this->Room1_lbl->Text = L"Room1 Time: ";
			// 
			// Room2_lbl
			// 
			this->Room2_lbl->AutoSize = true;
			this->Room2_lbl->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Room2_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Room2_lbl->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->Room2_lbl->Location = System::Drawing::Point(2, 201);
			this->Room2_lbl->Name = L"Room2_lbl";
			this->Room2_lbl->Size = System::Drawing::Size(190, 32);
			this->Room2_lbl->TabIndex = 5;
			this->Room2_lbl->Text = L"Room2 Time: ";
			// 
			// Room3_lbl
			// 
			this->Room3_lbl->AutoSize = true;
			this->Room3_lbl->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Room3_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Room3_lbl->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->Room3_lbl->Location = System::Drawing::Point(2, 264);
			this->Room3_lbl->Name = L"Room3_lbl";
			this->Room3_lbl->Size = System::Drawing::Size(190, 32);
			this->Room3_lbl->TabIndex = 6;
			this->Room3_lbl->Text = L"Room3 Time: ";
			// 
			// Room4_lbl
			// 
			this->Room4_lbl->AutoSize = true;
			this->Room4_lbl->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Room4_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Room4_lbl->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->Room4_lbl->Location = System::Drawing::Point(2, 325);
			this->Room4_lbl->Name = L"Room4_lbl";
			this->Room4_lbl->Size = System::Drawing::Size(190, 32);
			this->Room4_lbl->TabIndex = 7;
			this->Room4_lbl->Text = L"Room4 Time: ";
			// 
			// Room5_lbl
			// 
			this->Room5_lbl->AutoSize = true;
			this->Room5_lbl->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Room5_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Room5_lbl->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->Room5_lbl->Location = System::Drawing::Point(2, 388);
			this->Room5_lbl->Name = L"Room5_lbl";
			this->Room5_lbl->Size = System::Drawing::Size(190, 32);
			this->Room5_lbl->TabIndex = 8;
			this->Room5_lbl->Text = L"Room5 Time: ";
			// 
			// billiard1_lbl
			// 
			this->billiard1_lbl->AutoSize = true;
			this->billiard1_lbl->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->billiard1_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->billiard1_lbl->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->billiard1_lbl->Location = System::Drawing::Point(2, 455);
			this->billiard1_lbl->Name = L"billiard1_lbl";
			this->billiard1_lbl->Size = System::Drawing::Size(200, 32);
			this->billiard1_lbl->TabIndex = 9;
			this->billiard1_lbl->Text = L"billiard1 Time: ";
			// 
			// billiard2_lbl
			// 
			this->billiard2_lbl->AutoSize = true;
			this->billiard2_lbl->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->billiard2_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->billiard2_lbl->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->billiard2_lbl->Location = System::Drawing::Point(2, 524);
			this->billiard2_lbl->Name = L"billiard2_lbl";
			this->billiard2_lbl->Size = System::Drawing::Size(200, 32);
			this->billiard2_lbl->TabIndex = 10;
			this->billiard2_lbl->Text = L"billiard2 Time: ";
			// 
			// pingpong_lbl
			// 
			this->pingpong_lbl->AutoSize = true;
			this->pingpong_lbl->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->pingpong_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pingpong_lbl->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->pingpong_lbl->Location = System::Drawing::Point(2, 584);
			this->pingpong_lbl->Name = L"pingpong_lbl";
			this->pingpong_lbl->Size = System::Drawing::Size(218, 32);
			this->pingpong_lbl->TabIndex = 11;
			this->pingpong_lbl->Text = L"pingpong Time: ";
			// 
			// Room1_time_lbl
			// 
			this->Room1_time_lbl->AutoSize = true;
			this->Room1_time_lbl->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Room1_time_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Room1_time_lbl->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->Room1_time_lbl->Location = System::Drawing::Point(208, 129);
			this->Room1_time_lbl->Name = L"Room1_time_lbl";
			this->Room1_time_lbl->Size = System::Drawing::Size(30, 32);
			this->Room1_time_lbl->TabIndex = 12;
			this->Room1_time_lbl->Text = L"..";
			// 
			// Room2_time_lbl
			// 
			this->Room2_time_lbl->AutoSize = true;
			this->Room2_time_lbl->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Room2_time_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Room2_time_lbl->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->Room2_time_lbl->Location = System::Drawing::Point(208, 201);
			this->Room2_time_lbl->Name = L"Room2_time_lbl";
			this->Room2_time_lbl->Size = System::Drawing::Size(30, 32);
			this->Room2_time_lbl->TabIndex = 13;
			this->Room2_time_lbl->Text = L"..";
			// 
			// Room3_time_lbl
			// 
			this->Room3_time_lbl->AutoSize = true;
			this->Room3_time_lbl->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Room3_time_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Room3_time_lbl->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->Room3_time_lbl->Location = System::Drawing::Point(208, 264);
			this->Room3_time_lbl->Name = L"Room3_time_lbl";
			this->Room3_time_lbl->Size = System::Drawing::Size(30, 32);
			this->Room3_time_lbl->TabIndex = 14;
			this->Room3_time_lbl->Text = L"..";
			// 
			// Room4_time_lbl
			// 
			this->Room4_time_lbl->AutoSize = true;
			this->Room4_time_lbl->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Room4_time_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Room4_time_lbl->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->Room4_time_lbl->Location = System::Drawing::Point(208, 325);
			this->Room4_time_lbl->Name = L"Room4_time_lbl";
			this->Room4_time_lbl->Size = System::Drawing::Size(30, 32);
			this->Room4_time_lbl->TabIndex = 15;
			this->Room4_time_lbl->Text = L"..";
			// 
			// Room5_time_lbl
			// 
			this->Room5_time_lbl->AutoSize = true;
			this->Room5_time_lbl->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Room5_time_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Room5_time_lbl->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->Room5_time_lbl->Location = System::Drawing::Point(208, 388);
			this->Room5_time_lbl->Name = L"Room5_time_lbl";
			this->Room5_time_lbl->Size = System::Drawing::Size(30, 32);
			this->Room5_time_lbl->TabIndex = 16;
			this->Room5_time_lbl->Text = L"..";
			// 
			// Billiard1_time_lbl
			// 
			this->Billiard1_time_lbl->AutoSize = true;
			this->Billiard1_time_lbl->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Billiard1_time_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Billiard1_time_lbl->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->Billiard1_time_lbl->Location = System::Drawing::Point(208, 455);
			this->Billiard1_time_lbl->Name = L"Billiard1_time_lbl";
			this->Billiard1_time_lbl->Size = System::Drawing::Size(30, 32);
			this->Billiard1_time_lbl->TabIndex = 17;
			this->Billiard1_time_lbl->Text = L"..";
			// 
			// Billiard2_time_lbl
			// 
			this->Billiard2_time_lbl->AutoSize = true;
			this->Billiard2_time_lbl->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Billiard2_time_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Billiard2_time_lbl->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->Billiard2_time_lbl->Location = System::Drawing::Point(208, 524);
			this->Billiard2_time_lbl->Name = L"Billiard2_time_lbl";
			this->Billiard2_time_lbl->Size = System::Drawing::Size(30, 32);
			this->Billiard2_time_lbl->TabIndex = 18;
			this->Billiard2_time_lbl->Text = L"..";
			// 
			// pingpong_time_lbl
			// 
			this->pingpong_time_lbl->AutoSize = true;
			this->pingpong_time_lbl->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->pingpong_time_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->pingpong_time_lbl->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->pingpong_time_lbl->Location = System::Drawing::Point(208, 584);
			this->pingpong_time_lbl->Name = L"pingpong_time_lbl";
			this->pingpong_time_lbl->Size = System::Drawing::Size(30, 32);
			this->pingpong_time_lbl->TabIndex = 19;
			this->pingpong_time_lbl->Text = L"..";
			// 
			// send_email_btn
			// 
			this->send_email_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->send_email_btn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"send_email_btn.BackgroundImage")));
			this->send_email_btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->send_email_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->send_email_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->send_email_btn->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->send_email_btn->Location = System::Drawing::Point(898, 25);
			this->send_email_btn->Name = L"send_email_btn";
			this->send_email_btn->Size = System::Drawing::Size(167, 49);
			this->send_email_btn->TabIndex = 20;
			this->send_email_btn->Text = L"Send Data";
			this->send_email_btn->UseVisualStyleBackColor = false;
			this->send_email_btn->Click += gcnew System::EventHandler(this, &EndDay::send_email_btn_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->button1->Location = System::Drawing::Point(8, 8);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(128, 40);
			this->button1->TabIndex = 21;
			this->button1->Text = L"BACK";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &EndDay::button1_Click);
			// 
			// EndDay
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1095, 648);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->send_email_btn);
			this->Controls->Add(this->pingpong_time_lbl);
			this->Controls->Add(this->Billiard2_time_lbl);
			this->Controls->Add(this->Billiard1_time_lbl);
			this->Controls->Add(this->Room5_time_lbl);
			this->Controls->Add(this->Room4_time_lbl);
			this->Controls->Add(this->Room3_time_lbl);
			this->Controls->Add(this->Room2_time_lbl);
			this->Controls->Add(this->Room1_time_lbl);
			this->Controls->Add(this->pingpong_lbl);
			this->Controls->Add(this->billiard2_lbl);
			this->Controls->Add(this->billiard1_lbl);
			this->Controls->Add(this->Room5_lbl);
			this->Controls->Add(this->Room4_lbl);
			this->Controls->Add(this->Room3_lbl);
			this->Controls->Add(this->Room2_lbl);
			this->Controls->Add(this->Room1_lbl);
			this->Controls->Add(this->display_total_lbl);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->display_total_btn);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"EndDay";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"EndDay";
			this->Load += gcnew System::EventHandler(this, &EndDay::EndDay_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void EndDay_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void display_total_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		
		double total = SharedData::Instance->TotalAllRoomsCost;
		display_total_lbl->Text = total.ToString();
		 room1Time = SharedData::Instance->GetRoomTime("Room1");
		 room2Time = SharedData::Instance->GetRoomTime("Room2");
		 room3Time = SharedData::Instance->GetRoomTime("Room3");
		 room4Time = SharedData::Instance->GetRoomTime("Room4");
		 room5Time = SharedData::Instance->GetRoomTime("Room5");
		 billiard1Time = SharedData::Instance->GetRoomTime("Billiard1");
		billiard2Time = SharedData::Instance->GetRoomTime("Billiard2");
		 pingpongTime = SharedData::Instance->GetRoomTime("Pingpong");

		Room1_time_lbl->Text = room1Time.ToString("N2");
		Room2_time_lbl->Text = room2Time.ToString("N2");
		Room3_time_lbl->Text = room3Time.ToString("N2");
		Room4_time_lbl->Text = room4Time.ToString("N2");
		Room5_time_lbl->Text = room5Time.ToString("N2");
		Billiard1_time_lbl->Text = billiard1Time.ToString("N2");
		Billiard2_time_lbl->Text = billiard2Time.ToString("N2");
		pingpong_time_lbl->Text = pingpongTime.ToString("N2");
		
		String^ currentDate = DateTime::Now.ToString("M/d/yyyy", CultureInfo::InvariantCulture);
		whatsapp_message= "******Joystick Report******\r\n  " +currentDate + "\r\n\r\n\r\n";
		whatsapp_message += "	\r\n<<<Total Profit : $" + total.ToString("N2") + ">>>\r\n\r\n";
		whatsapp_message += "	\r\n<<<Room1 Time : " + room1Time.ToString("N2") + ">>>\r\n\r\n";
		whatsapp_message += "	\r\n<<<Room2 Time : " + room2Time.ToString("N2") + ">>>\r\n\r\n";
	}
private: System::Void end_day_timer_Tick(System::Object^ sender, System::EventArgs^ e) {
	SendKeys::SendWait("{ENTER}");
	end_day_timer->Stop();
}

private: System::Void send_email_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		/////////////////////////////////////
		//Maybe a query for pushing data to the database
		///////////////////////////////////
		
		System::Diagnostics::Process::Start("http://api.whatsapp.com/send?phone=" + "+201112187775" + "&text=" + whatsapp_message);
		Sleep(8000);
		SendKeys::SendWait("^(a)");
		SendKeys::SendWait("{DEL}");
		SendKeys::SendWait("{ENTER}");
		//end_day_timer->Start();
		
	}
	catch (Exception^ ex) {
		MessageBox::Show("Error sending message: " + ex->Message);
	}

}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
}
};
}
