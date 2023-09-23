#pragma once
#include <string>
#include <msclr\marshal_cppstd.h>
#include <Windows.h>
#include <iostream>
namespace joystick {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;


	/// <summary>
	/// Summary for Settings
	/// </summary>
	public ref class Settings : public System::Windows::Forms::Form
	{
	public:
		Settings(void)
		{
			InitializeComponent();
			refresh_Usercmx();
			

		}
		void refresh_Usercmx() {

			user_cmx->Text = "";
			user_cmx->Items->Clear();


			try
			{

				String^ connString = "Data Source=sql.bsite.net\\MSSQL2016;Persist Security Info=True;User ID=ahmedsameh_;Password=Admin1234";
				SqlConnection^ sqlConn = gcnew SqlConnection(connString);
				sqlConn->Open();

				String^ query = "SELECT Username FROM Users ";
				SqlCommand^ command = gcnew SqlCommand(query, sqlConn);
				SqlDataReader^ reader = command->ExecuteReader();

				while (reader->Read())
				{
					String^ value = reader->GetString(0);

					user_cmx->Items->Add(value);

				}


				reader->Close();
			}
			catch (Exception^ e)
			{
				MessageBox::Show("Failed to retrieve data from the database.");
			}
		
		
		
		
		
		
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Settings()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:


	private:String^ password = "12345";
	private: System::Windows::Forms::Button^ save_bt;
	private: System::Windows::Forms::ComboBox^ user_cmx;






	private: System::Windows::Forms::TextBox^ password_tb;
	private: System::Windows::Forms::Button^ back_tb;
	private: System::Windows::Forms::TextBox^ ps4_singel_tb;
	private: System::Windows::Forms::TextBox^ ps4_multi_tb;
	private: System::Windows::Forms::TextBox^ ps5_singel_tb;








	private: System::Windows::Forms::TextBox^ billiard1_bt;
	private: System::Windows::Forms::TextBox^ billiard2_bt;
	private: System::Windows::Forms::TextBox^ ping_pong;
	private: System::Windows::Forms::TextBox^ ps5_multi_tb;


	private: System::Windows::Forms::ComboBox^ rooms_cmx;
	private: System::Windows::Forms::Button^ find_bt;
	private: System::Windows::Forms::Button^ delete_bt;








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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Settings::typeid));
			this->save_bt = (gcnew System::Windows::Forms::Button());
			this->user_cmx = (gcnew System::Windows::Forms::ComboBox());
			this->password_tb = (gcnew System::Windows::Forms::TextBox());
			this->back_tb = (gcnew System::Windows::Forms::Button());
			this->ps4_singel_tb = (gcnew System::Windows::Forms::TextBox());
			this->ps4_multi_tb = (gcnew System::Windows::Forms::TextBox());
			this->ps5_singel_tb = (gcnew System::Windows::Forms::TextBox());
			this->billiard1_bt = (gcnew System::Windows::Forms::TextBox());
			this->billiard2_bt = (gcnew System::Windows::Forms::TextBox());
			this->ping_pong = (gcnew System::Windows::Forms::TextBox());
			this->ps5_multi_tb = (gcnew System::Windows::Forms::TextBox());
			this->rooms_cmx = (gcnew System::Windows::Forms::ComboBox());
			this->find_bt = (gcnew System::Windows::Forms::Button());
			this->delete_bt = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// save_bt
			// 
			this->save_bt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->save_bt->Cursor = System::Windows::Forms::Cursors::Hand;
			this->save_bt->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->save_bt->FlatAppearance->BorderSize = 0;
			this->save_bt->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->save_bt->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->save_bt->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->save_bt->Location = System::Drawing::Point(581, 635);
			this->save_bt->Name = L"save_bt";
			this->save_bt->Size = System::Drawing::Size(164, 47);
			this->save_bt->TabIndex = 0;
			this->save_bt->UseVisualStyleBackColor = false;
			this->save_bt->Click += gcnew System::EventHandler(this, &Settings::save_bt_Click);
			// 
			// user_cmx
			// 
			this->user_cmx->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->user_cmx->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->user_cmx->FormattingEnabled = true;
			this->user_cmx->Location = System::Drawing::Point(283, 182);
			this->user_cmx->Name = L"user_cmx";
			this->user_cmx->Size = System::Drawing::Size(250, 41);
			this->user_cmx->TabIndex = 1;
			// 
			// password_tb
			// 
			this->password_tb->BackColor = System::Drawing::SystemColors::Window;
			this->password_tb->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->password_tb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->password_tb->Location = System::Drawing::Point(986, 185);
			this->password_tb->Name = L"password_tb";
			this->password_tb->PasswordChar = '*';
			this->password_tb->ShortcutsEnabled = false;
			this->password_tb->Size = System::Drawing::Size(254, 33);
			this->password_tb->TabIndex = 6;
			this->password_tb->TextChanged += gcnew System::EventHandler(this, &Settings::password_tb_TextChanged);
			// 
			// back_tb
			// 
			this->back_tb->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->back_tb->Cursor = System::Windows::Forms::Cursors::Hand;
			this->back_tb->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->back_tb->FlatAppearance->BorderSize = 0;
			this->back_tb->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->back_tb->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->back_tb->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->back_tb->Location = System::Drawing::Point(43, 24);
			this->back_tb->Name = L"back_tb";
			this->back_tb->Size = System::Drawing::Size(125, 43);
			this->back_tb->TabIndex = 7;
			this->back_tb->UseVisualStyleBackColor = false;
			this->back_tb->Click += gcnew System::EventHandler(this, &Settings::back_tb_Click);
			// 
			// ps4_singel_tb
			// 
			this->ps4_singel_tb->BackColor = System::Drawing::SystemColors::Window;
			this->ps4_singel_tb->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ps4_singel_tb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ps4_singel_tb->Location = System::Drawing::Point(79, 517);
			this->ps4_singel_tb->Name = L"ps4_singel_tb";
			this->ps4_singel_tb->ShortcutsEnabled = false;
			this->ps4_singel_tb->Size = System::Drawing::Size(98, 33);
			this->ps4_singel_tb->TabIndex = 9;
			// 
			// ps4_multi_tb
			// 
			this->ps4_multi_tb->BackColor = System::Drawing::SystemColors::Window;
			this->ps4_multi_tb->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ps4_multi_tb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ps4_multi_tb->Location = System::Drawing::Point(335, 517);
			this->ps4_multi_tb->Name = L"ps4_multi_tb";
			this->ps4_multi_tb->ShortcutsEnabled = false;
			this->ps4_multi_tb->Size = System::Drawing::Size(98, 33);
			this->ps4_multi_tb->TabIndex = 10;
			// 
			// ps5_singel_tb
			// 
			this->ps5_singel_tb->BackColor = System::Drawing::SystemColors::Window;
			this->ps5_singel_tb->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ps5_singel_tb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ps5_singel_tb->Location = System::Drawing::Point(79, 639);
			this->ps5_singel_tb->Name = L"ps5_singel_tb";
			this->ps5_singel_tb->ShortcutsEnabled = false;
			this->ps5_singel_tb->Size = System::Drawing::Size(98, 33);
			this->ps5_singel_tb->TabIndex = 11;
			// 
			// billiard1_bt
			// 
			this->billiard1_bt->BackColor = System::Drawing::SystemColors::Window;
			this->billiard1_bt->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->billiard1_bt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->billiard1_bt->Location = System::Drawing::Point(1139, 399);
			this->billiard1_bt->Name = L"billiard1_bt";
			this->billiard1_bt->ShortcutsEnabled = false;
			this->billiard1_bt->Size = System::Drawing::Size(101, 33);
			this->billiard1_bt->TabIndex = 13;
			// 
			// billiard2_bt
			// 
			this->billiard2_bt->BackColor = System::Drawing::SystemColors::Window;
			this->billiard2_bt->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->billiard2_bt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->billiard2_bt->Location = System::Drawing::Point(1139, 517);
			this->billiard2_bt->Name = L"billiard2_bt";
			this->billiard2_bt->ShortcutsEnabled = false;
			this->billiard2_bt->Size = System::Drawing::Size(101, 33);
			this->billiard2_bt->TabIndex = 14;
			// 
			// ping_pong
			// 
			this->ping_pong->BackColor = System::Drawing::SystemColors::Window;
			this->ping_pong->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ping_pong->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ping_pong->Location = System::Drawing::Point(1139, 639);
			this->ping_pong->Name = L"ping_pong";
			this->ping_pong->ShortcutsEnabled = false;
			this->ping_pong->Size = System::Drawing::Size(103, 33);
			this->ping_pong->TabIndex = 15;
			// 
			// ps5_multi_tb
			// 
			this->ps5_multi_tb->BackColor = System::Drawing::SystemColors::Window;
			this->ps5_multi_tb->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ps5_multi_tb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ps5_multi_tb->Location = System::Drawing::Point(335, 639);
			this->ps5_multi_tb->Name = L"ps5_multi_tb";
			this->ps5_multi_tb->ShortcutsEnabled = false;
			this->ps5_multi_tb->Size = System::Drawing::Size(98, 33);
			this->ps5_multi_tb->TabIndex = 12;
			// 
			// rooms_cmx
			// 
			this->rooms_cmx->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->rooms_cmx->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rooms_cmx->FormattingEnabled = true;
			this->rooms_cmx->Location = System::Drawing::Point(161, 381);
			this->rooms_cmx->Name = L"rooms_cmx";
			this->rooms_cmx->Size = System::Drawing::Size(189, 41);
			this->rooms_cmx->TabIndex = 16;
			this->rooms_cmx->SelectedIndexChanged += gcnew System::EventHandler(this, &Settings::rooms_cmx_SelectedIndexChanged);
			// 
			// find_bt
			// 
			this->find_bt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->find_bt->Cursor = System::Windows::Forms::Cursors::Hand;
			this->find_bt->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->find_bt->FlatAppearance->BorderSize = 0;
			this->find_bt->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->find_bt->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->find_bt->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->find_bt->Location = System::Drawing::Point(585, 265);
			this->find_bt->Name = L"find_bt";
			this->find_bt->Size = System::Drawing::Size(164, 47);
			this->find_bt->TabIndex = 17;
			this->find_bt->UseVisualStyleBackColor = false;
			this->find_bt->Click += gcnew System::EventHandler(this, &Settings::find_bt_Click);
			// 
			// delete_bt
			// 
			this->delete_bt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->delete_bt->Cursor = System::Windows::Forms::Cursors::Hand;
			this->delete_bt->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->delete_bt->FlatAppearance->BorderSize = 0;
			this->delete_bt->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->delete_bt->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->delete_bt->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->delete_bt->Location = System::Drawing::Point(568, 332);
			this->delete_bt->Name = L"delete_bt";
			this->delete_bt->Size = System::Drawing::Size(197, 47);
			this->delete_bt->TabIndex = 18;
			this->delete_bt->UseVisualStyleBackColor = false;
			this->delete_bt->Click += gcnew System::EventHandler(this, &Settings::delete_bt_Click);
			// 
			// Settings
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1280, 720);
			this->Controls->Add(this->delete_bt);
			this->Controls->Add(this->find_bt);
			this->Controls->Add(this->rooms_cmx);
			this->Controls->Add(this->ping_pong);
			this->Controls->Add(this->billiard2_bt);
			this->Controls->Add(this->billiard1_bt);
			this->Controls->Add(this->ps5_multi_tb);
			this->Controls->Add(this->ps5_singel_tb);
			this->Controls->Add(this->ps4_multi_tb);
			this->Controls->Add(this->ps4_singel_tb);
			this->Controls->Add(this->back_tb);
			this->Controls->Add(this->password_tb);
			this->Controls->Add(this->user_cmx);
			this->Controls->Add(this->save_bt);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Settings";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Settings";
			this->Load += gcnew System::EventHandler(this, &Settings::Settings_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}








private: System::Void back_tb_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
}
private: System::Void password_tb_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}


private: System::Void Settings_Load(System::Object^ sender, System::EventArgs^ e) {

	String^ connString = "Data Source=sql.bsite.net\\MSSQL2016;Persist Security Info=True;User ID=ahmedsameh_;Password=Admin1234";
	SqlConnection^ sqlConn = gcnew SqlConnection(connString);

	try
	{
		rooms_cmx->Items->Clear();


		sqlConn->Open();

		String^ query = "SELECT name FROM rooms ";
		SqlCommand^ command = gcnew SqlCommand(query, sqlConn);
		SqlDataReader^ reader = command->ExecuteReader();

		while (reader->Read())
		{
			String^ value = reader->GetString(0);

			rooms_cmx->Items->Add(value);

		}


		reader->Close();
		sqlConn->Close();

	}
	catch (Exception^ e)
	{
		MessageBox::Show("Failed to retrieve data from the database.");
	}


	
}


TextBox^ passwordTextBox = gcnew TextBox();
Form^ customDialog = gcnew Form();


public: System::Void find_bt_Click(System::Object^ sender, System::EventArgs^ e) {
	password_tb->Text = "";

	if (user_cmx->Text != "")
	{
		String^ selectedUsername = user_cmx->Text;
		String^ connString = "Data Source=sql.bsite.net\\MSSQL2016;Persist Security Info=True;User ID=ahmedsameh_;Password=Admin1234";

		try
		{
			SqlConnection^ sqlConn = gcnew SqlConnection(connString);
			sqlConn->Open();

			String^ query = "SELECT Password FROM Users WHERE Username = @username";
			SqlCommand^ command = gcnew SqlCommand(query, sqlConn);
			command->Parameters->AddWithValue("@username", selectedUsername);

			SqlDataReader^ reader = command->ExecuteReader();
			if (reader->Read())
			{
				String^ password = reader->GetString(0);
				password_tb->Text = password;
			}
			else
			{
				reader->Close();
				sqlConn->Close();

				System::Windows::Forms::DialogResult result = MessageBox::Show("Username not found. Do you want to add a new user?", "User Not Found", MessageBoxButtons::YesNo);

				if (result == System::Windows::Forms::DialogResult::Yes)
				{
					customDialog->Text = "Add User";
					customDialog->Width = 300;
					customDialog->Height = 150;

					int screenWidth = Screen::PrimaryScreen->Bounds.Width;
					int screenHeight = Screen::PrimaryScreen->Bounds.Height;
					int dialogWidth = customDialog->Width;
					int dialogHeight = customDialog->Height;
					int dialogX = (screenWidth - dialogWidth) / 2;
					int dialogY = (screenHeight - dialogHeight) / 2;

					customDialog->StartPosition = FormStartPosition::Manual;
					customDialog->Location = Point(dialogX, dialogY);

					Label^ passwordLabel = gcnew Label();
					passwordLabel->Text = "Enter the password:";
					passwordLabel->Location = Point(20, 20);
					passwordLabel->Width = 250;

					passwordTextBox->Location = Point(20, 40);
					passwordTextBox->Width = 250;

					Button^ addButton = gcnew Button();
					addButton->Text = "Add User";
					addButton->Location = Point(20, 80);
					addButton->Click += gcnew System::EventHandler(this, &Settings::addButton_Click);
					customDialog->Controls->Add(passwordLabel);
					customDialog->Controls->Add(passwordTextBox);
					customDialog->Controls->Add(addButton);

					System::Windows::Forms::DialogResult dialogResult = customDialog->ShowDialog();
					
				}
			}

			reader->Close();
			sqlConn->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Failed To Connect To Database.");
		}
	}
}
	   public:
		   System::Void addButton_Click(System::Object^ sender, System::EventArgs^ e)
		   {
			   String^ newPassword = passwordTextBox->Text;
			   String^ newUsername = user_cmx->Text;
			   customDialog->Close();
			   String^ connectionString = "Data Source=sql.bsite.net\\MSSQL2016;Persist Security Info=True;User ID=ahmedsameh_;Password=Admin1234";

			
			   SqlConnection^ connection = gcnew SqlConnection(connectionString);

			   try
			   {
				   connection->Open();

				   
				   String^ query = "INSERT INTO Users (Username, Password) "
					   "VALUES (@username, @password)";

				   SqlCommand^ command = gcnew SqlCommand(query, connection);

				   command->Parameters->AddWithValue("@username", newUsername);
				   command->Parameters->AddWithValue("@password", newPassword); 
				 

				   command->ExecuteNonQuery();
				  
				   MessageBox::Show("User Added successfully ");
				   refresh_Usercmx();
			   }
			   catch (Exception^ ex)
			   {
				   MessageBox::Show("Error inserting  data: " + ex->Message);
			   }



		   }
private: System::Void save_bt_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ Password = password_tb->Text;
	String^ username = user_cmx->Text;

	customDialog->Close();
	String^ connectionString = "Data Source=sql.bsite.net\\MSSQL2016;Persist Security Info=True;User ID=ahmedsameh_;Password=Admin1234";


	SqlConnection^ connection = gcnew SqlConnection(connectionString);

	try
	{
		connection->Open();


		String^ query = "UPDATE Users SET Password = @password WHERE Username = @username";

		SqlCommand^ command = gcnew SqlCommand(query, connection);

		command->Parameters->AddWithValue("@username", username);
		command->Parameters->AddWithValue("@password", password);



		command->ExecuteNonQuery();

		MessageBox::Show("Password Updated Successfully ");
		password_tb->Text = "";
		refresh_Usercmx();
	}
	catch (Exception^ ex)
	{
		MessageBox::Show("Error Updateing  Password: " + ex->Message);
	}






}
private: System::Void delete_bt_Click(System::Object^ sender, System::EventArgs^ e) 
{

	String^ Password = password_tb->Text;
	String^ username = user_cmx->Text;

	customDialog->Close();
	String^ connectionString = "Data Source=sql.bsite.net\\MSSQL2016;Persist Security Info=True;User ID=ahmedsameh_;Password=Admin1234";

	SqlConnection^ connection = gcnew SqlConnection(connectionString);

	try
	{
		connection->Open();

		String^ query = "DELETE FROM Users WHERE Username = @username";

		SqlCommand^ command = gcnew SqlCommand(query, connection);

		command->Parameters->AddWithValue("@username", username);

		command->ExecuteNonQuery();

		MessageBox::Show("User Deleted Successfully");
		password_tb->Text = "";
		refresh_Usercmx();
	}
	catch (Exception^ ex)
	{
		MessageBox::Show("Error Deleting User: " + ex->Message);
	}

}

private: System::Void rooms_cmx_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {


	String^ roomName = rooms_cmx->Text;
	String^ connectionString = "Data Source=sql.bsite.net\\MSSQL2016;Persist Security Info=True;User ID=ahmedsameh_;Password=Admin1234";

	SqlConnection^ connection = gcnew SqlConnection(connectionString);

	try
	{
		connection->Open();

		String^ query = "SELECT ps4_singel, ps4_multi, ps5_singel, ps5_multi FROM rooms WHERE name = @roomName";

		SqlCommand^ command = gcnew SqlCommand(query, connection);
		command->Parameters->AddWithValue("@roomName", roomName);

		SqlDataReader^ reader = command->ExecuteReader();

		if (reader->Read())
		{
			int ps4_singel = reader->GetInt32(0);
			int ps4_multi = reader->GetInt32(1);
			int ps5_singel = reader->GetInt32(2);
			int ps5_multi = reader->GetInt32(3);

			ps4_singel_tb->Text = ps4_singel.ToString();
			ps4_multi_tb->Text = ps4_multi.ToString();
			ps5_singel_tb->Text = ps5_singel.ToString();
			ps5_multi_tb->Text = ps5_multi.ToString();
		}

		reader->Close();
	}
	catch (Exception^ ex)
	{
		MessageBox::Show("Error retrieving data: " + ex->Message);
	}



}
};
}
