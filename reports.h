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
	private: System::Windows::Forms::Button^ stop_btn;
	private: System::Windows::Forms::Button^ timer_btn;
	protected:

	protected:

	protected:

	private: DateTime startTime;
	private: DateTime Endtime;
	private: TimeSpan elapsedTime;
	private: TimeSpan countdownTime;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Timer^ stopwatch;
	private: System::Windows::Forms::Timer^ TTimer;
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
			this->stop_btn = (gcnew System::Windows::Forms::Button());
			this->timer_btn = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->stopwatch = (gcnew System::Windows::Forms::Timer(this->components));
			this->TTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// stop_btn
			// 
			this->stop_btn->Location = System::Drawing::Point(609, 317);
			this->stop_btn->Name = L"stop_btn";
			this->stop_btn->Size = System::Drawing::Size(115, 93);
			this->stop_btn->TabIndex = 0;
			this->stop_btn->Text = L"stopwatch";
			this->stop_btn->UseVisualStyleBackColor = true;
			this->stop_btn->Click += gcnew System::EventHandler(this, &reports::stop_btnn);
			// 
			// timer_btn
			// 
			this->timer_btn->Location = System::Drawing::Point(304, 317);
			this->timer_btn->Name = L"timer_btn";
			this->timer_btn->Size = System::Drawing::Size(117, 93);
			this->timer_btn->TabIndex = 1;
			this->timer_btn->Text = L"timer";
			this->timer_btn->UseVisualStyleBackColor = true;
			this->timer_btn->Click += gcnew System::EventHandler(this, &reports::timer_btnn);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(603, 257);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(126, 32);
			this->label1->TabIndex = 2;
			this->label1->Text = L"00:00:00";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(298, 253);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(133, 36);
			this->label2->TabIndex = 3;
			this->label2->Text = L"00:00:00";
			// 
			// stopwatch
			// 
			this->stopwatch->Tick += gcnew System::EventHandler(this, &reports::stopwatch_Tick);
			// 
			// TTimer
			// 
			this->TTimer->Tick += gcnew System::EventHandler(this, &reports::Timer_Tick);
			// 
			// reports
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1089, 642);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->timer_btn);
			this->Controls->Add(this->stop_btn);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"reports";
			this->Text = L"Room1";
			this->Load += gcnew System::EventHandler(this, &reports::Room2_Load);
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
