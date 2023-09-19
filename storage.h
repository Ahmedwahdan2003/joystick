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

		
			//
			//TODO: Add the constructor code here
			//
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
	private: System::Windows::Forms::Button^ button1;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(501, 540);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(195, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Connect to database ";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &storage::button1_Click);
			// 
			// storage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1280, 720);
			this->Controls->Add(this->button1);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"storage";
			this->Text = L"storage";
			this->Load += gcnew System::EventHandler(this, &storage::storage_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void storage_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Rooms_pnl_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		try
		{
			String^ connString = "Data Source=sql.bsite.net\\MSSQL2016;Persist Security Info=True;User ID=ahmedsameh_;Password=Admin1234";
			SqlConnection^ sqlConn = gcnew SqlConnection(connString);
			sqlConn->Open();
			MessageBox::Show("Connected to the database.");


			sqlConn->Close();
		}
		catch (Exception^ e)
		{
			MessageBox::Show("Failed to connect to the database.");
		}


	}
	};
}
