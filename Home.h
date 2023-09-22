#pragma once
#include"used_classes.h"
#include"Rooms.h"
#include"reports.h"
#include"storage.h"
#include"Settings.h"
#include"EndDay.h"
#include"password.h"
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
           
            
            timer1->Interval = 1000; 
            timer1->Start();
           
           
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

    protected:


    private: System::Windows::Forms::Timer^ timer1;
    
    public:bool settings_locked;
    public:bool storage_locked;
    public:bool report_locked;
    public:bool endday_locked;

    public: String^ passwords ="12345";
    private: bool setting_pass_confirmed=false;
    private:password^ pass = gcnew password();
    private:Rooms^ rooms = gcnew Rooms();
    private:reports^ report = gcnew reports();
    private:storage^ Storage = gcnew storage();
    private:EndDay^ endday = gcnew EndDay();
    private:Settings^ settings = gcnew Settings();
    private: System::Windows::Forms::Button^ exit_home_btn;
    private: System::Windows::Forms::Label^ time_lb;
    private: System::Windows::Forms::Label^ room2_status;
    private: System::Windows::Forms::Label^ room3_status;
    private: System::Windows::Forms::Label^ room4_status;
    private: System::Windows::Forms::Label^ room5_status;
    private: System::Windows::Forms::Label^ room1_status;
    private: System::Windows::Forms::Button^ rooms_btn;

    private: System::Windows::Forms::Button^ settings_btn;
    private: System::Windows::Forms::Button^ reports_btn;
    private: System::Windows::Forms::Button^ storage_btn;
    private: System::Windows::Forms::Button^ endday_btn;



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
            this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
            this->exit_home_btn = (gcnew System::Windows::Forms::Button());
            this->time_lb = (gcnew System::Windows::Forms::Label());
            this->room2_status = (gcnew System::Windows::Forms::Label());
            this->room3_status = (gcnew System::Windows::Forms::Label());
            this->room4_status = (gcnew System::Windows::Forms::Label());
            this->room5_status = (gcnew System::Windows::Forms::Label());
            this->room1_status = (gcnew System::Windows::Forms::Label());
            this->rooms_btn = (gcnew System::Windows::Forms::Button());
            this->settings_btn = (gcnew System::Windows::Forms::Button());
            this->reports_btn = (gcnew System::Windows::Forms::Button());
            this->storage_btn = (gcnew System::Windows::Forms::Button());
            this->endday_btn = (gcnew System::Windows::Forms::Button());
            this->SuspendLayout();
            // 
            // timer1
            // 
            this->timer1->Enabled = true;
            this->timer1->Interval = 1000;
            this->timer1->Tick += gcnew System::EventHandler(this, &Home::timer1_Tick);
            // 
            // exit_home_btn
            // 
            this->exit_home_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->exit_home_btn->Cursor = System::Windows::Forms::Cursors::Hand;
            this->exit_home_btn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->exit_home_btn->FlatAppearance->BorderSize = 0;
            this->exit_home_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->exit_home_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->exit_home_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->exit_home_btn->Location = System::Drawing::Point(1209, 12);
            this->exit_home_btn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->exit_home_btn->Name = L"exit_home_btn";
            this->exit_home_btn->Size = System::Drawing::Size(59, 45);
            this->exit_home_btn->TabIndex = 8;
            this->exit_home_btn->UseVisualStyleBackColor = false;
            this->exit_home_btn->Click += gcnew System::EventHandler(this, &Home::exit_home_btn_Click);
            // 
            // time_lb
            // 
            this->time_lb->AutoSize = true;
            this->time_lb->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->time_lb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
            this->time_lb->ForeColor = System::Drawing::SystemColors::Control;
            this->time_lb->Location = System::Drawing::Point(6, 13);
            this->time_lb->Name = L"time_lb";
            this->time_lb->Size = System::Drawing::Size(133, 36);
            this->time_lb->TabIndex = 9;
            this->time_lb->Text = L"00:00:00";
            // 
            // room2_status
            // 
            this->room2_status->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->room2_status->AutoSize = true;
            this->room2_status->BackColor = System::Drawing::Color::Transparent;
            this->room2_status->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->room2_status->ForeColor = System::Drawing::Color::Transparent;
            this->room2_status->Location = System::Drawing::Point(371, 13);
            this->room2_status->Name = L"room2_status";
            this->room2_status->Size = System::Drawing::Size(166, 46);
            this->room2_status->TabIndex = 15;
            this->room2_status->Text = L"ROOM2";
            // 
            // room3_status
            // 
            this->room3_status->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->room3_status->AutoSize = true;
            this->room3_status->BackColor = System::Drawing::Color::Transparent;
            this->room3_status->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->room3_status->ForeColor = System::Drawing::Color::Transparent;
            this->room3_status->Location = System::Drawing::Point(559, 13);
            this->room3_status->Name = L"room3_status";
            this->room3_status->Size = System::Drawing::Size(166, 46);
            this->room3_status->TabIndex = 16;
            this->room3_status->Text = L"ROOM3";
            // 
            // room4_status
            // 
            this->room4_status->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->room4_status->AutoSize = true;
            this->room4_status->BackColor = System::Drawing::Color::Transparent;
            this->room4_status->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->room4_status->ForeColor = System::Drawing::Color::Transparent;
            this->room4_status->Location = System::Drawing::Point(744, 13);
            this->room4_status->Name = L"room4_status";
            this->room4_status->Size = System::Drawing::Size(166, 46);
            this->room4_status->TabIndex = 17;
            this->room4_status->Text = L"ROOM4";
            // 
            // room5_status
            // 
            this->room5_status->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->room5_status->AutoSize = true;
            this->room5_status->BackColor = System::Drawing::Color::Transparent;
            this->room5_status->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->room5_status->ForeColor = System::Drawing::Color::Transparent;
            this->room5_status->Location = System::Drawing::Point(932, 13);
            this->room5_status->Name = L"room5_status";
            this->room5_status->Size = System::Drawing::Size(166, 46);
            this->room5_status->TabIndex = 18;
            this->room5_status->Text = L"ROOM5";
            // 
            // room1_status
            // 
            this->room1_status->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->room1_status->AutoSize = true;
            this->room1_status->BackColor = System::Drawing::Color::Transparent;
            this->room1_status->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->room1_status->ForeColor = System::Drawing::Color::Transparent;
            this->room1_status->Location = System::Drawing::Point(186, 13);
            this->room1_status->Name = L"room1_status";
            this->room1_status->Size = System::Drawing::Size(166, 46);
            this->room1_status->TabIndex = 10;
            this->room1_status->Text = L"ROOM1";
            // 
            // rooms_btn
            // 
            this->rooms_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->rooms_btn->Cursor = System::Windows::Forms::Cursors::Hand;
            this->rooms_btn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->rooms_btn->FlatAppearance->BorderSize = 0;
            this->rooms_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->rooms_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->rooms_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->rooms_btn->Location = System::Drawing::Point(12, 224);
            this->rooms_btn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->rooms_btn->Name = L"rooms_btn";
            this->rooms_btn->Size = System::Drawing::Size(166, 45);
            this->rooms_btn->TabIndex = 11;
            this->rooms_btn->UseVisualStyleBackColor = false;
            this->rooms_btn->Click += gcnew System::EventHandler(this, &Home::rooms_btn_Click);
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
            this->settings_btn->Location = System::Drawing::Point(12, 295);
            this->settings_btn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->settings_btn->Name = L"settings_btn";
            this->settings_btn->Size = System::Drawing::Size(166, 45);
            this->settings_btn->TabIndex = 12;
            this->settings_btn->UseVisualStyleBackColor = false;
            this->settings_btn->Click += gcnew System::EventHandler(this, &Home::settings_btn_Click);
            // 
            // reports_btn
            // 
            this->reports_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->reports_btn->Cursor = System::Windows::Forms::Cursors::Hand;
            this->reports_btn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->reports_btn->FlatAppearance->BorderSize = 0;
            this->reports_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->reports_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->reports_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->reports_btn->Location = System::Drawing::Point(12, 359);
            this->reports_btn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->reports_btn->Name = L"reports_btn";
            this->reports_btn->Size = System::Drawing::Size(166, 45);
            this->reports_btn->TabIndex = 13;
            this->reports_btn->UseVisualStyleBackColor = false;
            this->reports_btn->Click += gcnew System::EventHandler(this, &Home::reports_btn_Click);
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
            this->storage_btn->Location = System::Drawing::Point(12, 427);
            this->storage_btn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->storage_btn->Name = L"storage_btn";
            this->storage_btn->Size = System::Drawing::Size(166, 45);
            this->storage_btn->TabIndex = 14;
            this->storage_btn->UseVisualStyleBackColor = false;
            this->storage_btn->Click += gcnew System::EventHandler(this, &Home::storage_btn_Click);
            // 
            // endday_btn
            // 
            this->endday_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->endday_btn->Cursor = System::Windows::Forms::Cursors::Hand;
            this->endday_btn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->endday_btn->FlatAppearance->BorderSize = 0;
            this->endday_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->endday_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->endday_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->endday_btn->Location = System::Drawing::Point(12, 624);
            this->endday_btn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->endday_btn->Name = L"endday_btn";
            this->endday_btn->Size = System::Drawing::Size(166, 45);
            this->endday_btn->TabIndex = 15;
            this->endday_btn->UseVisualStyleBackColor = false;
            this->endday_btn->Click += gcnew System::EventHandler(this, &Home::endday_btn_Click);
            // 
            // Home
            // 
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
            this->AutoSize = true;
            this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
            this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
            this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->ClientSize = System::Drawing::Size(1280, 720);
            this->Controls->Add(this->exit_home_btn);
            this->Controls->Add(this->room5_status);
            this->Controls->Add(this->room1_status);
            this->Controls->Add(this->room4_status);
            this->Controls->Add(this->endday_btn);
            this->Controls->Add(this->room3_status);
            this->Controls->Add(this->storage_btn);
            this->Controls->Add(this->time_lb);
            this->Controls->Add(this->room2_status);
            this->Controls->Add(this->reports_btn);
            this->Controls->Add(this->settings_btn);
            this->Controls->Add(this->rooms_btn);
            this->DoubleBuffered = true;
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
            this->Name = L"Home";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"Home";
            this->Load += gcnew System::EventHandler(this, &Home::Home_Load);
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion

  
	private: System::Void Home_Load(System::Object^ sender, System::EventArgs^ e) {
		
	}

private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {

    if (rooms != nullptr) {
        if (rooms->room1_available == true) {
            room1_status->ForeColor = System::Drawing::Color::Green;
        }
        else {
            room1_status->ForeColor = System::Drawing::Color::Red;
        }
        if (rooms->room2_available == true) {
            room2_status->ForeColor = System::Drawing::Color::Green;
        }
        else {
            room2_status->ForeColor = System::Drawing::Color::Red;
        }
        if (rooms->room3_available == true) {
            room3_status->ForeColor = System::Drawing::Color::Green;
        }
        else {
            room3_status->ForeColor = System::Drawing::Color::Red;
        }
        if (rooms->room4_available == true) {
            room4_status->ForeColor = System::Drawing::Color::Green;
        }
        else {
            room4_status->ForeColor = System::Drawing::Color::Red;
        }
        if (rooms->room5_available == true) {
            room5_status->ForeColor = System::Drawing::Color::Green;
        }
        else {
            room5_status->ForeColor = System::Drawing::Color::Red;
        }
    }
    DateTime currentTime = DateTime::Now;


    time_lb->Text = currentTime.ToString("hh:mm:ss tt");
    
}

private: System::Void exit_home_btn_Click(System::Object^ sender, System::EventArgs^ e) {
    Application::Exit();
}
private: System::Void report_pnl_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}













private: System::Void rooms_btn_Click(System::Object^ sender, System::EventArgs^ e) {

    rooms->ShowDialog();


}
private: System::Void settings_btn_Click(System::Object^ sender, System::EventArgs^ e) {
    System::Windows::Forms::DialogResult result = pass->ShowDialog();
    if (result == System::Windows::Forms::DialogResult::OK)
    {
        settings->ShowDialog();

    }

}
private: System::Void reports_btn_Click(System::Object^ sender, System::EventArgs^ e) {

    System::Windows::Forms::DialogResult result = pass->ShowDialog();
    if (result == System::Windows::Forms::DialogResult::OK)
    {
       report->ShowDialog();

    }
}
private: System::Void storage_btn_Click(System::Object^ sender, System::EventArgs^ e) {
    System::Windows::Forms::DialogResult result = pass->ShowDialog();
    if (result == System::Windows::Forms::DialogResult::OK)
    {
        Storage->ShowDialog();

    }
}
private: System::Void endday_btn_Click(System::Object^ sender, System::EventArgs^ e) {


    endday->ShowDialog();

}
       
};
}
