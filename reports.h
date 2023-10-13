#pragma once
#include<Windows.h>
namespace joystick {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data;
	using namespace System::Data::SqlClient;
	using namespace System::Collections::Generic;

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
	private: System::Windows::Forms::DateTimePicker^ start_date;
	private: System::Windows::Forms::DateTimePicker^ end_date;



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ view_data_btn;
	private: System::Windows::Forms::Button^ back_btn;


	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ time__total;
	private: System::Windows::Forms::Label^ drinks__total;


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
			this->start_date = (gcnew System::Windows::Forms::DateTimePicker());
			this->end_date = (gcnew System::Windows::Forms::DateTimePicker());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->view_data_btn = (gcnew System::Windows::Forms::Button());
			this->back_btn = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->time__total = (gcnew System::Windows::Forms::Label());
			this->drinks__total = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// start_date
			// 
			this->start_date->Location = System::Drawing::Point(122, 118);
			this->start_date->Name = L"start_date";
			this->start_date->Size = System::Drawing::Size(237, 22);
			this->start_date->TabIndex = 1;
			// 
			// end_date
			// 
			this->end_date->Location = System::Drawing::Point(672, 118);
			this->end_date->Name = L"end_date";
			this->end_date->Size = System::Drawing::Size(197, 22);
			this->end_date->TabIndex = 2;
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
			this->label1->Location = System::Drawing::Point(175, 73);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(81, 18);
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
			this->label2->Location = System::Drawing::Point(723, 73);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(74, 18);
			this->label2->TabIndex = 4;
			this->label2->Text = L"End date";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// view_data_btn
			// 
			this->view_data_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->view_data_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->view_data_btn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"view_data_btn.BackgroundImage")));
			this->view_data_btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->view_data_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->view_data_btn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->view_data_btn->FlatAppearance->BorderSize = 0;
			this->view_data_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->view_data_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->view_data_btn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->view_data_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->view_data_btn->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->view_data_btn->Location = System::Drawing::Point(1034, 598);
			this->view_data_btn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->view_data_btn->Name = L"view_data_btn";
			this->view_data_btn->Size = System::Drawing::Size(146, 93);
			this->view_data_btn->TabIndex = 6;
			this->view_data_btn->Text = L"View Data";
			this->view_data_btn->UseVisualStyleBackColor = false;
			this->view_data_btn->Click += gcnew System::EventHandler(this, &reports::view_data_btn_click);
			// 
			// back_btn
			// 
			this->back_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->back_btn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"back_btn.BackgroundImage")));
			this->back_btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->back_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->back_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->back_btn->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->back_btn->Location = System::Drawing::Point(1013, 12);
			this->back_btn->Name = L"back_btn";
			this->back_btn->Size = System::Drawing::Size(167, 49);
			this->back_btn->TabIndex = 21;
			this->back_btn->Text = L"BACK";
			this->back_btn->UseVisualStyleBackColor = false;
			this->back_btn->Click += gcnew System::EventHandler(this, &reports::send_email_btn_Click);
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->BackColor = System::Drawing::Color::Transparent;
			this->flowLayoutPanel1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->flowLayoutPanel1->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->flowLayoutPanel1->Location = System::Drawing::Point(12, 212);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(597, 496);
			this->flowLayoutPanel1->TabIndex = 22;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(642, 269);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(161, 29);
			this->label3->TabIndex = 23;
			this->label3->Text = L"Time_Total: ";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Location = System::Drawing::Point(642, 381);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(175, 29);
			this->label4->TabIndex = 24;
			this->label4->Text = L"Drinks_Total: ";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// time__total
			// 
			this->time__total->AutoSize = true;
			this->time__total->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->time__total->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->time__total->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->time__total->Location = System::Drawing::Point(870, 269);
			this->time__total->Name = L"time__total";
			this->time__total->Size = System::Drawing::Size(30, 31);
			this->time__total->TabIndex = 26;
			this->time__total->Text = L"..";
			this->time__total->Click += gcnew System::EventHandler(this, &reports::item__cost_Click);
			// 
			// drinks__total
			// 
			this->drinks__total->AutoSize = true;
			this->drinks__total->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->drinks__total->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->drinks__total->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->drinks__total->Location = System::Drawing::Point(870, 379);
			this->drinks__total->Name = L"drinks__total";
			this->drinks__total->Size = System::Drawing::Size(30, 31);
			this->drinks__total->TabIndex = 27;
			this->drinks__total->Text = L"..";
			// 
			// reports
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1244, 720);
			this->Controls->Add(this->drinks__total);
			this->Controls->Add(this->time__total);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Controls->Add(this->back_btn);
			this->Controls->Add(this->view_data_btn);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->end_date);
			this->Controls->Add(this->start_date);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"reports";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Room1";
			this->Load += gcnew System::EventHandler(this, &reports::reports_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void send_email_btn_Click(System::Object^ sender, System::EventArgs^ e) {

	this->Close();
}
private: System::Void view_data_btn_click(System::Object^ sender, System::EventArgs^ e) {


	DateTime startDate = start_date->Value;
	DateTime endDate = end_date->Value;

	// Connection string to your SQL Server database
	String^ connectionString = "Server=localhost\\SQLEXPRESS;Database=joystick;Trusted_Connection=True;";

	// Create a SqlConnection
	SqlConnection^ connection = gcnew SqlConnection(connectionString);

	try {
		connection->Open();

		// SQL query to retrieve item names and total quantity sold within the date range
		String^ query = "SELECT item_name, SUM(quantity) AS total_quantity "
			"FROM orders "
			"WHERE date >= @startDate AND date <= @endDate "
			"GROUP BY item_name";

		// Create a SqlCommand
		SqlCommand^ command = gcnew SqlCommand(query, connection);

		// Add parameters for start date and end date
		command->Parameters->Add(gcnew SqlParameter("@startDate", SqlDbType::Date));
		command->Parameters["@startDate"]->Value = startDate.Date;
		command->Parameters->Add(gcnew SqlParameter("@endDate", SqlDbType::Date));
		command->Parameters["@endDate"]->Value = endDate.Date;

		// Create a SqlDataReader to retrieve data
		SqlDataReader^ reader = command->ExecuteReader();

		// Define a dictionary to store item quantities
		Dictionary<String^, int>^ itemQuantityDict = gcnew Dictionary<String^, int>();

		// Read data from the SqlDataReader and populate the dictionary
		while (reader->Read()) {
			String^ itemName = reader->GetString(0);
			int totalQuantity = reader->GetInt32(1);
			itemQuantityDict[itemName] = totalQuantity;
		}

		reader->Close();

		// Clear existing controls in the LayoutPanel
		flowLayoutPanel1->Controls->Clear();

		// Display the results in the LayoutPanel
		for each (KeyValuePair<String^, int> item in itemQuantityDict) {
			Label^ label = gcnew Label();
			label->Text = item.Key + ": " + item.Value.ToString(); // Display format: ItemName: Quantity
			label->AutoSize = true;

			flowLayoutPanel1->Controls->Add(label);
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show("Error retrieving data from the database: " + ex->Message);
	}
	finally {
		connection->Close();
	}


	SqlConnection^ connectionn = gcnew SqlConnection(connectionString);

	try {
		connectionn->Open();

		// SQL query to calculate the sums of item_cost and time_cost for the specified date range
		String^ query = "SELECT SUM(item_cost) AS total_item_cost, SUM(time_cost) AS total_time_cost "
			"FROM DailyTotals "
			"WHERE Date >= @startDate AND Date <= @endDate";

		// Create a SqlCommand
		SqlCommand^ command = gcnew SqlCommand(query, connectionn);

		// Add parameters for start date and end date
		command->Parameters->Add(gcnew SqlParameter("@startDate", SqlDbType::Date));
		command->Parameters["@startDate"]->Value = startDate.Date;
		command->Parameters->Add(gcnew SqlParameter("@endDate", SqlDbType::Date));
		command->Parameters["@endDate"]->Value = endDate.Date;

		// Create a SqlDataReader to retrieve data
		SqlDataReader^ reader = command->ExecuteReader();

		// Process and display the results
		if (reader->Read()) {
			double totalItemCost = Convert::ToDouble(reader["total_item_cost"]);
			double totalTimeCost = Convert::ToDouble(reader["total_time_cost"]);

			time__total->Text = totalTimeCost.ToString();
			drinks__total->Text = totalItemCost.ToString();
		}

		reader->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show("Error retrieving data from the database: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	finally {
		connectionn->Close();
	}



}
private: System::Void reports_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void item__cost_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
