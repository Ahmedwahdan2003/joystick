#pragma once
#include"shareddate.h"
namespace joystick {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Globalization;
	using namespace System::Data;
	using namespace System::Data::SqlClient;
	//using namespace System::Threading;

	/// <summary>
	/// Summary for EndDay
	/// </summary>
	public ref class EndDay : public System::Windows::Forms::Form
	{
	public:
		EndDay()
		{
			InitializeComponent();
			InitializeForm();
			end_day_timer->Interval = 8000;
			



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















	private: System::Windows::Forms::Button^ send_email_btn;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ number_txt;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ item__cost;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ time__cost;


















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
			this->send_email_btn = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->number_txt = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->item__cost = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->time__cost = (gcnew System::Windows::Forms::Label());
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
			this->display_total_btn->Location = System::Drawing::Point(11, 434);
			this->display_total_btn->Margin = System::Windows::Forms::Padding(2);
			this->display_total_btn->Name = L"display_total_btn";
			this->display_total_btn->Size = System::Drawing::Size(164, 81);
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
			this->label1->Location = System::Drawing::Point(32, 184);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(136, 26);
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
			this->display_total_lbl->Location = System::Drawing::Point(177, 184);
			this->display_total_lbl->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->display_total_lbl->Name = L"display_total_lbl";
			this->display_total_lbl->Size = System::Drawing::Size(24, 26);
			this->display_total_lbl->TabIndex = 3;
			this->display_total_lbl->Text = L"..";
			// 
			// end_day_timer
			// 
			this->end_day_timer->Tick += gcnew System::EventHandler(this, &EndDay::end_day_timer_Tick);
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
			this->send_email_btn->Location = System::Drawing::Point(674, 20);
			this->send_email_btn->Margin = System::Windows::Forms::Padding(2);
			this->send_email_btn->Name = L"send_email_btn";
			this->send_email_btn->Size = System::Drawing::Size(125, 40);
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
			this->button1->Location = System::Drawing::Point(6, 6);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(96, 32);
			this->button1->TabIndex = 21;
			this->button1->Text = L"BACK";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &EndDay::button1_Click);
			// 
			// number_txt
			// 
			this->number_txt->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->number_txt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->number_txt->Location = System::Drawing::Point(606, 105);
			this->number_txt->Margin = System::Windows::Forms::Padding(2);
			this->number_txt->Name = L"number_txt";
			this->number_txt->Size = System::Drawing::Size(193, 25);
			this->number_txt->TabIndex = 22;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(602, 79);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(144, 24);
			this->label2->TabIndex = 23;
			this->label2->Text = L"Enter number:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label3->Location = System::Drawing::Point(9, 238);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(169, 26);
			this->label3->TabIndex = 24;
			this->label3->Text = L"Products_total:  ";
			// 
			// item__cost
			// 
			this->item__cost->AutoSize = true;
			this->item__cost->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->item__cost->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->item__cost->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->item__cost->Location = System::Drawing::Point(177, 238);
			this->item__cost->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->item__cost->Name = L"item__cost";
			this->item__cost->Size = System::Drawing::Size(24, 26);
			this->item__cost->TabIndex = 25;
			this->item__cost->Text = L"..";
			this->item__cost->Click += gcnew System::EventHandler(this, &EndDay::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label5->Location = System::Drawing::Point(46, 290);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(125, 26);
			this->label5->TabIndex = 26;
			this->label5->Text = L"time_total : ";
			// 
			// time__cost
			// 
			this->time__cost->AutoSize = true;
			this->time__cost->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->time__cost->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->time__cost->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->time__cost->Location = System::Drawing::Point(177, 290);
			this->time__cost->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->time__cost->Name = L"time__cost";
			this->time__cost->Size = System::Drawing::Size(24, 26);
			this->time__cost->TabIndex = 27;
			this->time__cost->Text = L"..";
			// 
			// EndDay
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(821, 526);
			this->Controls->Add(this->time__cost);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->item__cost);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->number_txt);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->send_email_btn);
			this->Controls->Add(this->display_total_lbl);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->display_total_btn);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"EndDay";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"EndDay";
			this->Load += gcnew System::EventHandler(this, &EndDay::EndDay_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		bool IsDailyTotalInitialized(DateTime currentDate, SqlConnection^ sqlConn) {
			String^ selectQuery = "SELECT 1 FROM DailyTotals WHERE Date = @Date";
			SqlCommand^ selectCommand = gcnew SqlCommand(selectQuery, sqlConn);
			selectCommand->Parameters->AddWithValue("@Date", currentDate);

			Object^ result = selectCommand->ExecuteScalar();

			return (result != nullptr);
		}

		// Function to initialize the daily total for the given date
		void InitializeDailyTotal(DateTime currentDate, SqlConnection^ sqlConn) {
			String^ insertQuery = "INSERT INTO DailyTotals (Date, DailyCost,item_cost,time_cost) VALUES (@Date, @TotalCost,@itemcost,@timecost)";
			SqlCommand^ insertCommand = gcnew SqlCommand(insertQuery, sqlConn);
			insertCommand->Parameters->AddWithValue("@Date", currentDate);
			insertCommand->Parameters->AddWithValue("@TotalCost", 0.0); // Initialize to 0.0 or any other initial value
			insertCommand->Parameters->AddWithValue("@itemcost", 0.0); // Initialize to 0.0 or any other initial value
			insertCommand->Parameters->AddWithValue("@timecost", 0.0); // Initialize to 0.0 or any other initial value
			insertCommand->ExecuteNonQuery();
		}

		void InitializeForm() {
			// Create an instance of SharedData
			

			// Establish a SqlConnection
			String^ connString = "Server=localhost\\SQLEXPRESS;Database=joystick;Trusted_Connection=True;"; // Replace with your actual connection string
			SqlConnection^ sqlConn = gcnew SqlConnection(connString);

			// Open the connection
			sqlConn->Open();

			// Get the current date
			//DateTime currentDate = DateTime::Today;
			
			// Check if there's an entry for the current date in the DailyTotals table
			if (!IsDailyTotalInitialized(SharedData::SharedDateTime.Date, sqlConn)) {
				// Initialize the daily total for the current date
				InitializeDailyTotal(SharedData::SharedDateTime.Date, sqlConn);
			}

			// Use the SharedData instance and perform other tasks

			// Close the connection
			sqlConn->Close();
		}

		// Other form methods and controls



	private: System::Void EndDay_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void display_total_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		
		
		String^ connString = "Server=localhost\\SQLEXPRESS;Database=joystick;Trusted_Connection=True;";

		// Create a SqlConnection object
		SqlConnection^ sqlConn = gcnew SqlConnection(connString);
		double dailyTotal;
		try
		{
			// Open the connection
			sqlConn->Open();

			// Retrieve the total cost for the current date
			String^ selectQuery = "SELECT DailyCost FROM DailyTotals WHERE Date = @Date";
			SqlCommand^ selectCommand = gcnew SqlCommand(selectQuery, sqlConn);
			selectCommand->Parameters->AddWithValue("@Date", SharedData::SharedDateTime.Date);

			Object^ result = selectCommand->ExecuteScalar();

			dailyTotal = 0.0;

			if (result != nullptr)
			{
				dailyTotal = Convert::ToDouble(result);
			}

			// Close the connection
			sqlConn->Close();

			// Now, you have the daily total in the 'dailyTotal' variable
			// You can use it as needed in your code
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Error retrieving total cost from the database: " + ex->Message);
		}

		String^ connnString = "Server=localhost\\SQLEXPRESS;Database=joystick;Trusted_Connection=True;";

		// Create a SqlConnection object
		SqlConnection^ sqlConnn = gcnew SqlConnection(connnString);
		double itemcost;
		try
		{
			// Open the connection
			sqlConnn->Open();

			// Retrieve the total cost for the current date
			String^ selectQuery = "SELECT item_cost FROM DailyTotals WHERE Date = @Date";
			SqlCommand^ selectCommand = gcnew SqlCommand(selectQuery, sqlConnn);
			selectCommand->Parameters->AddWithValue("@Date", SharedData::SharedDateTime.Date);

			Object^ result = selectCommand->ExecuteScalar();

			itemcost = 0.0;

			if (result != nullptr)
			{
				itemcost = Convert::ToDouble(result);
			}

			// Close the connection
			sqlConnn->Close();

			// Now, you have the daily total in the 'dailyTotal' variable
			// You can use it as needed in your code
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Error retrieving total cost from the database: " + ex->Message);
		}

		String^ connnnString = "Server=localhost\\SQLEXPRESS;Database=joystick;Trusted_Connection=True;";

		// Create a SqlConnection object
		SqlConnection^ sqlConnnn = gcnew SqlConnection(connnnString);
		double timecost;
		try
		{
			// Open the connection
			sqlConnnn->Open();

			// Retrieve the total cost for the current date
			String^ selectQuery = "SELECT time_cost FROM DailyTotals WHERE Date = @Date";
			SqlCommand^ selectCommand = gcnew SqlCommand(selectQuery, sqlConnnn);
			selectCommand->Parameters->AddWithValue("@Date", SharedData::SharedDateTime.Date);

			Object^ result = selectCommand->ExecuteScalar();

			timecost = 0.0;

			if (result != nullptr)
			{
				timecost = Convert::ToDouble(result);
			}

			// Close the connection
			sqlConnnn->Close();

			// Now, you have the daily total in the 'dailyTotal' variable
			// You can use it as needed in your code
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Error retrieving total cost from the database: " + ex->Message);
		}


		item__cost->Text = itemcost.ToString();

		display_total_lbl->Text = dailyTotal.ToString();
		
		time__cost->Text = timecost.ToString();
		
		
		
		String^ currentDate = SharedData::SharedDateTime.ToString("M/d/yyyy", CultureInfo::InvariantCulture);
		whatsapp_message = "******Joystick Report******\r\n  " + currentDate + "\r\n\r\n\r\n";
		whatsapp_message += "<<Drink_total: " + itemcost + "\r\n\r\n\r\n";
		whatsapp_message += "<<Rooms_total: " + timecost + "\r\n\r\n\r\n";
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
		String^ number = "+2";
		if (number_txt->Text->Length <= 0)
			MessageBox::Show("please Enter number to Send To");
		else {

			number += number_txt->Text->ToString();

			number_txt->Text = "";
			System::Diagnostics::Process::Start("http://api.whatsapp.com/send?phone=" + number + "&text=" + whatsapp_message);
			end_day_timer->Start();
			

			

		}
	}
		catch (Exception^ ex) {
			MessageBox::Show("Error sending message: " + ex->Message);
		}
	
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
//private: System::Void End_Day_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	//SharedData::AddDay();
	//MessageBox::Show("date = " +SharedData::SharedDateTime);
	//MessageBox::Show("day ended successfully");
	//InitializeForm();
//}
};
}
