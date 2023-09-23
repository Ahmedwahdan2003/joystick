#pragma once

namespace joystick {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Drawing;
	using namespace System::Data;
	using namespace System::Data::SqlClient;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Summary for password
	/// </summary>
	public ref class password : public System::Windows::Forms::Form
	{
	public:
		password(void)
		{
			InitializeComponent();
			RetrieveAdminPassword(adminPasswordd);
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~password()
		{
			if (components)
			{
				delete components;
			}
		}
	private:String^ adminPasswordd;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ pass_txt;
	protected:

	private: System::Windows::Forms::Button^ submit_pass_btn;
	private: System::Windows::Forms::Button^ cancel;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(password::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pass_txt = (gcnew System::Windows::Forms::TextBox());
			this->submit_pass_btn = (gcnew System::Windows::Forms::Button());
			this->cancel = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label1->Location = System::Drawing::Point(174, 194);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(330, 46);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Enter password:  ";
			// 
			// pass_txt
			// 
			this->pass_txt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pass_txt->Location = System::Drawing::Point(182, 286);
			this->pass_txt->Name = L"pass_txt";
			this->pass_txt->PasswordChar = '*';
			this->pass_txt->Size = System::Drawing::Size(285, 45);
			this->pass_txt->TabIndex = 4;
			// 
			// submit_pass_btn
			// 
			this->submit_pass_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->submit_pass_btn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"submit_pass_btn.BackgroundImage")));
			this->submit_pass_btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->submit_pass_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->submit_pass_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->submit_pass_btn->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->submit_pass_btn->Location = System::Drawing::Point(231, 401);
			this->submit_pass_btn->Name = L"submit_pass_btn";
			this->submit_pass_btn->Size = System::Drawing::Size(167, 49);
			this->submit_pass_btn->TabIndex = 21;
			this->submit_pass_btn->Text = L"Submit";
			this->submit_pass_btn->UseVisualStyleBackColor = false;
			this->submit_pass_btn->Click += gcnew System::EventHandler(this, &password::submit_pass_btn_Click);
			// 
			// cancel
			// 
			this->cancel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->cancel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cancel.BackgroundImage")));
			this->cancel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->cancel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cancel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cancel->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->cancel->Location = System::Drawing::Point(475, 12);
			this->cancel->Name = L"cancel";
			this->cancel->Size = System::Drawing::Size(167, 49);
			this->cancel->TabIndex = 22;
			this->cancel->Text = L"BACK";
			this->cancel->UseVisualStyleBackColor = false;
			this->cancel->Click += gcnew System::EventHandler(this, &password::cancel_Click);
			// 
			// password
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(654, 584);
			this->Controls->Add(this->cancel);
			this->Controls->Add(this->submit_pass_btn);
			this->Controls->Add(this->pass_txt);
			this->Controls->Add(this->label1);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"password";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"password";
			this->Load += gcnew System::EventHandler(this, &password::password_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void submit_pass_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (pass_txt->Text->Length <= 0) { MessageBox::Show("Please Enter The Password"); }
		
		else if (pass_txt->Text == adminPasswordd) {
			this->DialogResult = System::Windows::Forms::DialogResult::OK;
			pass_txt->Text = "";
			this->Close();
		}
		else {

			MessageBox::Show(" Enta Men Yala  Enta msh 3m mohamed");
			pass_txt->Text = ""; // Clear the password input

		}



	}
		   private: System::Void RetrieveAdminPassword(String^% adminPassword) {
			   // Connection string to your SQL Server database
			   String^ connectionString = "Data Source=sql.bsite.net\\MSSQL2016;Persist Security Info=True;User ID=ahmedsameh_;Password=Admin1234";

			   // Create a SqlConnection
			   SqlConnection^ connection = gcnew SqlConnection(connectionString);

			   try {
				   connection->Open();

				   // SQL query to retrieve the password of the "admin" username
				   String^ query = "SELECT password FROM Users WHERE username = 'admin'";

				   // Create a SqlCommand
				   SqlCommand^ command = gcnew SqlCommand(query, connection);

				   // Execute the query and retrieve the password
				   Object^ result = command->ExecuteScalar();

				   // Check if a result was retrieved
				   if (result != nullptr) {
					   adminPassword = result->ToString();
				   }
				   else {
					   // Admin username not found or password is NULL
					   adminPassword = nullptr;
				   }
			   }
			   catch (Exception^ ex) {
				   MessageBox::Show("Error retrieving admin password: " + ex->Message);
				   adminPassword = nullptr;
			   }
			   finally {
				   connection->Close();
			   }
		   }
private: System::Void cancel_Click(System::Object^ sender, System::EventArgs^ e) {
	this->DialogResult = System::Windows::Forms::DialogResult::Cancel;
	this->Close();
}
private: System::Void password_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
