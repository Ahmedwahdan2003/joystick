#pragma once
#include<Windows.h>
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
	public ref class reports : public System::Windows::Forms::Form
	{
	public:
		reports(void)
		{
			InitializeComponent();
			
			stopwatch->Interval = 1000;
			TTimer->Interval = 1000;
			//countdownTime = TimeSpan(0, 1, 0);
			// Initialize the countdown timer
			
			//
			// 
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~reports()
		{
			if (components)
			{
				delete components;
			}
		}


	protected:

	protected:

	protected:

	private: DateTime startTime;
	private: DateTime Endtime;
	private: TimeSpan elapsedTime;
	private: TimeSpan countdownTime;


	private: System::Windows::Forms::Timer^ stopwatch;
	private: System::Windows::Forms::Timer^ TTimer;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ Room1_starttime_btn;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(reports::typeid));
			this->stopwatch = (gcnew System::Windows::Forms::Timer(this->components));
			this->TTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Room1_starttime_btn = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// stopwatch
			// 
			this->stopwatch->Tick += gcnew System::EventHandler(this, &reports::stopwatch_Tick);
			// 
			// TTimer
			// 
			this->TTimer->Tick += gcnew System::EventHandler(this, &reports::Timer_Tick);
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::DimGray;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(-1, 1);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(798, 644);
			this->dataGridView1->TabIndex = 0;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(803, 43);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(237, 22);
			this->dateTimePicker1->TabIndex = 1;
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Location = System::Drawing::Point(1087, 43);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(237, 22);
			this->dateTimePicker2->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(803, 6);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(98, 22);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Start date";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(1099, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(90, 22);
			this->label2->TabIndex = 4;
			this->label2->Text = L"End date";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
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
			this->Room1_starttime_btn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Room1_starttime_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Room1_starttime_btn->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Room1_starttime_btn->Location = System::Drawing::Point(975, 100);
			this->Room1_starttime_btn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Room1_starttime_btn->Name = L"Room1_starttime_btn";
			this->Room1_starttime_btn->Size = System::Drawing::Size(163, 60);
			this->Room1_starttime_btn->TabIndex = 6;
			this->Room1_starttime_btn->Text = L"View Data";
			this->Room1_starttime_btn->UseVisualStyleBackColor = false;
			// 
			// reports
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1323, 648);
			this->Controls->Add(this->Room1_starttime_btn);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dateTimePicker2);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->dataGridView1);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"reports";
			this->Text = L"Room1";
			this->Load += gcnew System::EventHandler(this, &reports::Room2_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Room2_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void stopwatch_Tick(System::Object^ sender, System::EventArgs^ e) {
		elapsedTime = DateTime::Now - startTime;
		
		label1->Text = elapsedTime.ToString("hh\\:mm\\:ss");
	}

	private: System::Void Timer_Tick(System::Object^ sender, System::EventArgs^ e) {
		countdownTime = countdownTime.Subtract(TimeSpan(0, 0, 1));
		label2->Text = countdownTime.ToString("hh\\:mm\\:ss");
		
	

	// Check if the countdown is complete
	if (countdownTime.TotalSeconds <= 0)
	{
		TTimer->Stop();
		Endtime = DateTime::Now; // Store the end time
		for (int i = 0; i < 3; i++) { Beep(500, 1800); }
		MessageBox::Show("Countdown is complete!", "Countdown Notification");
	}
}



private: System::Void stop_btnn(System::Object^ sender, System::EventArgs^ e) {
	
	if (!stopwatch->Enabled)
	{
		startTime = DateTime::Now;
		stopwatch->Start();
	}
	else
	{
		stopwatch->Stop();
		Endtime = DateTime::Now; // Store the end time
	}
}
private: System::Void timer_btnn(System::Object^ sender, System::EventArgs^ e) {
	countdownTime = TimeSpan(0, 0, 10);

	// Start the countdown timer
	TTimer->Start();
}
};
}
