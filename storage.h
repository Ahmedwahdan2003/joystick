#pragma once




namespace joystick {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;




	/// <summary>
	/// Summary for storage
	/// </summary>
	public ref class storage : public System::Windows::Forms::Form
	{
	public:
		storage(void)
		{

			InitializeComponent();
			dataGridView1->ColumnHeadersVisible = false;

			dataGridView1->Columns[2]->Width = 100;
		
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~storage()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ save_btn;

	private:String^ connString = "Data Source=sql.bsite.net\\MSSQL2016;Persist Security Info=True;User ID=ahmedsameh_;Password=Admin1234";
	private:
		SqlConnection^ dbConnection;

	private: System::Windows::Forms::Button^ rooms_back_btn;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;











		   DataSet^ dataSet;
	protected:
		

			// Refresh the DataGridView when the form is activated
		

		void RefreshDataGridView()
		{
			// Rebind the DataGridView to update with the latest data
			DataTable^ dataTable = gcnew DataTable();
			SqlDataAdapter^ adapter = gcnew SqlDataAdapter("SELECT name, quantity, price FROM items", connString);
			SqlCommandBuilder^ commandBuilder = gcnew SqlCommandBuilder(adapter);

			adapter->Fill(dataTable);
			dataGridView1->DataSource = dataTable;
		}


	protected:

	protected:



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(storage::typeid));
			this->save_btn = (gcnew System::Windows::Forms::Button());
			this->rooms_back_btn = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// save_btn
			// 
			this->save_btn->AutoSize = true;
			this->save_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->save_btn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"save_btn.BackgroundImage")));
			this->save_btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->save_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->save_btn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->save_btn->FlatAppearance->BorderSize = 0;
			this->save_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->save_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->save_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->save_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->save_btn->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->save_btn->Location = System::Drawing::Point(826, 513);
			this->save_btn->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->save_btn->Name = L"save_btn";
			this->save_btn->Size = System::Drawing::Size(124, 40);
			this->save_btn->TabIndex = 2;
			this->save_btn->Text = L"SAVE";
			this->save_btn->UseVisualStyleBackColor = false;
			this->save_btn->Click += gcnew System::EventHandler(this, &storage::save_btn_Click);
			// 
			// rooms_back_btn
			// 
			this->rooms_back_btn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"rooms_back_btn.BackgroundImage")));
			this->rooms_back_btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->rooms_back_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->rooms_back_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rooms_back_btn->ForeColor = System::Drawing::Color::White;
			this->rooms_back_btn->Location = System::Drawing::Point(826, 10);
			this->rooms_back_btn->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->rooms_back_btn->Name = L"rooms_back_btn";
			this->rooms_back_btn->Size = System::Drawing::Size(124, 45);
			this->rooms_back_btn->TabIndex = 4;
			this->rooms_back_btn->Text = L"BACK";
			this->rooms_back_btn->UseVisualStyleBackColor = true;
			this->rooms_back_btn->Click += gcnew System::EventHandler(this, &storage::rooms_back_btn_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::MenuBar;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(25, 70);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(783, 483);
			this->dataGridView1->TabIndex = 5;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(12, 10);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(809, 543);
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			// 
			// storage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(959, 585);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->rooms_back_btn);
			this->Controls->Add(this->save_btn);
			this->Controls->Add(this->pictureBox1);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"storage";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"storage";
			this->TransparencyKey = System::Drawing::Color::Aqua;
			this->Load += gcnew System::EventHandler(this, &storage::storage_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void storage_Load(System::Object^ sender, System::EventArgs^ e) {
		dbConnection = gcnew SqlConnection(connString);
		dbConnection->Open();
		DataTable^ dataTable = gcnew DataTable();
		SqlDataAdapter^ adapter = gcnew SqlDataAdapter("SELECT name, quantity, price FROM items", connString);
		SqlCommandBuilder^ commandBuilder = gcnew SqlCommandBuilder(adapter);

		adapter->Fill(dataTable);
		dataGridView1->DataSource = dataTable;

		// Enable adding and deleting rows
		dataGridView1->AllowUserToAddRows = true;
		dataGridView1->AllowUserToDeleteRows = true;
	}
	private: System::Void Rooms_pnl_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	


	private: System::Void save_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			// Get the original SqlDataAdapter used to fill the DataTable
			SqlDataAdapter^ adapter = gcnew SqlDataAdapter("SELECT name, quantity, price FROM items", connString);

			// Use the original SqlDataAdapter to update changes in the DataTable
			SqlCommandBuilder^ commandBuilder = gcnew SqlCommandBuilder(adapter);
			adapter->Update(dynamic_cast<DataTable^>(dataGridView1->DataSource));

			MessageBox::Show("Changes saved successfully.");
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Error: " + ex->Message);
		}
	}
	
	

private: System::Void rooms_back_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	this ->Close();
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {



}
};
}
