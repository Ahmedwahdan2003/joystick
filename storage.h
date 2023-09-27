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
			dataTable = gcnew DataTable();
			adapter = gcnew SqlDataAdapter("SELECT name, quantity, price FROM items", connString);
			dbConnection = gcnew SqlConnection(connString);
			dbConnection->Open();

			SqlCommandBuilder^ commandBuilder = gcnew SqlCommandBuilder(adapter);
			BindingSource^ bindingSource = gcnew BindingSource();

			dataGridView1->ColumnHeadersVisible = false;
			adapter->Fill(dataTable);
			bindingSource->DataSource = dataTable;
			dataGridView1->DataSource = bindingSource;
			dataGridView1->Columns["name"]->Width = 364;
			dataGridView1->Columns["quantity"]->Width = 194;
			dataGridView1->Columns["price"]->Width = 180;

			dataGridView1->AllowUserToAddRows = true;
			dataGridView1->AllowUserToDeleteRows = false;
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
	private:DataTable^ dataTable;
		   SqlDataAdapter^ adapter;
	private: System::Windows::Forms::Button^ save_btn;

	private:String^ connString = "Data Source=sql.bsite.net\\MSSQL2016;Persist Security Info=True;User ID=ahmedsameh_;Password=Admin1234";
	private:
		SqlConnection^ dbConnection;

	private: System::Windows::Forms::Button^ rooms_back_btn;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private: System::Windows::Forms::Label^ room1_status;
	private: System::Windows::Forms::TextBox^ del_txt;

	private: System::Windows::Forms::Button^ del_btn;











		   DataSet^ dataSet;
	protected:


		// Refresh the DataGridView when the form is activated


		void RefreshDataGridView()
		{
			try {
				// Clear the existing data in the DataTable
				dataTable->Clear();

				// Fill the DataTable with fresh data from the database
				adapter->Fill(dataTable);

				// Refresh the DataGridView by rebinding it to the updated data
				dataGridView1->DataSource = dataTable;

				
			}
			catch (Exception^ ex) {
				MessageBox::Show("Error refreshing data: " + ex->Message);
			}
		}


	protected:

	protected:



	protected:



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

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
			this->room1_status = (gcnew System::Windows::Forms::Label());
			this->del_txt = (gcnew System::Windows::Forms::TextBox());
			this->del_btn = (gcnew System::Windows::Forms::Button());
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
			this->save_btn->Location = System::Drawing::Point(1041, 597);
			this->save_btn->Margin = System::Windows::Forms::Padding(2);
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
			this->rooms_back_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rooms_back_btn->ForeColor = System::Drawing::Color::White;
			this->rooms_back_btn->Location = System::Drawing::Point(1052, 11);
			this->rooms_back_btn->Margin = System::Windows::Forms::Padding(2);
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
			this->room1_status->Location = System::Drawing::Point(5, 596);
			this->room1_status->Name = L"room1_status";
			this->room1_status->Size = System::Drawing::Size(317, 37);
			this->room1_status->TabIndex = 20;
			this->room1_status->Text = L"enter name to delete:";
			// 
			// del_txt
			// 
			this->del_txt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->del_txt->Location = System::Drawing::Point(318, 602);
			this->del_txt->Name = L"del_txt";
			this->del_txt->Size = System::Drawing::Size(274, 31);
			this->del_txt->TabIndex = 21;
			// 
			// del_btn
			// 
			this->del_btn->AutoSize = true;
			this->del_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->del_btn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"del_btn.BackgroundImage")));
			this->del_btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->del_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->del_btn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->del_btn->FlatAppearance->BorderSize = 0;
			this->del_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->del_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->del_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->del_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->del_btn->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->del_btn->Location = System::Drawing::Point(621, 597);
			this->del_btn->Margin = System::Windows::Forms::Padding(2);
			this->del_btn->Name = L"del_btn";
			this->del_btn->Size = System::Drawing::Size(124, 40);
			this->del_btn->TabIndex = 22;
			this->del_btn->Text = L"DELETE";
			this->del_btn->UseVisualStyleBackColor = false;
			this->del_btn->Click += gcnew System::EventHandler(this, &storage::del_btn_Click);
			// 
			// storage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1187, 666);
			this->Controls->Add(this->del_btn);
			this->Controls->Add(this->del_txt);
			this->Controls->Add(this->room1_status);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->rooms_back_btn);
			this->Controls->Add(this->save_btn);
			this->Controls->Add(this->pictureBox1);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(2);
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

	}


	private: System::Void save_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			// Set up the UpdateCommand and its parameters
			adapter->UpdateCommand = gcnew SqlCommand("UPDATE items SET name = @name, price = @price, quantity = @quantity WHERE name = @original_name", dbConnection);
			adapter->UpdateCommand->Parameters->Add(gcnew SqlParameter("@name", SqlDbType::VarChar, 100, "name"));
			adapter->UpdateCommand->Parameters->Add(gcnew SqlParameter("@price", SqlDbType::Float, 0, "price"));
			adapter->UpdateCommand->Parameters->Add(gcnew SqlParameter("@quantity", SqlDbType::Int, 0, "quantity"));
			adapter->UpdateCommand->Parameters->Add(gcnew SqlParameter("@original_name", SqlDbType::VarChar, 100, "name"));
			adapter->UpdateCommand->UpdatedRowSource = UpdateRowSource::Both;

			// Update the database with changes made in the DataGridView
			adapter->Update(dataTable);

			MessageBox::Show("Changes saved successfully.");
			RefreshDataGridView();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error saving changes: " + ex->Message);
		}
	}



	private: System::Void rooms_back_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {



	}
	private: System::Void refresh_btn_Click(System::Object^ sender, System::EventArgs^ e) {

		RefreshDataGridView();
	}
private: System::Void del_btn_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ itemNameToDelete = del_txt->Text; // Replace 'itemToDeleteTextBox' with your actual input field.

	if (!String::IsNullOrEmpty(itemNameToDelete)) {
		try {
			// Delete the item based on the provided name from the database
			String^ deleteQuery = "DELETE FROM items WHERE name = @name";
			SqlCommand^ deleteCommand = gcnew SqlCommand(deleteQuery, dbConnection);
			deleteCommand->Parameters->Add(gcnew SqlParameter("@name", SqlDbType::VarChar, 100))->Value = itemNameToDelete;

			int rowsAffected = deleteCommand->ExecuteNonQuery();

			if (rowsAffected > 0) {
				// Deletion was successful, refresh the DataGridView
				RefreshDataGridView();
				MessageBox::Show("Item deleted successfully.");
				del_txt->Text = "";
			}
			else {
				MessageBox::Show("Item not found or deletion failed.");
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error deleting item: " + ex->Message);
		}
	}
	else {
		MessageBox::Show("Please enter the name of the item you want to delete.");
	}

}
};
}