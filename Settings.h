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






	private: System::Windows::Forms::TextBox^ password_tb;
	private: System::Windows::Forms::Button^ back_tb;
	private: System::Windows::Forms::TextBox^ r1_ps4_singel;
	private: System::Windows::Forms::TextBox^ r2_ps4_singel;
	private: System::Windows::Forms::TextBox^ r3_ps4_singel;
	private: System::Windows::Forms::TextBox^ r4_ps4_singel;
	private: System::Windows::Forms::TextBox^ r5_ps4_singel;
	private: System::Windows::Forms::TextBox^ billiard1_bt;
	private: System::Windows::Forms::TextBox^ billiard2_bt;
	private: System::Windows::Forms::TextBox^ ping_pong;







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
			this->r1_ps4_singel = (gcnew System::Windows::Forms::TextBox());
			this->r2_ps4_singel = (gcnew System::Windows::Forms::TextBox());
			this->r3_ps4_singel = (gcnew System::Windows::Forms::TextBox());
			this->r4_ps4_singel = (gcnew System::Windows::Forms::TextBox());
			this->r5_ps4_singel = (gcnew System::Windows::Forms::TextBox());
			this->billiard1_bt = (gcnew System::Windows::Forms::TextBox());
			this->billiard2_bt = (gcnew System::Windows::Forms::TextBox());
			this->ping_pong = (gcnew System::Windows::Forms::TextBox());
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
			this->save_bt->Location = System::Drawing::Point(1076, 517);
			this->save_bt->Name = L"save_bt";
			this->save_bt->Size = System::Drawing::Size(164, 47);
			this->save_bt->TabIndex = 0;
			this->save_bt->UseVisualStyleBackColor = false;
			// 
			// user_cmx
			// 
			this->user_cmx->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->user_cmx->Font = (gcnew System::Drawing::Font(L"Carter One", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->user_cmx->FormattingEnabled = true;
			this->user_cmx->Location = System::Drawing::Point(297, 104);
			this->user_cmx->Name = L"user_cmx";
			this->user_cmx->Size = System::Drawing::Size(248, 53);
			this->user_cmx->TabIndex = 1;
			this->user_cmx->SelectedIndexChanged += gcnew System::EventHandler(this, &Settings::user_cmx_SelectedIndexChanged);
			// 
			// password_tb
			// 
			this->password_tb->BackColor = System::Drawing::SystemColors::Window;
			this->password_tb->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->password_tb->Font = (gcnew System::Drawing::Font(L"Carter One", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->password_tb->Location = System::Drawing::Point(297, 183);
			this->password_tb->Name = L"password_tb";
			this->password_tb->PasswordChar = '*';
			this->password_tb->ShortcutsEnabled = false;
			this->password_tb->Size = System::Drawing::Size(248, 45);
			this->password_tb->TabIndex = 6;
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
			this->back_tb->Location = System::Drawing::Point(36, 22);
			this->back_tb->Name = L"back_tb";
			this->back_tb->Size = System::Drawing::Size(135, 47);
			this->back_tb->TabIndex = 7;
			this->back_tb->UseVisualStyleBackColor = false;
			this->back_tb->Click += gcnew System::EventHandler(this, &Settings::back_tb_Click);
			// 
			// r1_ps4_singel
			// 
			this->r1_ps4_singel->BackColor = System::Drawing::SystemColors::Window;
			this->r1_ps4_singel->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->r1_ps4_singel->Font = (gcnew System::Drawing::Font(L"Carter One", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->r1_ps4_singel->Location = System::Drawing::Point(326, 370);
			this->r1_ps4_singel->Name = L"r1_ps4_singel";
			this->r1_ps4_singel->ShortcutsEnabled = false;
			this->r1_ps4_singel->Size = System::Drawing::Size(98, 45);
			this->r1_ps4_singel->TabIndex = 8;
			// 
			// r2_ps4_singel
			// 
			this->r2_ps4_singel->BackColor = System::Drawing::SystemColors::Window;
			this->r2_ps4_singel->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->r2_ps4_singel->Font = (gcnew System::Drawing::Font(L"Carter One", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->r2_ps4_singel->Location = System::Drawing::Point(326, 446);
			this->r2_ps4_singel->Name = L"r2_ps4_singel";
			this->r2_ps4_singel->ShortcutsEnabled = false;
			this->r2_ps4_singel->Size = System::Drawing::Size(98, 45);
			this->r2_ps4_singel->TabIndex = 9;
			// 
			// r3_ps4_singel
			// 
			this->r3_ps4_singel->BackColor = System::Drawing::SystemColors::Window;
			this->r3_ps4_singel->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->r3_ps4_singel->Font = (gcnew System::Drawing::Font(L"Carter One", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->r3_ps4_singel->Location = System::Drawing::Point(326, 519);
			this->r3_ps4_singel->Name = L"r3_ps4_singel";
			this->r3_ps4_singel->ShortcutsEnabled = false;
			this->r3_ps4_singel->Size = System::Drawing::Size(98, 45);
			this->r3_ps4_singel->TabIndex = 10;
			// 
			// r4_ps4_singel
			// 
			this->r4_ps4_singel->BackColor = System::Drawing::SystemColors::Window;
			this->r4_ps4_singel->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->r4_ps4_singel->Font = (gcnew System::Drawing::Font(L"Carter One", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->r4_ps4_singel->Location = System::Drawing::Point(326, 590);
			this->r4_ps4_singel->Name = L"r4_ps4_singel";
			this->r4_ps4_singel->ShortcutsEnabled = false;
			this->r4_ps4_singel->Size = System::Drawing::Size(98, 45);
			this->r4_ps4_singel->TabIndex = 11;
			// 
			// r5_ps4_singel
			// 
			this->r5_ps4_singel->BackColor = System::Drawing::SystemColors::Window;
			this->r5_ps4_singel->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->r5_ps4_singel->Font = (gcnew System::Drawing::Font(L"Carter One", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->r5_ps4_singel->Location = System::Drawing::Point(326, 663);
			this->r5_ps4_singel->Name = L"r5_ps4_singel";
			this->r5_ps4_singel->ShortcutsEnabled = false;
			this->r5_ps4_singel->Size = System::Drawing::Size(98, 45);
			this->r5_ps4_singel->TabIndex = 12;
			// 
			// billiard1_bt
			// 
			this->billiard1_bt->BackColor = System::Drawing::SystemColors::Window;
			this->billiard1_bt->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->billiard1_bt->Font = (gcnew System::Drawing::Font(L"Carter One", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->billiard1_bt->Location = System::Drawing::Point(1012, 107);
			this->billiard1_bt->Name = L"billiard1_bt";
			this->billiard1_bt->ShortcutsEnabled = false;
			this->billiard1_bt->Size = System::Drawing::Size(243, 45);
			this->billiard1_bt->TabIndex = 13;
			// 
			// billiard2_bt
			// 
			this->billiard2_bt->BackColor = System::Drawing::SystemColors::Window;
			this->billiard2_bt->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->billiard2_bt->Font = (gcnew System::Drawing::Font(L"Carter One", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->billiard2_bt->Location = System::Drawing::Point(1012, 179);
			this->billiard2_bt->Name = L"billiard2_bt";
			this->billiard2_bt->ShortcutsEnabled = false;
			this->billiard2_bt->Size = System::Drawing::Size(243, 45);
			this->billiard2_bt->TabIndex = 14;
			// 
			// ping_pong
			// 
			this->ping_pong->BackColor = System::Drawing::SystemColors::Window;
			this->ping_pong->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ping_pong->Font = (gcnew System::Drawing::Font(L"Carter One", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ping_pong->Location = System::Drawing::Point(1012, 253);
			this->ping_pong->Name = L"ping_pong";
			this->ping_pong->ShortcutsEnabled = false;
			this->ping_pong->Size = System::Drawing::Size(243, 45);
			this->ping_pong->TabIndex = 15;
			// 
			// Settings
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1280, 720);
			this->Controls->Add(this->ping_pong);
			this->Controls->Add(this->billiard2_bt);
			this->Controls->Add(this->billiard1_bt);
			this->Controls->Add(this->r5_ps4_singel);
			this->Controls->Add(this->r4_ps4_singel);
			this->Controls->Add(this->r3_ps4_singel);
			this->Controls->Add(this->r2_ps4_singel);
			this->Controls->Add(this->r1_ps4_singel);
			this->Controls->Add(this->back_tb);
			this->Controls->Add(this->password_tb);
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
private: System::Void back_tb_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
