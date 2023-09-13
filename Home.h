#pragma once

namespace joystick {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Home
	/// </summary>
	public ref class Home : public System::Windows::Forms::Form
	{
	public:
		Home(void)
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
		~Home()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ exit_bt;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Home::typeid));
			this->exit_bt = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// exit_bt
			// 
			this->exit_bt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->exit_bt->Cursor = System::Windows::Forms::Cursors::Hand;
			this->exit_bt->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->exit_bt->FlatAppearance->BorderSize = 0;
			this->exit_bt->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->exit_bt->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->exit_bt->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->exit_bt->Location = System::Drawing::Point(1200, 7);
			this->exit_bt->Name = L"exit_bt";
			this->exit_bt->Size = System::Drawing::Size(43, 51);
			this->exit_bt->TabIndex = 0;
			this->exit_bt->UseVisualStyleBackColor = false;
			this->exit_bt->Click += gcnew System::EventHandler(this, &Home::exit_bt_Click);
			// 
			// Home
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1264, 681);
			this->Controls->Add(this->exit_bt);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Home";
			this->Text = L"Home";
			this->Load += gcnew System::EventHandler(this, &Home::Home_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Home_Load(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void exit_bt_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	};
}
