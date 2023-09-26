#pragma once
#include "Home.h"
#include <list>

namespace joystick {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
 
	public ref class login : public System::Windows::Forms::Form
	{
	public:
	
		List<String^>^ user_passes = gcnew List<String^>();

		login(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			try
			{
				String^ connString = "Data Source=sql.bsite.net\\MSSQL2016;Persist Security Info=True;User ID=ahmedsameh_;Password=Admin1234";
				SqlConnection^ sqlConn = gcnew SqlConnection(connString);
				sqlConn->Open();

				String^ query = "SELECT Password FROM Users";
				SqlCommand^ command = gcnew SqlCommand(query, sqlConn);
				SqlDataReader^ reader = command->ExecuteReader();

				while (reader->Read())
				{
					String^ value = reader->GetString(0);
					user_passes->Add(value);
				}

				reader->Close();
			}
			catch (Exception^ e)
			{
				MessageBox::Show("Failed to retrieve data from the database."+e->Message);
			}
		}
	public: String^ user_pass = "";

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ password_txt;
	private: System::Windows::Forms::Button^ login_btn;
	protected:







	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ exit_btn;


	private: System::ComponentModel::IContainer^ components;
	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(login::typeid));
			this->password_txt = (gcnew System::Windows::Forms::TextBox());
			this->login_btn = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->exit_btn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// password_txt
			// 
			this->password_txt->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->password_txt->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::FileSystem;
			this->password_txt->BackColor = System::Drawing::Color::White;
			this->password_txt->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->password_txt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->password_txt->ForeColor = System::Drawing::Color::Black;
			this->password_txt->Location = System::Drawing::Point(359, 341);
			this->password_txt->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->password_txt->Name = L"password_txt";
			this->password_txt->PasswordChar = '*';
			this->password_txt->Size = System::Drawing::Size(537, 34);
			this->password_txt->TabIndex = 1;
			this->password_txt->TextChanged += gcnew System::EventHandler(this, &login::textBox1_TextChanged);
			// 
			// login_btn
			// 
			this->login_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->login_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->login_btn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->login_btn->FlatAppearance->BorderSize = 0;
			this->login_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->login_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->login_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->login_btn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->login_btn->Location = System::Drawing::Point(540, 410);
			this->login_btn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->login_btn->Name = L"login_btn";
			this->login_btn->Size = System::Drawing::Size(181, 43);
			this->login_btn->TabIndex = 2;
			this->login_btn->UseVisualStyleBackColor = false;
			this->login_btn->Click += gcnew System::EventHandler(this, &login::login_btnn);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Red;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(1611, 16);
			this->button1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(64, 65);
			this->button1->TabIndex = 4;
			this->button1->UseVisualStyleBackColor = false;
			// 
			// exit_btn
			// 
			this->exit_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->exit_btn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->exit_btn->FlatAppearance->BorderSize = 0;
			this->exit_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->exit_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->exit_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->exit_btn->Location = System::Drawing::Point(1176, 12);
			this->exit_btn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->exit_btn->Name = L"exit_btn";
			this->exit_btn->Size = System::Drawing::Size(67, 52);
			this->exit_btn->TabIndex = 5;
			this->exit_btn->UseVisualStyleBackColor = false;
			this->exit_btn->Click += gcnew System::EventHandler(this, &login::exit_btn_Click);
			// 
			// login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1253, 720);
			this->Controls->Add(this->exit_btn);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->login_btn);
			this->Controls->Add(this->password_txt);
			this->DoubleBuffered = true;
			this->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"login";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Login";
			this->Load += gcnew System::EventHandler(this, &login::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {

	}
	

	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
   

	private: System::Void login_btnn(System::Object^ sender, System::EventArgs^ e) {
		bool flag = false;
		if (password_txt->Text->Length <= 0) {
			MessageBox::Show("Please Enter The Password");
		}
		else {
			for each (String ^ password in user_passes) 
			{
				if (password_txt->Text == password) 
				{
					Home^ home = gcnew Home();
					home->Show();
					this->Hide();
					flag = true;
					break;
				}
				else {
					continue;
			         }
			}
			if (flag == false) {
			
				MessageBox::Show("Wrong password");
				password_txt->Text ="";
			}
		}
	}


private: System::Void exit_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
};
}
