#pragma once
#include"used_classes.h"
#include"Rooms.h"
#include"reports.h"
#include"storage.h"
#include"Settings.h"
#include"EndDay.h"
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
            Timer^ timer = gcnew Timer();
            timer->Interval = 1000; 
            timer->Start();
            Rooms_pnl->Visible = false;
            /*rooms->TopLevel = false;
            report->TopLevel = false;
            rooms->Parent = Rooms_pnl;
            report->Parent = Rooms_pnl;
            rooms->Dock = DockStyle::Fill;
            report->Dock = DockStyle::Fill;
            //Rooms_pnl->Controls->Add(rooms);
            //report_pnl->Controls->Add(report);*/
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



           
    private:Rooms^ rooms = gcnew Rooms();
    private:reports^ report = gcnew reports();
    private:storage^ Storage = gcnew storage();
    private:EndDay^ endday = gcnew EndDay();
    private:Settings^ settings = gcnew Settings();
    private: System::Windows::Forms::Button^ Rooms_btn;
    private: System::Windows::Forms::Button^ settings_btn;
    private: System::Windows::Forms::Button^ report_btn;
    private: System::Windows::Forms::Button^ storage_btn;
    private: System::Windows::Forms::Button^ end_day_btn;
    private: System::Windows::Forms::Button^ exit_home_btn;


    private: System::Windows::Forms::Label^ time_lb;
    private: System::Windows::Forms::Panel^ panel1;
    private: System::Windows::Forms::Panel^ panel2;
    private: System::Windows::Forms::Panel^ Rooms_pnl;




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
            this->Rooms_btn = (gcnew System::Windows::Forms::Button());
            this->settings_btn = (gcnew System::Windows::Forms::Button());
            this->report_btn = (gcnew System::Windows::Forms::Button());
            this->storage_btn = (gcnew System::Windows::Forms::Button());
            this->end_day_btn = (gcnew System::Windows::Forms::Button());
            this->exit_home_btn = (gcnew System::Windows::Forms::Button());
            this->time_lb = (gcnew System::Windows::Forms::Label());
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->panel2 = (gcnew System::Windows::Forms::Panel());
            this->Rooms_pnl = (gcnew System::Windows::Forms::Panel());
            this->panel1->SuspendLayout();
            this->panel2->SuspendLayout();
            this->SuspendLayout();
            // 
            // timer1
            // 
            this->timer1->Enabled = true;
            this->timer1->Interval = 1000;
            this->timer1->Tick += gcnew System::EventHandler(this, &Home::timer1_Tick);
            // 
            // Rooms_btn
            // 
            this->Rooms_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->Rooms_btn->Cursor = System::Windows::Forms::Cursors::Hand;
            this->Rooms_btn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->Rooms_btn->FlatAppearance->BorderSize = 0;
            this->Rooms_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->Rooms_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->Rooms_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->Rooms_btn->Location = System::Drawing::Point(12, 157);
            this->Rooms_btn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->Rooms_btn->Name = L"Rooms_btn";
            this->Rooms_btn->Size = System::Drawing::Size(165, 45);
            this->Rooms_btn->TabIndex = 3;
            this->Rooms_btn->UseVisualStyleBackColor = false;
            this->Rooms_btn->Click += gcnew System::EventHandler(this, &Home::Rooms_btn_Click);
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
            this->settings_btn->Location = System::Drawing::Point(12, 216);
            this->settings_btn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->settings_btn->Name = L"settings_btn";
            this->settings_btn->Size = System::Drawing::Size(165, 45);
            this->settings_btn->TabIndex = 4;
            this->settings_btn->UseVisualStyleBackColor = false;
            this->settings_btn->Click += gcnew System::EventHandler(this, &Home::settings_btn_Click);
            // 
            // report_btn
            // 
            this->report_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->report_btn->Cursor = System::Windows::Forms::Cursors::Hand;
            this->report_btn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->report_btn->FlatAppearance->BorderSize = 0;
            this->report_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->report_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->report_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->report_btn->Location = System::Drawing::Point(12, 290);
            this->report_btn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->report_btn->Name = L"report_btn";
            this->report_btn->Size = System::Drawing::Size(165, 45);
            this->report_btn->TabIndex = 5;
            this->report_btn->UseVisualStyleBackColor = false;
            this->report_btn->Click += gcnew System::EventHandler(this, &Home::Reports_btn_Click);
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
            this->storage_btn->Location = System::Drawing::Point(12, 354);
            this->storage_btn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->storage_btn->Name = L"storage_btn";
            this->storage_btn->Size = System::Drawing::Size(165, 45);
            this->storage_btn->TabIndex = 6;
            this->storage_btn->UseVisualStyleBackColor = false;
            this->storage_btn->Click += gcnew System::EventHandler(this, &Home::storage_btn_Click);
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
            this->end_day_btn->Location = System::Drawing::Point(12, 553);
            this->end_day_btn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->end_day_btn->Name = L"end_day_btn";
            this->end_day_btn->Size = System::Drawing::Size(165, 45);
            this->end_day_btn->TabIndex = 7;
            this->end_day_btn->UseVisualStyleBackColor = false;
            this->end_day_btn->Click += gcnew System::EventHandler(this, &Home::end_day_btn_Click);
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
            this->exit_home_btn->Location = System::Drawing::Point(1231, 9);
            this->exit_home_btn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->exit_home_btn->Name = L"exit_home_btn";
            this->exit_home_btn->Size = System::Drawing::Size(40, 45);
            this->exit_home_btn->TabIndex = 8;
            this->exit_home_btn->UseVisualStyleBackColor = false;
            this->exit_home_btn->Click += gcnew System::EventHandler(this, &Home::exit_home_btn_Click);
            // 
            // time_lb
            // 
            this->time_lb->AutoSize = true;
            this->time_lb->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->time_lb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->time_lb->Location = System::Drawing::Point(3, 7);
            this->time_lb->Name = L"time_lb";
            this->time_lb->Size = System::Drawing::Size(90, 25);
            this->time_lb->TabIndex = 9;
            this->time_lb->Text = L"00:00:00";
            // 
            // panel1
            // 
            this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->panel1->Controls->Add(this->exit_home_btn);
            this->panel1->Controls->Add(this->time_lb);
            this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
            this->panel1->Location = System::Drawing::Point(0, 0);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(1298, 72);
            this->panel1->TabIndex = 10;
            this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Home::panel1_Paint);
            // 
            // panel2
            // 
            this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->panel2->Controls->Add(this->Rooms_btn);
            this->panel2->Controls->Add(this->settings_btn);
            this->panel2->Controls->Add(this->end_day_btn);
            this->panel2->Controls->Add(this->report_btn);
            this->panel2->Controls->Add(this->storage_btn);
            this->panel2->Dock = System::Windows::Forms::DockStyle::Left;
            this->panel2->Location = System::Drawing::Point(0, 72);
            this->panel2->Name = L"panel2";
            this->panel2->Size = System::Drawing::Size(203, 648);
            this->panel2->TabIndex = 11;
            // 
            // Rooms_pnl
            // 
            this->Rooms_pnl->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->Rooms_pnl->Dock = System::Windows::Forms::DockStyle::Fill;
            this->Rooms_pnl->Location = System::Drawing::Point(203, 72);
            this->Rooms_pnl->Name = L"Rooms_pnl";
            this->Rooms_pnl->Size = System::Drawing::Size(1095, 648);
            this->Rooms_pnl->TabIndex = 10;
            this->Rooms_pnl->Visible = false;
            // 
            // Home
            // 
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
            this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
            this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->ClientSize = System::Drawing::Size(1298, 720);
            this->Controls->Add(this->Rooms_pnl);
            this->Controls->Add(this->panel2);
            this->Controls->Add(this->panel1);
            this->DoubleBuffered = true;
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
            this->Name = L"Home";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"Home";
            this->Load += gcnew System::EventHandler(this, &Home::Home_Load);
            this->panel1->ResumeLayout(false);
            this->panel1->PerformLayout();
            this->panel2->ResumeLayout(false);
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
private: System::Void Rooms_btn_Click(System::Object^ sender, System::EventArgs^ e) {
    
    //report->Hide();
    Rooms_pnl->Visible = true;
    rooms->TopLevel = false;
    rooms->Dock = DockStyle::Fill;
    Rooms_pnl->Controls->Clear();
    Rooms_pnl->Controls->Add(rooms);
   // rooms->Visible = true;
    rooms->Show();
    
    
}
private: System::Void Reports_btn_Click(System::Object^ sender, System::EventArgs^ e) {
    
    //rooms->Hide();
    Rooms_pnl->Visible = true;
    report->TopLevel = false;
    report->Dock = DockStyle::Fill;
    Rooms_pnl->Controls->Clear();
    Rooms_pnl->Controls->Add(report);
    //report->Visible = true;
    report->Show();
    
   
}
private: System::Void exit_home_btn_Click(System::Object^ sender, System::EventArgs^ e) {
    Application::Exit();
}
private: System::Void report_pnl_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void storage_btn_Click(System::Object^ sender, System::EventArgs^ e) {
    Rooms_pnl->Visible = true;
    Storage->TopLevel = false;
    Storage->Dock = DockStyle::Fill;
    Rooms_pnl->Controls->Clear();
    Rooms_pnl->Controls->Add(Storage);
    //report->Visible = true;
    Storage->Show();

}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void settings_btn_Click(System::Object^ sender, System::EventArgs^ e) {
    Rooms_pnl->Visible = true;
    settings->TopLevel = false;
    settings->Dock = DockStyle::Fill;
    Rooms_pnl->Controls->Clear();
    Rooms_pnl->Controls->Add(settings);
    //report->Visible = true;
    settings->Show();

}
private: System::Void end_day_btn_Click(System::Object^ sender, System::EventArgs^ e) {
    Rooms_pnl->Visible = true;
    endday->TopLevel = false;
    endday->Dock = DockStyle::Fill;
    Rooms_pnl->Controls->Clear();
    Rooms_pnl->Controls->Add(endday);
    //report->Visible = true;
    endday->Show();

}
};
}
