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
	/// Summary for Settings
	/// </summary>
	public ref class Settings : public System::Windows::Forms::Form
	{
	public:
		Settings(void)
		{
			InitializeComponent();
	
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
	private: System::Windows::Forms::TextBox^ ps4Singel_tb;

	private: System::Windows::Forms::TextBox^ ps4Multi_tb;

	private: System::Windows::Forms::TextBox^ ps5Singel_tb;
	private: System::Windows::Forms::TextBox^ ps5Multi_tb;
	private: System::Windows::Forms::TextBox^ password_tb;



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
			this->ps4Singel_tb = (gcnew System::Windows::Forms::TextBox());
			this->ps4Multi_tb = (gcnew System::Windows::Forms::TextBox());
			this->ps5Singel_tb = (gcnew System::Windows::Forms::TextBox());
			this->ps5Multi_tb = (gcnew System::Windows::Forms::TextBox());
			this->password_tb = (gcnew System::Windows::Forms::TextBox());
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
			this->save_bt->Location = System::Drawing::Point(541, 590);
			this->save_bt->Name = L"save_bt";
			this->save_bt->Size = System::Drawing::Size(210, 65);
			this->save_bt->TabIndex = 0;
			this->save_bt->UseVisualStyleBackColor = false;
			// 
			// user_cmx
			// 
			this->user_cmx->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->user_cmx->Font = (gcnew System::Drawing::Font(L"Carter One", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->user_cmx->FormattingEnabled = true;
			this->user_cmx->Location = System::Drawing::Point(397, 84);
			this->user_cmx->Name = L"user_cmx";
			this->user_cmx->Size = System::Drawing::Size(499, 53);
			this->user_cmx->TabIndex = 1;
			this->user_cmx->SelectedIndexChanged += gcnew System::EventHandler(this, &Settings::user_cmx_SelectedIndexChanged);
			// 
			// ps4Singel_tb
			// 
			this->ps4Singel_tb->BackColor = System::Drawing::SystemColors::Window;
			this->ps4Singel_tb->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ps4Singel_tb->Font = (gcnew System::Drawing::Font(L"Carter One", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ps4Singel_tb->Location = System::Drawing::Point(99, 443);
			this->ps4Singel_tb->Name = L"ps4Singel_tb";
			this->ps4Singel_tb->Size = System::Drawing::Size(192, 45);
			this->ps4Singel_tb->TabIndex = 2;
			this->ps4Singel_tb->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// ps4Multi_tb
			// 
			this->ps4Multi_tb->BackColor = System::Drawing::SystemColors::Window;
			this->ps4Multi_tb->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ps4Multi_tb->Font = (gcnew System::Drawing::Font(L"Carter One", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ps4Multi_tb->Location = System::Drawing::Point(395, 443);
			this->ps4Multi_tb->Name = L"ps4Multi_tb";
			this->ps4Multi_tb->Size = System::Drawing::Size(192, 45);
			this->ps4Multi_tb->TabIndex = 3;
			this->ps4Multi_tb->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// ps5Singel_tb
			// 
			this->ps5Singel_tb->BackColor = System::Drawing::SystemColors::Window;
			this->ps5Singel_tb->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ps5Singel_tb->Font = (gcnew System::Drawing::Font(L"Carter One", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ps5Singel_tb->Location = System::Drawing::Point(704, 443);
			this->ps5Singel_tb->Name = L"ps5Singel_tb";
			this->ps5Singel_tb->Size = System::Drawing::Size(192, 45);
			this->ps5Singel_tb->TabIndex = 4;
			this->ps5Singel_tb->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// ps5Multi_tb
			// 
			this->ps5Multi_tb->BackColor = System::Drawing::SystemColors::Window;
			this->ps5Multi_tb->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ps5Multi_tb->Font = (gcnew System::Drawing::Font(L"Carter One", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ps5Multi_tb->Location = System::Drawing::Point(1000, 443);
			this->ps5Multi_tb->Name = L"ps5Multi_tb";
			this->ps5Multi_tb->Size = System::Drawing::Size(192, 45);
			this->ps5Multi_tb->TabIndex = 5;
			this->ps5Multi_tb->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// password_tb
			// 
			this->password_tb->BackColor = System::Drawing::SystemColors::Window;
			this->password_tb->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->password_tb->Font = (gcnew System::Drawing::Font(L"Carter One", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->password_tb->Location = System::Drawing::Point(397, 185);
			this->password_tb->Name = L"password_tb";
			this->password_tb->PasswordChar = '*';
			this->password_tb->ShortcutsEnabled = false;
			this->password_tb->Size = System::Drawing::Size(499, 45);
			this->password_tb->TabIndex = 6;
			// 
			// Settings
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1280, 720);
			this->Controls->Add(this->password_tb);
			this->Controls->Add(this->ps5Multi_tb);
			this->Controls->Add(this->ps5Singel_tb);
			this->Controls->Add(this->ps4Multi_tb);
			this->Controls->Add(this->ps4Singel_tb);
			this->Controls->Add(this->user_cmx);
			this->Controls->Add(this->save_bt);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Settings";
			this->Text = L"Settings";
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







private: System::Void user_cmx_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
    password_tb->Text = "";
	if (user_cmx->SelectedItem != nullptr)
	{
		String^ selectedUsername = user_cmx->SelectedItem->ToString();
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

			reader->Close();
			sqlConn->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Failed to retrieve password from the database.");
		}
	}


}
};
}
