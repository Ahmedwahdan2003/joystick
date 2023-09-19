#pragma once
#include"used_classes.h"
#include<map>
#include <vcclr.h>
namespace joystick {
    
    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Data::SqlClient;
    using namespace System::Drawing;
    using namespace System::Collections::Generic;

    

    /// <summary>
    /// Summary for Room1
    /// </summary>
    public ref class Rooms : public System::Windows::Forms::Form
    {
    public:
        

        Rooms(void)
        {
            InitializeComponent();
            //timers for all the rooms
            countdown_timer1->Interval = 1000;
            stopwatch_timer1->Interval = 1000;
            countdown_timer2->Interval = 1000;
            stopwatch_timer2->Interval = 1000;
            countdown_timer3->Interval = 1000;
            stopwatch_timer3->Interval = 1000;
            countdown_timer4->Interval = 1000;
            stopwatch_timer4->Interval = 1000;
            countdown_timer5->Interval = 1000;
            stopwatch_timer5->Interval = 1000;
            countdown_timer6->Interval = 1000;
            stopwatch_timer6->Interval = 1000;
            countdown_timer7->Interval = 1000;
            stopwatch_timer7->Interval = 1000;
            countdown_timer8->Interval = 1000;
            stopwatch_timer8->Interval = 1000;
            //FetchItemPricesFromDatabase();      (method to get the items and their prices from the database)
            this->DoubleBuffered = true;
            
            //
            try
            {
                room1_order_cmbx->Items->Clear();
                room2_order_cmbx->Items->Clear();
                room3_order_cmbx->Items->Clear();
                room4_order_cmbx->Items->Clear();
                room5_order_cmbx->Items->Clear();
                room6_order_cmbx->Items->Clear();
                room7_order_cmbx->Items->Clear();
                room8_order_cmbx->Items->Clear();


                String^ connString = "Data Source=sql.bsite.net\\MSSQL2016;Persist Security Info=True;User ID=ahmedsameh_;Password=Admin1234";
                SqlConnection^ sqlConn = gcnew SqlConnection(connString);
                sqlConn->Open();

                String^ query = "SELECT name FROM items WHERE quantity > 0";
                SqlCommand^ command = gcnew SqlCommand(query, sqlConn);
                SqlDataReader^ reader = command->ExecuteReader();

                while (reader->Read())
                {
                    String^ value = reader->GetString(0);
                   
                        room1_order_cmbx->Items->Add(value);
                        room2_order_cmbx->Items->Add(value);
                        room3_order_cmbx->Items->Add(value);
                        room4_order_cmbx->Items->Add(value);
                        room5_order_cmbx->Items->Add(value);
                        room6_order_cmbx->Items->Add(value);
                        room7_order_cmbx->Items->Add(value);
                        room8_order_cmbx->Items->Add(value);
                    
                }

                reader->Close();
            }
            catch (Exception^ e)
            {
                MessageBox::Show("Failed to retrieve data from the database.");
            }
            
           
        

        }
        void data_combobox() {
            try
            {
                room1_order_cmbx->Items->Clear();
                room2_order_cmbx->Items->Clear();
                room3_order_cmbx->Items->Clear();
                room4_order_cmbx->Items->Clear();
                room5_order_cmbx->Items->Clear();
                room6_order_cmbx->Items->Clear();
                room7_order_cmbx->Items->Clear();
                room8_order_cmbx->Items->Clear();
                String^ connString = "Data Source=sql.bsite.net\\MSSQL2016;Persist Security Info=True;User ID=ahmedsameh_;Password=Admin1234";
                SqlConnection^ sqlConn = gcnew SqlConnection(connString);
                sqlConn->Open();

                String^ query = "SELECT name FROM items WHERE quantity > 0";
                SqlCommand^ command = gcnew SqlCommand(query, sqlConn);
                SqlDataReader^ reader = command->ExecuteReader();

                while (reader->Read())
                {
                    String^ value = reader->GetString(0);
         
                    room1_order_cmbx->Items->Add(value);
                    room2_order_cmbx->Items->Add(value);
                    room3_order_cmbx->Items->Add(value);
                    room4_order_cmbx->Items->Add(value);
                    room5_order_cmbx->Items->Add(value);
                    room6_order_cmbx->Items->Add(value);
                    room7_order_cmbx->Items->Add(value);
                    room8_order_cmbx->Items->Add(value);
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
        ~Rooms()
        {
            if (components)
            {
                delete components;
            }
        }
    private:Dictionary<String^, int>^ itemPrices = gcnew Dictionary<String^, int>();
    private:Dictionary<String^, int>^ room1_orders_map = gcnew Dictionary<String^, int>();
    private:Dictionary<String^, int>^ room2_orders_map = gcnew Dictionary<String^, int>();
    private:Dictionary<String^, int>^ room3_orders_map = gcnew Dictionary<String^, int>();
    private:Dictionary<String^, int>^ room4_orders_map = gcnew Dictionary<String^, int>();
    private:Dictionary<String^, int>^ room5_orders_map = gcnew Dictionary<String^, int>();
    private:Dictionary<String^, int>^ room6_orders_map = gcnew Dictionary<String^, int>();
    private:Dictionary<String^, int>^ room7_orders_map = gcnew Dictionary<String^, int>();
    private:Dictionary<String^, int>^ room8_orders_map = gcnew Dictionary<String^, int>();
    
    private: System::Windows::Forms::TabControl^ Rooms_tabs;
    protected:
    private: System::Windows::Forms::TabPage^ room1_tab;
    private: System::Windows::Forms::TabPage^ room2_tab;
    private: System::Windows::Forms::TabPage^ room3_tab;
    private: System::Windows::Forms::TabPage^ troom4_tab;
    private: System::Windows::Forms::TabPage^ room5_tab;
    private: System::Windows::Forms::TabPage^ billiard1_tab;
    private: System::Windows::Forms::TabPage^ billiard2_tab;
    private: System::Windows::Forms::TabPage^ pingpong_tab;

    private: System::Windows::Forms::TextBox^ textBoxHours1;
private: System::Windows::Forms::ComboBox^ room1_order_cmbx;


    private: System::Windows::Forms::Button^ room1_remove_btn;
    private: System::Windows::Forms::Button^ room1_add_btn;
    private: System::Windows::Forms::Button^ room1_endtime_btn;
    private: System::Windows::Forms::Button^ Room1_starttime_btn;
    private: System::Windows::Forms::Button^ room1_close_btn;
    private: System::Windows::Forms::TextBox^ room2_userinput_time;
    private: System::Windows::Forms::Button^ room2_closeroom_btn;






    private: System::Windows::Forms::ComboBox^ room2_order_cmbx;






    private: System::Windows::Forms::Button^ room2_add_btn;
    private: System::Windows::Forms::Button^ room2_remove_btn;



    private: System::Windows::Forms::Button^ room2_end_btn;

    private: System::Windows::Forms::Button^ room2_start_btn;

    private: System::Windows::Forms::Timer^ countdown_timer1;
    public: bool room1_available = true;
    public: bool room2_available = true;
    public: bool room3_available = true;
    public: bool room4_available = true;
    public: bool room5_available = true;
    private:DateTime endTime1;
    private:DateTime finalTime1;
    private:DateTime startTime1;
    private:DateTime endTime2;
    private:DateTime finalTime2;
    private:DateTime startTime2;
    private:DateTime endTime3;
    private:DateTime finalTime3;
    private:DateTime startTime3;
    private:DateTime endTime4;
    private:DateTime finalTime4;
    private:DateTime startTime4;
    private:DateTime endTime5;
    private:DateTime finalTime5;
    private:DateTime startTime5;
    private:DateTime endTime6;
    private:DateTime finalTime6;
    private:DateTime startTime6;
    private:DateTime endTime7;
    private:DateTime finalTime7;
    private:DateTime startTime7;
    private:DateTime endTime8;
    private:DateTime finalTime8;
    private:DateTime startTime8;
    private:bool room1_endtime_btn_click;
    private:bool room2_endtime_btn_click;
    private:bool room3_endtime_btn_click;
    private:bool room4_endtime_btn_click;
    private:bool room5_endtime_btn_click;
    private:bool room6_endtime_btn_click;
    private:bool room7_endtime_btn_click;
    private:bool room8_endtime_btn_click;
    private:bool room1_startTime_btn_click;
    private:bool room2_startTime_btn_click;
    private:bool room3_startTime_btn_click;
    private:bool room4_startTime_btn_click;
    private:bool room5_startTime_btn_click;
    private:bool room6_startTime_btn_click;
    private:bool room7_startTime_btn_click;
    private:bool room8_startTime_btn_click;
    private: System::Windows::Forms::Timer^ stopwatch_timer1;
    private: System::Windows::Forms::Label^ timeremaining1_lbl;
    private: System::Windows::Forms::Label^ timer1_lbl;
    private: System::Windows::Forms::Label^ timestarted1_lbl;
    private: System::Windows::Forms::FlowLayoutPanel^ room1_orders_pnl;
    private: System::Windows::Forms::FlowLayoutPanel^ room1_recipt_pnl;
    private: System::Windows::Forms::FlowLayoutPanel^ room2_recipt_pnl;
    private: System::Windows::Forms::FlowLayoutPanel^ room2_orders_pnl;
    private: System::Windows::Forms::Label^ room2_timeremaining_lbl;

    private: System::Windows::Forms::Label^ room2_timer_lbl;

    private: System::Windows::Forms::Label^ room2_timestarted_lbl;

    private: System::Windows::Forms::Timer^ countdown_timer2;
    private: System::Windows::Forms::Timer^ stopwatch_timer2;
private: System::Windows::Forms::FlowLayoutPanel^ room3_recipt_pnl;
private: System::Windows::Forms::FlowLayoutPanel^ room3_orders_pnl;
private: System::Windows::Forms::Button^ room3_close_btn;
private: System::Windows::Forms::Button^ room3_add_btn;
private: System::Windows::Forms::Button^ room3_remove_btn;
private: System::Windows::Forms::Button^ room3_end_btn;
private: System::Windows::Forms::Button^ room3_start_btn;
private: System::Windows::Forms::ComboBox^ room3_order_cmbx;
private: System::Windows::Forms::TextBox^ room3_userinput_time;
private: System::Windows::Forms::Label^ room3_timeremaining_lbl;
private: System::Windows::Forms::Label^ room3_timer_lbl;
private: System::Windows::Forms::Label^ room3_timestarted_lbl;
private: System::Windows::Forms::ComboBox^ room4_order_cmbx;
private: System::Windows::Forms::TextBox^ room4_userinput_time;


private: System::Windows::Forms::Button^ room4_close_btn;

private: System::Windows::Forms::Button^ room4_add_btn;
private: System::Windows::Forms::Button^ room4_remove_btn;


private: System::Windows::Forms::Button^ room4_end_btn;

private: System::Windows::Forms::Button^ room4_start_btn;

private: System::Windows::Forms::FlowLayoutPanel^ room4_recipt_pnl;

private: System::Windows::Forms::FlowLayoutPanel^ room4_orders_pnl;

private: System::Windows::Forms::Label^ room4_timeremaining_lbl;

private: System::Windows::Forms::Label^ room4_timer_lbl;

private: System::Windows::Forms::Label^ room4_timestarted_lbl;
private: System::Windows::Forms::ComboBox^ room5_order_cmbx;

private: System::Windows::Forms::TextBox^ room5_userinput_time;
private: System::Windows::Forms::Button^ room5_close_btn;
private: System::Windows::Forms::Button^ room5_add_btn;
private: System::Windows::Forms::Button^ room5_remove_btn;
private: System::Windows::Forms::Button^ room5_end_btn;
private: System::Windows::Forms::Button^ room5_start_btn;
private: System::Windows::Forms::FlowLayoutPanel^ room5_recipt_pnl;
private: System::Windows::Forms::FlowLayoutPanel^ room5_orders_pnl;
private: System::Windows::Forms::Label^ room5_timeremaining_lbl;
private: System::Windows::Forms::Label^ room5_timer_lbl;
private: System::Windows::Forms::Label^ room5_timestarted_lbl;
private: System::Windows::Forms::ComboBox^ room6_order_cmbx;

private: System::Windows::Forms::TextBox^ room6_userinput_time;
private: System::Windows::Forms::Button^ room6_close_btn;
private: System::Windows::Forms::Button^ room6_add_btn;
private: System::Windows::Forms::Button^ room6_remove_btn;
private: System::Windows::Forms::Button^ room6_end_btn;
private: System::Windows::Forms::Button^ room6_start_btn;
private: System::Windows::Forms::FlowLayoutPanel^ room6_recipt_pnl;
private: System::Windows::Forms::FlowLayoutPanel^ room6_orders_pnl;
private: System::Windows::Forms::Label^ room6_timeremaining_lbl;
private: System::Windows::Forms::Label^ room6_timer_lbl;
private: System::Windows::Forms::Label^ room6_timestarted_lbl;
private: System::Windows::Forms::ComboBox^ room7_order_cmbx;

private: System::Windows::Forms::TextBox^ room7_userinput_time;
private: System::Windows::Forms::Button^ room7_close_btn;
private: System::Windows::Forms::Button^ room7_remove_btn;
private: System::Windows::Forms::Button^ room7_add_btn;
private: System::Windows::Forms::Button^ room7_end_btn;
private: System::Windows::Forms::Button^ room7_start_btn;
private: System::Windows::Forms::FlowLayoutPanel^ room7_recipt_pnl;
private: System::Windows::Forms::FlowLayoutPanel^ room7_orders_pnl;
private: System::Windows::Forms::Label^ room7_timeremaining_lbl;
private: System::Windows::Forms::Label^ room7_timer_lbl;
private: System::Windows::Forms::Label^ room7_timestarted_lbl;
private: System::Windows::Forms::Button^ room8_close_btn;
private: System::Windows::Forms::Button^ room8_add_btn;
private: System::Windows::Forms::Button^ room8_remove_btn;
private: System::Windows::Forms::Button^ room8_end_btn;
private: System::Windows::Forms::Button^ room8_start_btn;
private: System::Windows::Forms::ComboBox^ room8_order_cmbx;

private: System::Windows::Forms::TextBox^ room8_userinput_time;

private: System::Windows::Forms::FlowLayoutPanel^ room8_recipt_pnl;
private: System::Windows::Forms::FlowLayoutPanel^ room8_orders_pnl;
private: System::Windows::Forms::Label^ room8_timeremaining_lbl;
private: System::Windows::Forms::Label^ room8_timer_lbl;
private: System::Windows::Forms::Label^ room8_timestarted_lbl;
private: System::Windows::Forms::Timer^ stopwatch_timer3;
private: System::Windows::Forms::Timer^ countdown_timer3;
private: System::Windows::Forms::Timer^ stopwatch_timer4;
private: System::Windows::Forms::Timer^ countdown_timer4;
private: System::Windows::Forms::Timer^ countdown_timer5;
private: System::Windows::Forms::Timer^ stopwatch_timer5;
private: System::Windows::Forms::Timer^ countdown_timer6;
private: System::Windows::Forms::Timer^ stopwatch_timer6;
private: System::Windows::Forms::Timer^ countdown_timer7;
private: System::Windows::Forms::Timer^ stopwatch_timer7;
private: System::Windows::Forms::Timer^ countdown_timer8;
private: System::Windows::Forms::Timer^ stopwatch_timer8;
private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::ComboBox^ room1_mode_cmbx;

private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::ComboBox^ room2_mode_cmbx;

private: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::ComboBox^ room3_mode_cmbx;

private: System::Windows::Forms::Label^ label4;
private: System::Windows::Forms::ComboBox^ room4_mode_cmbx;

private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::ComboBox^ room5_mode_cmbx;





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
            this->components = (gcnew System::ComponentModel::Container());
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Rooms::typeid));
            this->Rooms_tabs = (gcnew System::Windows::Forms::TabControl());
            this->room1_tab = (gcnew System::Windows::Forms::TabPage());
            this->room1_recipt_pnl = (gcnew System::Windows::Forms::FlowLayoutPanel());
            this->room1_orders_pnl = (gcnew System::Windows::Forms::FlowLayoutPanel());
            this->timeremaining1_lbl = (gcnew System::Windows::Forms::Label());
            this->timer1_lbl = (gcnew System::Windows::Forms::Label());
            this->timestarted1_lbl = (gcnew System::Windows::Forms::Label());
            this->textBoxHours1 = (gcnew System::Windows::Forms::TextBox());
            this->room1_order_cmbx = (gcnew System::Windows::Forms::ComboBox());
            this->room1_remove_btn = (gcnew System::Windows::Forms::Button());
            this->room1_add_btn = (gcnew System::Windows::Forms::Button());
            this->room1_endtime_btn = (gcnew System::Windows::Forms::Button());
            this->Room1_starttime_btn = (gcnew System::Windows::Forms::Button());
            this->room1_close_btn = (gcnew System::Windows::Forms::Button());
            this->room2_tab = (gcnew System::Windows::Forms::TabPage());
            this->room2_timeremaining_lbl = (gcnew System::Windows::Forms::Label());
            this->room2_timer_lbl = (gcnew System::Windows::Forms::Label());
            this->room2_timestarted_lbl = (gcnew System::Windows::Forms::Label());
            this->room2_recipt_pnl = (gcnew System::Windows::Forms::FlowLayoutPanel());
            this->room2_orders_pnl = (gcnew System::Windows::Forms::FlowLayoutPanel());
            this->room2_add_btn = (gcnew System::Windows::Forms::Button());
            this->room2_remove_btn = (gcnew System::Windows::Forms::Button());
            this->room2_end_btn = (gcnew System::Windows::Forms::Button());
            this->room2_start_btn = (gcnew System::Windows::Forms::Button());
            this->room2_order_cmbx = (gcnew System::Windows::Forms::ComboBox());
            this->room2_closeroom_btn = (gcnew System::Windows::Forms::Button());
            this->room2_userinput_time = (gcnew System::Windows::Forms::TextBox());
            this->room3_tab = (gcnew System::Windows::Forms::TabPage());
            this->room3_recipt_pnl = (gcnew System::Windows::Forms::FlowLayoutPanel());
            this->room3_orders_pnl = (gcnew System::Windows::Forms::FlowLayoutPanel());
            this->room3_close_btn = (gcnew System::Windows::Forms::Button());
            this->room3_add_btn = (gcnew System::Windows::Forms::Button());
            this->room3_remove_btn = (gcnew System::Windows::Forms::Button());
            this->room3_end_btn = (gcnew System::Windows::Forms::Button());
            this->room3_start_btn = (gcnew System::Windows::Forms::Button());
            this->room3_order_cmbx = (gcnew System::Windows::Forms::ComboBox());
            this->room3_userinput_time = (gcnew System::Windows::Forms::TextBox());
            this->room3_timeremaining_lbl = (gcnew System::Windows::Forms::Label());
            this->room3_timer_lbl = (gcnew System::Windows::Forms::Label());
            this->room3_timestarted_lbl = (gcnew System::Windows::Forms::Label());
            this->troom4_tab = (gcnew System::Windows::Forms::TabPage());
            this->room4_order_cmbx = (gcnew System::Windows::Forms::ComboBox());
            this->room4_userinput_time = (gcnew System::Windows::Forms::TextBox());
            this->room4_close_btn = (gcnew System::Windows::Forms::Button());
            this->room4_add_btn = (gcnew System::Windows::Forms::Button());
            this->room4_remove_btn = (gcnew System::Windows::Forms::Button());
            this->room4_end_btn = (gcnew System::Windows::Forms::Button());
            this->room4_start_btn = (gcnew System::Windows::Forms::Button());
            this->room4_recipt_pnl = (gcnew System::Windows::Forms::FlowLayoutPanel());
            this->room4_orders_pnl = (gcnew System::Windows::Forms::FlowLayoutPanel());
            this->room4_timeremaining_lbl = (gcnew System::Windows::Forms::Label());
            this->room4_timer_lbl = (gcnew System::Windows::Forms::Label());
            this->room4_timestarted_lbl = (gcnew System::Windows::Forms::Label());
            this->room5_tab = (gcnew System::Windows::Forms::TabPage());
            this->room5_order_cmbx = (gcnew System::Windows::Forms::ComboBox());
            this->room5_userinput_time = (gcnew System::Windows::Forms::TextBox());
            this->room5_close_btn = (gcnew System::Windows::Forms::Button());
            this->room5_add_btn = (gcnew System::Windows::Forms::Button());
            this->room5_remove_btn = (gcnew System::Windows::Forms::Button());
            this->room5_end_btn = (gcnew System::Windows::Forms::Button());
            this->room5_start_btn = (gcnew System::Windows::Forms::Button());
            this->room5_recipt_pnl = (gcnew System::Windows::Forms::FlowLayoutPanel());
            this->room5_orders_pnl = (gcnew System::Windows::Forms::FlowLayoutPanel());
            this->room5_timeremaining_lbl = (gcnew System::Windows::Forms::Label());
            this->room5_timer_lbl = (gcnew System::Windows::Forms::Label());
            this->room5_timestarted_lbl = (gcnew System::Windows::Forms::Label());
            this->billiard1_tab = (gcnew System::Windows::Forms::TabPage());
            this->room6_order_cmbx = (gcnew System::Windows::Forms::ComboBox());
            this->room6_userinput_time = (gcnew System::Windows::Forms::TextBox());
            this->room6_close_btn = (gcnew System::Windows::Forms::Button());
            this->room6_add_btn = (gcnew System::Windows::Forms::Button());
            this->room6_remove_btn = (gcnew System::Windows::Forms::Button());
            this->room6_end_btn = (gcnew System::Windows::Forms::Button());
            this->room6_start_btn = (gcnew System::Windows::Forms::Button());
            this->room6_recipt_pnl = (gcnew System::Windows::Forms::FlowLayoutPanel());
            this->room6_orders_pnl = (gcnew System::Windows::Forms::FlowLayoutPanel());
            this->room6_timeremaining_lbl = (gcnew System::Windows::Forms::Label());
            this->room6_timer_lbl = (gcnew System::Windows::Forms::Label());
            this->room6_timestarted_lbl = (gcnew System::Windows::Forms::Label());
            this->billiard2_tab = (gcnew System::Windows::Forms::TabPage());
            this->room7_order_cmbx = (gcnew System::Windows::Forms::ComboBox());
            this->room7_userinput_time = (gcnew System::Windows::Forms::TextBox());
            this->room7_close_btn = (gcnew System::Windows::Forms::Button());
            this->room7_remove_btn = (gcnew System::Windows::Forms::Button());
            this->room7_add_btn = (gcnew System::Windows::Forms::Button());
            this->room7_end_btn = (gcnew System::Windows::Forms::Button());
            this->room7_start_btn = (gcnew System::Windows::Forms::Button());
            this->room7_recipt_pnl = (gcnew System::Windows::Forms::FlowLayoutPanel());
            this->room7_orders_pnl = (gcnew System::Windows::Forms::FlowLayoutPanel());
            this->room7_timeremaining_lbl = (gcnew System::Windows::Forms::Label());
            this->room7_timer_lbl = (gcnew System::Windows::Forms::Label());
            this->room7_timestarted_lbl = (gcnew System::Windows::Forms::Label());
            this->pingpong_tab = (gcnew System::Windows::Forms::TabPage());
            this->room8_close_btn = (gcnew System::Windows::Forms::Button());
            this->room8_add_btn = (gcnew System::Windows::Forms::Button());
            this->room8_remove_btn = (gcnew System::Windows::Forms::Button());
            this->room8_end_btn = (gcnew System::Windows::Forms::Button());
            this->room8_start_btn = (gcnew System::Windows::Forms::Button());
            this->room8_order_cmbx = (gcnew System::Windows::Forms::ComboBox());
            this->room8_userinput_time = (gcnew System::Windows::Forms::TextBox());
            this->room8_recipt_pnl = (gcnew System::Windows::Forms::FlowLayoutPanel());
            this->room8_orders_pnl = (gcnew System::Windows::Forms::FlowLayoutPanel());
            this->room8_timeremaining_lbl = (gcnew System::Windows::Forms::Label());
            this->room8_timer_lbl = (gcnew System::Windows::Forms::Label());
            this->room8_timestarted_lbl = (gcnew System::Windows::Forms::Label());
            this->countdown_timer1 = (gcnew System::Windows::Forms::Timer(this->components));
            this->stopwatch_timer1 = (gcnew System::Windows::Forms::Timer(this->components));
            this->countdown_timer2 = (gcnew System::Windows::Forms::Timer(this->components));
            this->stopwatch_timer2 = (gcnew System::Windows::Forms::Timer(this->components));
            this->stopwatch_timer3 = (gcnew System::Windows::Forms::Timer(this->components));
            this->countdown_timer3 = (gcnew System::Windows::Forms::Timer(this->components));
            this->stopwatch_timer4 = (gcnew System::Windows::Forms::Timer(this->components));
            this->countdown_timer4 = (gcnew System::Windows::Forms::Timer(this->components));
            this->countdown_timer5 = (gcnew System::Windows::Forms::Timer(this->components));
            this->stopwatch_timer5 = (gcnew System::Windows::Forms::Timer(this->components));
            this->countdown_timer6 = (gcnew System::Windows::Forms::Timer(this->components));
            this->stopwatch_timer6 = (gcnew System::Windows::Forms::Timer(this->components));
            this->countdown_timer7 = (gcnew System::Windows::Forms::Timer(this->components));
            this->stopwatch_timer7 = (gcnew System::Windows::Forms::Timer(this->components));
            this->countdown_timer8 = (gcnew System::Windows::Forms::Timer(this->components));
            this->stopwatch_timer8 = (gcnew System::Windows::Forms::Timer(this->components));
            this->room1_mode_cmbx = (gcnew System::Windows::Forms::ComboBox());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->room2_mode_cmbx = (gcnew System::Windows::Forms::ComboBox());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->room3_mode_cmbx = (gcnew System::Windows::Forms::ComboBox());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->room4_mode_cmbx = (gcnew System::Windows::Forms::ComboBox());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->room5_mode_cmbx = (gcnew System::Windows::Forms::ComboBox());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->Rooms_tabs->SuspendLayout();
            this->room1_tab->SuspendLayout();
            this->room2_tab->SuspendLayout();
            this->room3_tab->SuspendLayout();
            this->troom4_tab->SuspendLayout();
            this->room5_tab->SuspendLayout();
            this->billiard1_tab->SuspendLayout();
            this->billiard2_tab->SuspendLayout();
            this->pingpong_tab->SuspendLayout();
            this->SuspendLayout();
            // 
            // Rooms_tabs
            // 
            this->Rooms_tabs->Controls->Add(this->room1_tab);
            this->Rooms_tabs->Controls->Add(this->room2_tab);
            this->Rooms_tabs->Controls->Add(this->room3_tab);
            this->Rooms_tabs->Controls->Add(this->troom4_tab);
            this->Rooms_tabs->Controls->Add(this->room5_tab);
            this->Rooms_tabs->Controls->Add(this->billiard1_tab);
            this->Rooms_tabs->Controls->Add(this->billiard2_tab);
            this->Rooms_tabs->Controls->Add(this->pingpong_tab);
            this->Rooms_tabs->Dock = System::Windows::Forms::DockStyle::Fill;
            this->Rooms_tabs->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->Rooms_tabs->Location = System::Drawing::Point(0, 0);
            this->Rooms_tabs->Name = L"Rooms_tabs";
            this->Rooms_tabs->SelectedIndex = 0;
            this->Rooms_tabs->Size = System::Drawing::Size(1400, 780);
            this->Rooms_tabs->TabIndex = 0;
            this->Rooms_tabs->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Rooms::Rooms_tabs_KeyPress);
            // 
            // room1_tab
            // 
            this->room1_tab->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"room1_tab.BackgroundImage")));
            this->room1_tab->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->room1_tab->Controls->Add(this->label1);
            this->room1_tab->Controls->Add(this->room1_mode_cmbx);
            this->room1_tab->Controls->Add(this->room1_recipt_pnl);
            this->room1_tab->Controls->Add(this->room1_orders_pnl);
            this->room1_tab->Controls->Add(this->timeremaining1_lbl);
            this->room1_tab->Controls->Add(this->timer1_lbl);
            this->room1_tab->Controls->Add(this->timestarted1_lbl);
            this->room1_tab->Controls->Add(this->textBoxHours1);
            this->room1_tab->Controls->Add(this->room1_order_cmbx);
            this->room1_tab->Controls->Add(this->room1_remove_btn);
            this->room1_tab->Controls->Add(this->room1_add_btn);
            this->room1_tab->Controls->Add(this->room1_endtime_btn);
            this->room1_tab->Controls->Add(this->Room1_starttime_btn);
            this->room1_tab->Controls->Add(this->room1_close_btn);
            this->room1_tab->Location = System::Drawing::Point(4, 36);
            this->room1_tab->Name = L"room1_tab";
            this->room1_tab->Padding = System::Windows::Forms::Padding(3);
            this->room1_tab->Size = System::Drawing::Size(1392, 740);
            this->room1_tab->TabIndex = 0;
            this->room1_tab->Text = L"ROOM1";
            this->room1_tab->UseVisualStyleBackColor = true;
            this->room1_tab->Click += gcnew System::EventHandler(this, &Rooms::room1_tab_Click);
            // 
            // room1_recipt_pnl
            // 
            this->room1_recipt_pnl->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->room1_recipt_pnl->ForeColor = System::Drawing::Color::White;
            this->room1_recipt_pnl->Location = System::Drawing::Point(764, 98);
            this->room1_recipt_pnl->Name = L"room1_recipt_pnl";
            this->room1_recipt_pnl->Size = System::Drawing::Size(529, 227);
            this->room1_recipt_pnl->TabIndex = 17;
            // 
            // room1_orders_pnl
            // 
            this->room1_orders_pnl->Location = System::Drawing::Point(8, 333);
            this->room1_orders_pnl->Name = L"room1_orders_pnl";
            this->room1_orders_pnl->Size = System::Drawing::Size(397, 383);
            this->room1_orders_pnl->TabIndex = 16;
            // 
            // timeremaining1_lbl
            // 
            this->timeremaining1_lbl->AutoSize = true;
            this->timeremaining1_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->timeremaining1_lbl->Location = System::Drawing::Point(248, 199);
            this->timeremaining1_lbl->Name = L"timeremaining1_lbl";
            this->timeremaining1_lbl->Size = System::Drawing::Size(135, 37);
            this->timeremaining1_lbl->TabIndex = 15;
            this->timeremaining1_lbl->Text = L"00:00:00";
            // 
            // timer1_lbl
            // 
            this->timer1_lbl->AutoSize = true;
            this->timer1_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->timer1_lbl->Location = System::Drawing::Point(248, 138);
            this->timer1_lbl->Name = L"timer1_lbl";
            this->timer1_lbl->Size = System::Drawing::Size(135, 37);
            this->timer1_lbl->TabIndex = 14;
            this->timer1_lbl->Text = L"00:00:00";
            // 
            // timestarted1_lbl
            // 
            this->timestarted1_lbl->AutoSize = true;
            this->timestarted1_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->timestarted1_lbl->Location = System::Drawing::Point(248, 78);
            this->timestarted1_lbl->Name = L"timestarted1_lbl";
            this->timestarted1_lbl->Size = System::Drawing::Size(135, 37);
            this->timestarted1_lbl->TabIndex = 13;
            this->timestarted1_lbl->Text = L"00:00:00";
            // 
            // textBoxHours1
            // 
            this->textBoxHours1->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->textBoxHours1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->textBoxHours1->Location = System::Drawing::Point(592, 408);
            this->textBoxHours1->Name = L"textBoxHours1";
            this->textBoxHours1->Size = System::Drawing::Size(148, 22);
            this->textBoxHours1->TabIndex = 10;
            this->textBoxHours1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Rooms::textBoxHours1_KeyPress);
            // 
            // room1_order_cmbx
            // 
            this->room1_order_cmbx->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->room1_order_cmbx->ForeColor = System::Drawing::Color::Black;
            this->room1_order_cmbx->FormattingEnabled = true;
            this->room1_order_cmbx->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"indomy", L"pepsi", L"fury" });
            this->room1_order_cmbx->Location = System::Drawing::Point(1003, 402);
            this->room1_order_cmbx->Name = L"room1_order_cmbx";
            this->room1_order_cmbx->Size = System::Drawing::Size(350, 35);
            this->room1_order_cmbx->TabIndex = 9;
            // 
            // room1_remove_btn
            // 
            this->room1_remove_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->room1_remove_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room1_remove_btn->Cursor = System::Windows::Forms::Cursors::Hand;
            this->room1_remove_btn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room1_remove_btn->FlatAppearance->BorderSize = 0;
            this->room1_remove_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room1_remove_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room1_remove_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->room1_remove_btn->Location = System::Drawing::Point(1056, 574);
            this->room1_remove_btn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->room1_remove_btn->Name = L"room1_remove_btn";
            this->room1_remove_btn->Size = System::Drawing::Size(237, 56);
            this->room1_remove_btn->TabIndex = 8;
            this->room1_remove_btn->UseVisualStyleBackColor = false;
            this->room1_remove_btn->Click += gcnew System::EventHandler(this, &Rooms::room1_remove_btn_Click);
            // 
            // room1_add_btn
            // 
            this->room1_add_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->room1_add_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room1_add_btn->Cursor = System::Windows::Forms::Cursors::Hand;
            this->room1_add_btn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room1_add_btn->FlatAppearance->BorderSize = 0;
            this->room1_add_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room1_add_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room1_add_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->room1_add_btn->Location = System::Drawing::Point(1069, 483);
            this->room1_add_btn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->room1_add_btn->Name = L"room1_add_btn";
            this->room1_add_btn->Size = System::Drawing::Size(224, 60);
            this->room1_add_btn->TabIndex = 7;
            this->room1_add_btn->UseVisualStyleBackColor = false;
            this->room1_add_btn->Click += gcnew System::EventHandler(this, &Rooms::room1_add_btn_Click);
            // 
            // room1_endtime_btn
            // 
            this->room1_endtime_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->room1_endtime_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room1_endtime_btn->Cursor = System::Windows::Forms::Cursors::Hand;
            this->room1_endtime_btn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room1_endtime_btn->FlatAppearance->BorderSize = 0;
            this->room1_endtime_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room1_endtime_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room1_endtime_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->room1_endtime_btn->Location = System::Drawing::Point(578, 584);
            this->room1_endtime_btn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->room1_endtime_btn->Name = L"room1_endtime_btn";
            this->room1_endtime_btn->Size = System::Drawing::Size(177, 46);
            this->room1_endtime_btn->TabIndex = 6;
            this->room1_endtime_btn->UseVisualStyleBackColor = false;
            this->room1_endtime_btn->Click += gcnew System::EventHandler(this, &Rooms::room1_endtime_btn_Click);
            // 
            // Room1_starttime_btn
            // 
            this->Room1_starttime_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->Room1_starttime_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->Room1_starttime_btn->Cursor = System::Windows::Forms::Cursors::Hand;
            this->Room1_starttime_btn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->Room1_starttime_btn->FlatAppearance->BorderSize = 0;
            this->Room1_starttime_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->Room1_starttime_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->Room1_starttime_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->Room1_starttime_btn->Location = System::Drawing::Point(578, 483);
            this->Room1_starttime_btn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->Room1_starttime_btn->Name = L"Room1_starttime_btn";
            this->Room1_starttime_btn->Size = System::Drawing::Size(163, 60);
            this->Room1_starttime_btn->TabIndex = 5;
            this->Room1_starttime_btn->UseVisualStyleBackColor = false;
            this->Room1_starttime_btn->Click += gcnew System::EventHandler(this, &Rooms::Room1_starttime_btn_Click);
            // 
            // room1_close_btn
            // 
            this->room1_close_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->room1_close_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room1_close_btn->Cursor = System::Windows::Forms::Cursors::Hand;
            this->room1_close_btn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room1_close_btn->FlatAppearance->BorderSize = 0;
            this->room1_close_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room1_close_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room1_close_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->room1_close_btn->Location = System::Drawing::Point(1172, 17);
            this->room1_close_btn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->room1_close_btn->Name = L"room1_close_btn";
            this->room1_close_btn->Size = System::Drawing::Size(181, 49);
            this->room1_close_btn->TabIndex = 4;
            this->room1_close_btn->UseVisualStyleBackColor = false;
            this->room1_close_btn->Click += gcnew System::EventHandler(this, &Rooms::room1_close_btn_Click);
            // 
            // room2_tab
            // 
            this->room2_tab->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"room2_tab.BackgroundImage")));
            this->room2_tab->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->room2_tab->Controls->Add(this->label2);
            this->room2_tab->Controls->Add(this->room2_mode_cmbx);
            this->room2_tab->Controls->Add(this->room2_timeremaining_lbl);
            this->room2_tab->Controls->Add(this->room2_timer_lbl);
            this->room2_tab->Controls->Add(this->room2_timestarted_lbl);
            this->room2_tab->Controls->Add(this->room2_recipt_pnl);
            this->room2_tab->Controls->Add(this->room2_orders_pnl);
            this->room2_tab->Controls->Add(this->room2_add_btn);
            this->room2_tab->Controls->Add(this->room2_remove_btn);
            this->room2_tab->Controls->Add(this->room2_end_btn);
            this->room2_tab->Controls->Add(this->room2_start_btn);
            this->room2_tab->Controls->Add(this->room2_order_cmbx);
            this->room2_tab->Controls->Add(this->room2_closeroom_btn);
            this->room2_tab->Controls->Add(this->room2_userinput_time);
            this->room2_tab->Location = System::Drawing::Point(4, 36);
            this->room2_tab->Name = L"room2_tab";
            this->room2_tab->Padding = System::Windows::Forms::Padding(3);
            this->room2_tab->Size = System::Drawing::Size(1392, 740);
            this->room2_tab->TabIndex = 1;
            this->room2_tab->Text = L"ROOM2";
            this->room2_tab->UseVisualStyleBackColor = true;
            this->room2_tab->Click += gcnew System::EventHandler(this, &Rooms::room2_tab_Click);
            // 
            // room2_timeremaining_lbl
            // 
            this->room2_timeremaining_lbl->AutoSize = true;
            this->room2_timeremaining_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->room2_timeremaining_lbl->Location = System::Drawing::Point(246, 198);
            this->room2_timeremaining_lbl->Name = L"room2_timeremaining_lbl";
            this->room2_timeremaining_lbl->Size = System::Drawing::Size(135, 37);
            this->room2_timeremaining_lbl->TabIndex = 25;
            this->room2_timeremaining_lbl->Text = L"00:00:00";
            // 
            // room2_timer_lbl
            // 
            this->room2_timer_lbl->AutoSize = true;
            this->room2_timer_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->room2_timer_lbl->Location = System::Drawing::Point(246, 139);
            this->room2_timer_lbl->Name = L"room2_timer_lbl";
            this->room2_timer_lbl->Size = System::Drawing::Size(135, 37);
            this->room2_timer_lbl->TabIndex = 24;
            this->room2_timer_lbl->Text = L"00:00:00";
            // 
            // room2_timestarted_lbl
            // 
            this->room2_timestarted_lbl->AutoSize = true;
            this->room2_timestarted_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->room2_timestarted_lbl->Location = System::Drawing::Point(246, 80);
            this->room2_timestarted_lbl->Name = L"room2_timestarted_lbl";
            this->room2_timestarted_lbl->Size = System::Drawing::Size(135, 37);
            this->room2_timestarted_lbl->TabIndex = 23;
            this->room2_timestarted_lbl->Text = L"00:00:00";
            // 
            // room2_recipt_pnl
            // 
            this->room2_recipt_pnl->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->room2_recipt_pnl->ForeColor = System::Drawing::Color::WhiteSmoke;
            this->room2_recipt_pnl->Location = System::Drawing::Point(755, 92);
            this->room2_recipt_pnl->Name = L"room2_recipt_pnl";
            this->room2_recipt_pnl->Size = System::Drawing::Size(518, 241);
            this->room2_recipt_pnl->TabIndex = 17;
            // 
            // room2_orders_pnl
            // 
            this->room2_orders_pnl->AutoScroll = true;
            this->room2_orders_pnl->Location = System::Drawing::Point(8, 335);
            this->room2_orders_pnl->Name = L"room2_orders_pnl";
            this->room2_orders_pnl->Size = System::Drawing::Size(397, 377);
            this->room2_orders_pnl->TabIndex = 22;
            // 
            // room2_add_btn
            // 
            this->room2_add_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->room2_add_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room2_add_btn->Cursor = System::Windows::Forms::Cursors::Hand;
            this->room2_add_btn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room2_add_btn->FlatAppearance->BorderSize = 0;
            this->room2_add_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room2_add_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room2_add_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->room2_add_btn->Location = System::Drawing::Point(1062, 495);
            this->room2_add_btn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->room2_add_btn->Name = L"room2_add_btn";
            this->room2_add_btn->Size = System::Drawing::Size(225, 41);
            this->room2_add_btn->TabIndex = 21;
            this->room2_add_btn->UseVisualStyleBackColor = false;
            this->room2_add_btn->Click += gcnew System::EventHandler(this, &Rooms::room2_add_btn_Click);
            // 
            // room2_remove_btn
            // 
            this->room2_remove_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->room2_remove_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room2_remove_btn->Cursor = System::Windows::Forms::Cursors::Hand;
            this->room2_remove_btn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room2_remove_btn->FlatAppearance->BorderSize = 0;
            this->room2_remove_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room2_remove_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room2_remove_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->room2_remove_btn->Location = System::Drawing::Point(1072, 582);
            this->room2_remove_btn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->room2_remove_btn->Name = L"room2_remove_btn";
            this->room2_remove_btn->Size = System::Drawing::Size(201, 41);
            this->room2_remove_btn->TabIndex = 20;
            this->room2_remove_btn->UseVisualStyleBackColor = false;
            this->room2_remove_btn->Click += gcnew System::EventHandler(this, &Rooms::room2_remove_btn_Click);
            // 
            // room2_end_btn
            // 
            this->room2_end_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->room2_end_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room2_end_btn->Cursor = System::Windows::Forms::Cursors::Hand;
            this->room2_end_btn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room2_end_btn->FlatAppearance->BorderSize = 0;
            this->room2_end_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room2_end_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room2_end_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->room2_end_btn->Location = System::Drawing::Point(575, 577);
            this->room2_end_btn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->room2_end_btn->Name = L"room2_end_btn";
            this->room2_end_btn->Size = System::Drawing::Size(176, 51);
            this->room2_end_btn->TabIndex = 19;
            this->room2_end_btn->UseVisualStyleBackColor = false;
            this->room2_end_btn->Click += gcnew System::EventHandler(this, &Rooms::room2_end_btn_Click);
            // 
            // room2_start_btn
            // 
            this->room2_start_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->room2_start_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room2_start_btn->Cursor = System::Windows::Forms::Cursors::Hand;
            this->room2_start_btn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room2_start_btn->FlatAppearance->BorderSize = 0;
            this->room2_start_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room2_start_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room2_start_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->room2_start_btn->Location = System::Drawing::Point(575, 495);
            this->room2_start_btn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->room2_start_btn->Name = L"room2_start_btn";
            this->room2_start_btn->Size = System::Drawing::Size(176, 41);
            this->room2_start_btn->TabIndex = 18;
            this->room2_start_btn->UseVisualStyleBackColor = false;
            this->room2_start_btn->Click += gcnew System::EventHandler(this, &Rooms::room2_start_btn_Click);
            // 
            // room2_order_cmbx
            // 
            this->room2_order_cmbx->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->room2_order_cmbx->FormattingEnabled = true;
            this->room2_order_cmbx->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"indomy", L"pepsi", L"fury" });
            this->room2_order_cmbx->Location = System::Drawing::Point(999, 405);
            this->room2_order_cmbx->Name = L"room2_order_cmbx";
            this->room2_order_cmbx->Size = System::Drawing::Size(356, 35);
            this->room2_order_cmbx->TabIndex = 17;
            // 
            // room2_closeroom_btn
            // 
            this->room2_closeroom_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room2_closeroom_btn->Cursor = System::Windows::Forms::Cursors::Hand;
            this->room2_closeroom_btn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room2_closeroom_btn->FlatAppearance->BorderSize = 0;
            this->room2_closeroom_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room2_closeroom_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room2_closeroom_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->room2_closeroom_btn->Location = System::Drawing::Point(1176, 23);
            this->room2_closeroom_btn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->room2_closeroom_btn->Name = L"room2_closeroom_btn";
            this->room2_closeroom_btn->Size = System::Drawing::Size(179, 39);
            this->room2_closeroom_btn->TabIndex = 16;
            this->room2_closeroom_btn->UseVisualStyleBackColor = false;
            this->room2_closeroom_btn->Click += gcnew System::EventHandler(this, &Rooms::room2_closeroom_btn_Click);
            // 
            // room2_userinput_time
            // 
            this->room2_userinput_time->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->room2_userinput_time->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->room2_userinput_time->Location = System::Drawing::Point(598, 405);
            this->room2_userinput_time->Name = L"room2_userinput_time";
            this->room2_userinput_time->Size = System::Drawing::Size(136, 31);
            this->room2_userinput_time->TabIndex = 11;
            this->room2_userinput_time->TextChanged += gcnew System::EventHandler(this, &Rooms::room2_user_time_TextChanged);
            this->room2_userinput_time->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Rooms::room2_userinput_time_KeyPress);
            // 
            // room3_tab
            // 
            this->room3_tab->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"room3_tab.BackgroundImage")));
            this->room3_tab->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->room3_tab->Controls->Add(this->label3);
            this->room3_tab->Controls->Add(this->room3_mode_cmbx);
            this->room3_tab->Controls->Add(this->room3_recipt_pnl);
            this->room3_tab->Controls->Add(this->room3_orders_pnl);
            this->room3_tab->Controls->Add(this->room3_close_btn);
            this->room3_tab->Controls->Add(this->room3_add_btn);
            this->room3_tab->Controls->Add(this->room3_remove_btn);
            this->room3_tab->Controls->Add(this->room3_end_btn);
            this->room3_tab->Controls->Add(this->room3_start_btn);
            this->room3_tab->Controls->Add(this->room3_order_cmbx);
            this->room3_tab->Controls->Add(this->room3_userinput_time);
            this->room3_tab->Controls->Add(this->room3_timeremaining_lbl);
            this->room3_tab->Controls->Add(this->room3_timer_lbl);
            this->room3_tab->Controls->Add(this->room3_timestarted_lbl);
            this->room3_tab->Location = System::Drawing::Point(4, 36);
            this->room3_tab->Name = L"room3_tab";
            this->room3_tab->Padding = System::Windows::Forms::Padding(3);
            this->room3_tab->Size = System::Drawing::Size(1392, 740);
            this->room3_tab->TabIndex = 2;
            this->room3_tab->Text = L"ROOM3";
            this->room3_tab->UseVisualStyleBackColor = true;
            // 
            // room3_recipt_pnl
            // 
            this->room3_recipt_pnl->AutoScroll = true;
            this->room3_recipt_pnl->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->room3_recipt_pnl->ForeColor = System::Drawing::Color::WhiteSmoke;
            this->room3_recipt_pnl->Location = System::Drawing::Point(744, 95);
            this->room3_recipt_pnl->Name = L"room3_recipt_pnl";
            this->room3_recipt_pnl->Size = System::Drawing::Size(588, 243);
            this->room3_recipt_pnl->TabIndex = 35;
            // 
            // room3_orders_pnl
            // 
            this->room3_orders_pnl->AutoScroll = true;
            this->room3_orders_pnl->Location = System::Drawing::Point(8, 337);
            this->room3_orders_pnl->Name = L"room3_orders_pnl";
            this->room3_orders_pnl->Size = System::Drawing::Size(397, 377);
            this->room3_orders_pnl->TabIndex = 34;
            // 
            // room3_close_btn
            // 
            this->room3_close_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->room3_close_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room3_close_btn->Cursor = System::Windows::Forms::Cursors::Hand;
            this->room3_close_btn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room3_close_btn->FlatAppearance->BorderSize = 0;
            this->room3_close_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room3_close_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room3_close_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->room3_close_btn->Location = System::Drawing::Point(1167, 18);
            this->room3_close_btn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->room3_close_btn->Name = L"room3_close_btn";
            this->room3_close_btn->Size = System::Drawing::Size(195, 51);
            this->room3_close_btn->TabIndex = 33;
            this->room3_close_btn->UseVisualStyleBackColor = false;
            this->room3_close_btn->Click += gcnew System::EventHandler(this, &Rooms::room3_close_btn_Click);
            // 
            // room3_add_btn
            // 
            this->room3_add_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->room3_add_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room3_add_btn->Cursor = System::Windows::Forms::Cursors::Hand;
            this->room3_add_btn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room3_add_btn->FlatAppearance->BorderSize = 0;
            this->room3_add_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room3_add_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room3_add_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->room3_add_btn->Location = System::Drawing::Point(1071, 494);
            this->room3_add_btn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->room3_add_btn->Name = L"room3_add_btn";
            this->room3_add_btn->Size = System::Drawing::Size(219, 41);
            this->room3_add_btn->TabIndex = 32;
            this->room3_add_btn->UseVisualStyleBackColor = false;
            this->room3_add_btn->Click += gcnew System::EventHandler(this, &Rooms::room3_add_btn_Click);
            // 
            // room3_remove_btn
            // 
            this->room3_remove_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->room3_remove_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room3_remove_btn->Cursor = System::Windows::Forms::Cursors::Hand;
            this->room3_remove_btn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room3_remove_btn->FlatAppearance->BorderSize = 0;
            this->room3_remove_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room3_remove_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room3_remove_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->room3_remove_btn->Location = System::Drawing::Point(1071, 582);
            this->room3_remove_btn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->room3_remove_btn->Name = L"room3_remove_btn";
            this->room3_remove_btn->Size = System::Drawing::Size(212, 41);
            this->room3_remove_btn->TabIndex = 31;
            this->room3_remove_btn->UseVisualStyleBackColor = false;
            this->room3_remove_btn->Click += gcnew System::EventHandler(this, &Rooms::room3_remove_btn_Click);
            // 
            // room3_end_btn
            // 
            this->room3_end_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->room3_end_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room3_end_btn->Cursor = System::Windows::Forms::Cursors::Hand;
            this->room3_end_btn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room3_end_btn->FlatAppearance->BorderSize = 0;
            this->room3_end_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room3_end_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room3_end_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->room3_end_btn->Location = System::Drawing::Point(576, 582);
            this->room3_end_btn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->room3_end_btn->Name = L"room3_end_btn";
            this->room3_end_btn->Size = System::Drawing::Size(176, 41);
            this->room3_end_btn->TabIndex = 30;
            this->room3_end_btn->UseVisualStyleBackColor = false;
            this->room3_end_btn->Click += gcnew System::EventHandler(this, &Rooms::room3_end_btn_Click);
            // 
            // room3_start_btn
            // 
            this->room3_start_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->room3_start_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room3_start_btn->Cursor = System::Windows::Forms::Cursors::Hand;
            this->room3_start_btn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room3_start_btn->FlatAppearance->BorderSize = 0;
            this->room3_start_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room3_start_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room3_start_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->room3_start_btn->Location = System::Drawing::Point(576, 494);
            this->room3_start_btn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->room3_start_btn->Name = L"room3_start_btn";
            this->room3_start_btn->Size = System::Drawing::Size(176, 41);
            this->room3_start_btn->TabIndex = 29;
            this->room3_start_btn->UseVisualStyleBackColor = false;
            this->room3_start_btn->Click += gcnew System::EventHandler(this, &Rooms::room3_start_btn_Click);
            // 
            // room3_order_cmbx
            // 
            this->room3_order_cmbx->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->room3_order_cmbx->FormattingEnabled = true;
            this->room3_order_cmbx->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"indomy", L"pepsi", L"fury" });
            this->room3_order_cmbx->Location = System::Drawing::Point(997, 405);
            this->room3_order_cmbx->Name = L"room3_order_cmbx";
            this->room3_order_cmbx->Size = System::Drawing::Size(356, 35);
            this->room3_order_cmbx->TabIndex = 28;
            // 
            // room3_userinput_time
            // 
            this->room3_userinput_time->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->room3_userinput_time->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->room3_userinput_time->Location = System::Drawing::Point(599, 405);
            this->room3_userinput_time->Name = L"room3_userinput_time";
            this->room3_userinput_time->Size = System::Drawing::Size(136, 31);
            this->room3_userinput_time->TabIndex = 27;
            // 
            // room3_timeremaining_lbl
            // 
            this->room3_timeremaining_lbl->AutoSize = true;
            this->room3_timeremaining_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->room3_timeremaining_lbl->Location = System::Drawing::Point(248, 196);
            this->room3_timeremaining_lbl->Name = L"room3_timeremaining_lbl";
            this->room3_timeremaining_lbl->Size = System::Drawing::Size(135, 37);
            this->room3_timeremaining_lbl->TabIndex = 26;
            this->room3_timeremaining_lbl->Text = L"00:00:00";
            // 
            // room3_timer_lbl
            // 
            this->room3_timer_lbl->AutoSize = true;
            this->room3_timer_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->room3_timer_lbl->Location = System::Drawing::Point(248, 140);
            this->room3_timer_lbl->Name = L"room3_timer_lbl";
            this->room3_timer_lbl->Size = System::Drawing::Size(135, 37);
            this->room3_timer_lbl->TabIndex = 25;
            this->room3_timer_lbl->Text = L"00:00:00";
            // 
            // room3_timestarted_lbl
            // 
            this->room3_timestarted_lbl->AutoSize = true;
            this->room3_timestarted_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->room3_timestarted_lbl->Location = System::Drawing::Point(248, 77);
            this->room3_timestarted_lbl->Name = L"room3_timestarted_lbl";
            this->room3_timestarted_lbl->Size = System::Drawing::Size(135, 37);
            this->room3_timestarted_lbl->TabIndex = 24;
            this->room3_timestarted_lbl->Text = L"00:00:00";
            // 
            // troom4_tab
            // 
            this->troom4_tab->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"troom4_tab.BackgroundImage")));
            this->troom4_tab->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->troom4_tab->Controls->Add(this->label4);
            this->troom4_tab->Controls->Add(this->room4_mode_cmbx);
            this->troom4_tab->Controls->Add(this->room4_order_cmbx);
            this->troom4_tab->Controls->Add(this->room4_userinput_time);
            this->troom4_tab->Controls->Add(this->room4_close_btn);
            this->troom4_tab->Controls->Add(this->room4_add_btn);
            this->troom4_tab->Controls->Add(this->room4_remove_btn);
            this->troom4_tab->Controls->Add(this->room4_end_btn);
            this->troom4_tab->Controls->Add(this->room4_start_btn);
            this->troom4_tab->Controls->Add(this->room4_recipt_pnl);
            this->troom4_tab->Controls->Add(this->room4_orders_pnl);
            this->troom4_tab->Controls->Add(this->room4_timeremaining_lbl);
            this->troom4_tab->Controls->Add(this->room4_timer_lbl);
            this->troom4_tab->Controls->Add(this->room4_timestarted_lbl);
            this->troom4_tab->Location = System::Drawing::Point(4, 36);
            this->troom4_tab->Name = L"troom4_tab";
            this->troom4_tab->Padding = System::Windows::Forms::Padding(3);
            this->troom4_tab->Size = System::Drawing::Size(1392, 740);
            this->troom4_tab->TabIndex = 3;
            this->troom4_tab->Text = L"ROOM4";
            this->troom4_tab->UseVisualStyleBackColor = true;
            // 
            // room4_order_cmbx
            // 
            this->room4_order_cmbx->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->room4_order_cmbx->FormattingEnabled = true;
            this->room4_order_cmbx->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"indomy", L"pepsi", L"fury" });
            this->room4_order_cmbx->Location = System::Drawing::Point(1000, 405);
            this->room4_order_cmbx->Name = L"room4_order_cmbx";
            this->room4_order_cmbx->Size = System::Drawing::Size(356, 35);
            this->room4_order_cmbx->TabIndex = 42;
            // 
            // room4_userinput_time
            // 
            this->room4_userinput_time->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->room4_userinput_time->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->room4_userinput_time->Location = System::Drawing::Point(597, 405);
            this->room4_userinput_time->Name = L"room4_userinput_time";
            this->room4_userinput_time->Size = System::Drawing::Size(136, 31);
            this->room4_userinput_time->TabIndex = 41;
            this->room4_userinput_time->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Rooms::room4_userinput_time_KeyPress);
            // 
            // room4_close_btn
            // 
            this->room4_close_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->room4_close_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room4_close_btn->Cursor = System::Windows::Forms::Cursors::Hand;
            this->room4_close_btn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room4_close_btn->FlatAppearance->BorderSize = 0;
            this->room4_close_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room4_close_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room4_close_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->room4_close_btn->Location = System::Drawing::Point(1167, 22);
            this->room4_close_btn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->room4_close_btn->Name = L"room4_close_btn";
            this->room4_close_btn->Size = System::Drawing::Size(189, 41);
            this->room4_close_btn->TabIndex = 40;
            this->room4_close_btn->UseVisualStyleBackColor = false;
            this->room4_close_btn->Click += gcnew System::EventHandler(this, &Rooms::room4_close_btn_Click);
            // 
            // room4_add_btn
            // 
            this->room4_add_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->room4_add_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room4_add_btn->Cursor = System::Windows::Forms::Cursors::Hand;
            this->room4_add_btn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room4_add_btn->FlatAppearance->BorderSize = 0;
            this->room4_add_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room4_add_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room4_add_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->room4_add_btn->Location = System::Drawing::Point(1068, 494);
            this->room4_add_btn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->room4_add_btn->Name = L"room4_add_btn";
            this->room4_add_btn->Size = System::Drawing::Size(219, 41);
            this->room4_add_btn->TabIndex = 39;
            this->room4_add_btn->UseVisualStyleBackColor = false;
            this->room4_add_btn->Click += gcnew System::EventHandler(this, &Rooms::room4_add_btn_Click);
            // 
            // room4_remove_btn
            // 
            this->room4_remove_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->room4_remove_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room4_remove_btn->Cursor = System::Windows::Forms::Cursors::Hand;
            this->room4_remove_btn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room4_remove_btn->FlatAppearance->BorderSize = 0;
            this->room4_remove_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room4_remove_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room4_remove_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->room4_remove_btn->Location = System::Drawing::Point(1068, 580);
            this->room4_remove_btn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->room4_remove_btn->Name = L"room4_remove_btn";
            this->room4_remove_btn->Size = System::Drawing::Size(214, 41);
            this->room4_remove_btn->TabIndex = 38;
            this->room4_remove_btn->UseVisualStyleBackColor = false;
            this->room4_remove_btn->Click += gcnew System::EventHandler(this, &Rooms::room4_remove_btn_Click);
            // 
            // room4_end_btn
            // 
            this->room4_end_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->room4_end_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room4_end_btn->Cursor = System::Windows::Forms::Cursors::Hand;
            this->room4_end_btn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room4_end_btn->FlatAppearance->BorderSize = 0;
            this->room4_end_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room4_end_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room4_end_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->room4_end_btn->Location = System::Drawing::Point(576, 580);
            this->room4_end_btn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->room4_end_btn->Name = L"room4_end_btn";
            this->room4_end_btn->Size = System::Drawing::Size(176, 41);
            this->room4_end_btn->TabIndex = 37;
            this->room4_end_btn->UseVisualStyleBackColor = false;
            this->room4_end_btn->Click += gcnew System::EventHandler(this, &Rooms::room4_end_btn_Click);
            // 
            // room4_start_btn
            // 
            this->room4_start_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->room4_start_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room4_start_btn->Cursor = System::Windows::Forms::Cursors::Hand;
            this->room4_start_btn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room4_start_btn->FlatAppearance->BorderSize = 0;
            this->room4_start_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room4_start_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room4_start_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->room4_start_btn->Location = System::Drawing::Point(576, 494);
            this->room4_start_btn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->room4_start_btn->Name = L"room4_start_btn";
            this->room4_start_btn->Size = System::Drawing::Size(176, 41);
            this->room4_start_btn->TabIndex = 36;
            this->room4_start_btn->UseVisualStyleBackColor = false;
            this->room4_start_btn->Click += gcnew System::EventHandler(this, &Rooms::room4_start_btn_Click);
            // 
            // room4_recipt_pnl
            // 
            this->room4_recipt_pnl->AutoScroll = true;
            this->room4_recipt_pnl->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->room4_recipt_pnl->ForeColor = System::Drawing::Color::WhiteSmoke;
            this->room4_recipt_pnl->Location = System::Drawing::Point(765, 108);
            this->room4_recipt_pnl->Name = L"room4_recipt_pnl";
            this->room4_recipt_pnl->Size = System::Drawing::Size(546, 227);
            this->room4_recipt_pnl->TabIndex = 35;
            // 
            // room4_orders_pnl
            // 
            this->room4_orders_pnl->AutoScroll = true;
            this->room4_orders_pnl->Location = System::Drawing::Point(17, 337);
            this->room4_orders_pnl->Name = L"room4_orders_pnl";
            this->room4_orders_pnl->Size = System::Drawing::Size(397, 377);
            this->room4_orders_pnl->TabIndex = 35;
            // 
            // room4_timeremaining_lbl
            // 
            this->room4_timeremaining_lbl->AutoSize = true;
            this->room4_timeremaining_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->room4_timeremaining_lbl->Location = System::Drawing::Point(246, 197);
            this->room4_timeremaining_lbl->Name = L"room4_timeremaining_lbl";
            this->room4_timeremaining_lbl->Size = System::Drawing::Size(135, 37);
            this->room4_timeremaining_lbl->TabIndex = 27;
            this->room4_timeremaining_lbl->Text = L"00:00:00";
            // 
            // room4_timer_lbl
            // 
            this->room4_timer_lbl->AutoSize = true;
            this->room4_timer_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->room4_timer_lbl->Location = System::Drawing::Point(246, 139);
            this->room4_timer_lbl->Name = L"room4_timer_lbl";
            this->room4_timer_lbl->Size = System::Drawing::Size(135, 37);
            this->room4_timer_lbl->TabIndex = 26;
            this->room4_timer_lbl->Text = L"00:00:00";
            // 
            // room4_timestarted_lbl
            // 
            this->room4_timestarted_lbl->AutoSize = true;
            this->room4_timestarted_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->room4_timestarted_lbl->Location = System::Drawing::Point(246, 78);
            this->room4_timestarted_lbl->Name = L"room4_timestarted_lbl";
            this->room4_timestarted_lbl->Size = System::Drawing::Size(135, 37);
            this->room4_timestarted_lbl->TabIndex = 25;
            this->room4_timestarted_lbl->Text = L"00:00:00";
            // 
            // room5_tab
            // 
            this->room5_tab->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"room5_tab.BackgroundImage")));
            this->room5_tab->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->room5_tab->Controls->Add(this->label5);
            this->room5_tab->Controls->Add(this->room5_mode_cmbx);
            this->room5_tab->Controls->Add(this->room5_order_cmbx);
            this->room5_tab->Controls->Add(this->room5_userinput_time);
            this->room5_tab->Controls->Add(this->room5_close_btn);
            this->room5_tab->Controls->Add(this->room5_add_btn);
            this->room5_tab->Controls->Add(this->room5_remove_btn);
            this->room5_tab->Controls->Add(this->room5_end_btn);
            this->room5_tab->Controls->Add(this->room5_start_btn);
            this->room5_tab->Controls->Add(this->room5_recipt_pnl);
            this->room5_tab->Controls->Add(this->room5_orders_pnl);
            this->room5_tab->Controls->Add(this->room5_timeremaining_lbl);
            this->room5_tab->Controls->Add(this->room5_timer_lbl);
            this->room5_tab->Controls->Add(this->room5_timestarted_lbl);
            this->room5_tab->Location = System::Drawing::Point(4, 36);
            this->room5_tab->Name = L"room5_tab";
            this->room5_tab->Padding = System::Windows::Forms::Padding(3);
            this->room5_tab->Size = System::Drawing::Size(1392, 740);
            this->room5_tab->TabIndex = 4;
            this->room5_tab->Text = L"ROOM5";
            this->room5_tab->UseVisualStyleBackColor = true;
            // 
            // room5_order_cmbx
            // 
            this->room5_order_cmbx->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->room5_order_cmbx->FormattingEnabled = true;
            this->room5_order_cmbx->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"indomy", L"pepsi", L"fury" });
            this->room5_order_cmbx->Location = System::Drawing::Point(994, 406);
            this->room5_order_cmbx->Name = L"room5_order_cmbx";
            this->room5_order_cmbx->Size = System::Drawing::Size(356, 35);
            this->room5_order_cmbx->TabIndex = 44;
            // 
            // room5_userinput_time
            // 
            this->room5_userinput_time->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->room5_userinput_time->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->room5_userinput_time->Location = System::Drawing::Point(599, 406);
            this->room5_userinput_time->Name = L"room5_userinput_time";
            this->room5_userinput_time->Size = System::Drawing::Size(136, 31);
            this->room5_userinput_time->TabIndex = 43;
            this->room5_userinput_time->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Rooms::room5_userinput_time_KeyPress);
            // 
            // room5_close_btn
            // 
            this->room5_close_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->room5_close_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room5_close_btn->Cursor = System::Windows::Forms::Cursors::Hand;
            this->room5_close_btn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room5_close_btn->FlatAppearance->BorderSize = 0;
            this->room5_close_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room5_close_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room5_close_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->room5_close_btn->Location = System::Drawing::Point(1167, 21);
            this->room5_close_btn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->room5_close_btn->Name = L"room5_close_btn";
            this->room5_close_btn->Size = System::Drawing::Size(194, 45);
            this->room5_close_btn->TabIndex = 42;
            this->room5_close_btn->UseVisualStyleBackColor = false;
            this->room5_close_btn->Click += gcnew System::EventHandler(this, &Rooms::room5_close_btn_Click);
            // 
            // room5_add_btn
            // 
            this->room5_add_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->room5_add_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room5_add_btn->Cursor = System::Windows::Forms::Cursors::Hand;
            this->room5_add_btn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room5_add_btn->FlatAppearance->BorderSize = 0;
            this->room5_add_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room5_add_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room5_add_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->room5_add_btn->Location = System::Drawing::Point(1064, 494);
            this->room5_add_btn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->room5_add_btn->Name = L"room5_add_btn";
            this->room5_add_btn->Size = System::Drawing::Size(228, 41);
            this->room5_add_btn->TabIndex = 41;
            this->room5_add_btn->UseVisualStyleBackColor = false;
            this->room5_add_btn->Click += gcnew System::EventHandler(this, &Rooms::room5_add_btn_Click);
            // 
            // room5_remove_btn
            // 
            this->room5_remove_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->room5_remove_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room5_remove_btn->Cursor = System::Windows::Forms::Cursors::Hand;
            this->room5_remove_btn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room5_remove_btn->FlatAppearance->BorderSize = 0;
            this->room5_remove_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room5_remove_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room5_remove_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->room5_remove_btn->Location = System::Drawing::Point(1064, 583);
            this->room5_remove_btn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->room5_remove_btn->Name = L"room5_remove_btn";
            this->room5_remove_btn->Size = System::Drawing::Size(218, 41);
            this->room5_remove_btn->TabIndex = 40;
            this->room5_remove_btn->UseVisualStyleBackColor = false;
            this->room5_remove_btn->Click += gcnew System::EventHandler(this, &Rooms::room5_remove_btn_Click);
            // 
            // room5_end_btn
            // 
            this->room5_end_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->room5_end_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room5_end_btn->Cursor = System::Windows::Forms::Cursors::Hand;
            this->room5_end_btn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room5_end_btn->FlatAppearance->BorderSize = 0;
            this->room5_end_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room5_end_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room5_end_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->room5_end_btn->Location = System::Drawing::Point(578, 583);
            this->room5_end_btn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->room5_end_btn->Name = L"room5_end_btn";
            this->room5_end_btn->Size = System::Drawing::Size(176, 41);
            this->room5_end_btn->TabIndex = 39;
            this->room5_end_btn->UseVisualStyleBackColor = false;
            this->room5_end_btn->Click += gcnew System::EventHandler(this, &Rooms::room5_end_btn_Click);
            // 
            // room5_start_btn
            // 
            this->room5_start_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->room5_start_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room5_start_btn->Cursor = System::Windows::Forms::Cursors::Hand;
            this->room5_start_btn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room5_start_btn->FlatAppearance->BorderSize = 0;
            this->room5_start_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room5_start_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room5_start_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->room5_start_btn->Location = System::Drawing::Point(578, 494);
            this->room5_start_btn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->room5_start_btn->Name = L"room5_start_btn";
            this->room5_start_btn->Size = System::Drawing::Size(176, 41);
            this->room5_start_btn->TabIndex = 38;
            this->room5_start_btn->UseVisualStyleBackColor = false;
            this->room5_start_btn->Click += gcnew System::EventHandler(this, &Rooms::room5_start_btn_Click);
            // 
            // room5_recipt_pnl
            // 
            this->room5_recipt_pnl->AutoScroll = true;
            this->room5_recipt_pnl->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->room5_recipt_pnl->ForeColor = System::Drawing::Color::WhiteSmoke;
            this->room5_recipt_pnl->Location = System::Drawing::Point(754, 99);
            this->room5_recipt_pnl->Name = L"room5_recipt_pnl";
            this->room5_recipt_pnl->Size = System::Drawing::Size(583, 249);
            this->room5_recipt_pnl->TabIndex = 37;
            // 
            // room5_orders_pnl
            // 
            this->room5_orders_pnl->AutoScroll = true;
            this->room5_orders_pnl->Location = System::Drawing::Point(8, 339);
            this->room5_orders_pnl->Name = L"room5_orders_pnl";
            this->room5_orders_pnl->Size = System::Drawing::Size(397, 377);
            this->room5_orders_pnl->TabIndex = 36;
            // 
            // room5_timeremaining_lbl
            // 
            this->room5_timeremaining_lbl->AutoSize = true;
            this->room5_timeremaining_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->room5_timeremaining_lbl->Location = System::Drawing::Point(237, 198);
            this->room5_timeremaining_lbl->Name = L"room5_timeremaining_lbl";
            this->room5_timeremaining_lbl->Size = System::Drawing::Size(135, 37);
            this->room5_timeremaining_lbl->TabIndex = 28;
            this->room5_timeremaining_lbl->Text = L"00:00:00";
            // 
            // room5_timer_lbl
            // 
            this->room5_timer_lbl->AutoSize = true;
            this->room5_timer_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->room5_timer_lbl->Location = System::Drawing::Point(237, 135);
            this->room5_timer_lbl->Name = L"room5_timer_lbl";
            this->room5_timer_lbl->Size = System::Drawing::Size(135, 37);
            this->room5_timer_lbl->TabIndex = 27;
            this->room5_timer_lbl->Text = L"00:00:00";
            // 
            // room5_timestarted_lbl
            // 
            this->room5_timestarted_lbl->AutoSize = true;
            this->room5_timestarted_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->room5_timestarted_lbl->Location = System::Drawing::Point(237, 76);
            this->room5_timestarted_lbl->Name = L"room5_timestarted_lbl";
            this->room5_timestarted_lbl->Size = System::Drawing::Size(135, 37);
            this->room5_timestarted_lbl->TabIndex = 26;
            this->room5_timestarted_lbl->Text = L"00:00:00";
            // 
            // billiard1_tab
            // 
            this->billiard1_tab->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"billiard1_tab.BackgroundImage")));
            this->billiard1_tab->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->billiard1_tab->Controls->Add(this->room6_order_cmbx);
            this->billiard1_tab->Controls->Add(this->room6_userinput_time);
            this->billiard1_tab->Controls->Add(this->room6_close_btn);
            this->billiard1_tab->Controls->Add(this->room6_add_btn);
            this->billiard1_tab->Controls->Add(this->room6_remove_btn);
            this->billiard1_tab->Controls->Add(this->room6_end_btn);
            this->billiard1_tab->Controls->Add(this->room6_start_btn);
            this->billiard1_tab->Controls->Add(this->room6_recipt_pnl);
            this->billiard1_tab->Controls->Add(this->room6_orders_pnl);
            this->billiard1_tab->Controls->Add(this->room6_timeremaining_lbl);
            this->billiard1_tab->Controls->Add(this->room6_timer_lbl);
            this->billiard1_tab->Controls->Add(this->room6_timestarted_lbl);
            this->billiard1_tab->Location = System::Drawing::Point(4, 36);
            this->billiard1_tab->Name = L"billiard1_tab";
            this->billiard1_tab->Padding = System::Windows::Forms::Padding(3);
            this->billiard1_tab->Size = System::Drawing::Size(1392, 740);
            this->billiard1_tab->TabIndex = 5;
            this->billiard1_tab->Text = L"Billiard1";
            this->billiard1_tab->UseVisualStyleBackColor = true;
            // 
            // room6_order_cmbx
            // 
            this->room6_order_cmbx->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->room6_order_cmbx->FormattingEnabled = true;
            this->room6_order_cmbx->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"indomy", L"pepsi", L"fury" });
            this->room6_order_cmbx->Location = System::Drawing::Point(997, 403);
            this->room6_order_cmbx->Name = L"room6_order_cmbx";
            this->room6_order_cmbx->Size = System::Drawing::Size(356, 35);
            this->room6_order_cmbx->TabIndex = 45;
            // 
            // room6_userinput_time
            // 
            this->room6_userinput_time->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->room6_userinput_time->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->room6_userinput_time->Location = System::Drawing::Point(599, 407);
            this->room6_userinput_time->Name = L"room6_userinput_time";
            this->room6_userinput_time->Size = System::Drawing::Size(136, 31);
            this->room6_userinput_time->TabIndex = 44;
            this->room6_userinput_time->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Rooms::room6_userinput_time_KeyPress);
            // 
            // room6_close_btn
            // 
            this->room6_close_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->room6_close_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room6_close_btn->Cursor = System::Windows::Forms::Cursors::Hand;
            this->room6_close_btn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room6_close_btn->FlatAppearance->BorderSize = 0;
            this->room6_close_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room6_close_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room6_close_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->room6_close_btn->Location = System::Drawing::Point(1166, 20);
            this->room6_close_btn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->room6_close_btn->Name = L"room6_close_btn";
            this->room6_close_btn->Size = System::Drawing::Size(197, 41);
            this->room6_close_btn->TabIndex = 43;
            this->room6_close_btn->UseVisualStyleBackColor = false;
            this->room6_close_btn->Click += gcnew System::EventHandler(this, &Rooms::room6_close_btn_Click);
            // 
            // room6_add_btn
            // 
            this->room6_add_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->room6_add_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room6_add_btn->Cursor = System::Windows::Forms::Cursors::Hand;
            this->room6_add_btn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room6_add_btn->FlatAppearance->BorderSize = 0;
            this->room6_add_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room6_add_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room6_add_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->room6_add_btn->Location = System::Drawing::Point(1067, 494);
            this->room6_add_btn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->room6_add_btn->Name = L"room6_add_btn";
            this->room6_add_btn->Size = System::Drawing::Size(220, 41);
            this->room6_add_btn->TabIndex = 42;
            this->room6_add_btn->UseVisualStyleBackColor = false;
            this->room6_add_btn->Click += gcnew System::EventHandler(this, &Rooms::room6_add_btn_Click);
            // 
            // room6_remove_btn
            // 
            this->room6_remove_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->room6_remove_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room6_remove_btn->Cursor = System::Windows::Forms::Cursors::Hand;
            this->room6_remove_btn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room6_remove_btn->FlatAppearance->BorderSize = 0;
            this->room6_remove_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room6_remove_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room6_remove_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->room6_remove_btn->Location = System::Drawing::Point(1067, 582);
            this->room6_remove_btn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->room6_remove_btn->Name = L"room6_remove_btn";
            this->room6_remove_btn->Size = System::Drawing::Size(220, 41);
            this->room6_remove_btn->TabIndex = 41;
            this->room6_remove_btn->UseVisualStyleBackColor = false;
            this->room6_remove_btn->Click += gcnew System::EventHandler(this, &Rooms::room6_remove_btn_Click);
            // 
            // room6_end_btn
            // 
            this->room6_end_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->room6_end_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room6_end_btn->Cursor = System::Windows::Forms::Cursors::Hand;
            this->room6_end_btn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room6_end_btn->FlatAppearance->BorderSize = 0;
            this->room6_end_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room6_end_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room6_end_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->room6_end_btn->Location = System::Drawing::Point(576, 582);
            this->room6_end_btn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->room6_end_btn->Name = L"room6_end_btn";
            this->room6_end_btn->Size = System::Drawing::Size(176, 41);
            this->room6_end_btn->TabIndex = 40;
            this->room6_end_btn->UseVisualStyleBackColor = false;
            this->room6_end_btn->Click += gcnew System::EventHandler(this, &Rooms::room6_end_btn_Click);
            // 
            // room6_start_btn
            // 
            this->room6_start_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->room6_start_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room6_start_btn->Cursor = System::Windows::Forms::Cursors::Hand;
            this->room6_start_btn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room6_start_btn->FlatAppearance->BorderSize = 0;
            this->room6_start_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room6_start_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room6_start_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->room6_start_btn->Location = System::Drawing::Point(576, 494);
            this->room6_start_btn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->room6_start_btn->Name = L"room6_start_btn";
            this->room6_start_btn->Size = System::Drawing::Size(176, 41);
            this->room6_start_btn->TabIndex = 39;
            this->room6_start_btn->UseVisualStyleBackColor = false;
            this->room6_start_btn->Click += gcnew System::EventHandler(this, &Rooms::room6_start_btn_Click);
            // 
            // room6_recipt_pnl
            // 
            this->room6_recipt_pnl->AutoScroll = true;
            this->room6_recipt_pnl->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->room6_recipt_pnl->ForeColor = System::Drawing::Color::WhiteSmoke;
            this->room6_recipt_pnl->Location = System::Drawing::Point(763, 102);
            this->room6_recipt_pnl->Name = L"room6_recipt_pnl";
            this->room6_recipt_pnl->Size = System::Drawing::Size(524, 235);
            this->room6_recipt_pnl->TabIndex = 38;
            // 
            // room6_orders_pnl
            // 
            this->room6_orders_pnl->AutoScroll = true;
            this->room6_orders_pnl->Location = System::Drawing::Point(8, 340);
            this->room6_orders_pnl->Name = L"room6_orders_pnl";
            this->room6_orders_pnl->Size = System::Drawing::Size(397, 377);
            this->room6_orders_pnl->TabIndex = 37;
            // 
            // room6_timeremaining_lbl
            // 
            this->room6_timeremaining_lbl->AutoSize = true;
            this->room6_timeremaining_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->room6_timeremaining_lbl->Location = System::Drawing::Point(235, 197);
            this->room6_timeremaining_lbl->Name = L"room6_timeremaining_lbl";
            this->room6_timeremaining_lbl->Size = System::Drawing::Size(135, 37);
            this->room6_timeremaining_lbl->TabIndex = 29;
            this->room6_timeremaining_lbl->Text = L"00:00:00";
            // 
            // room6_timer_lbl
            // 
            this->room6_timer_lbl->AutoSize = true;
            this->room6_timer_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->room6_timer_lbl->Location = System::Drawing::Point(235, 136);
            this->room6_timer_lbl->Name = L"room6_timer_lbl";
            this->room6_timer_lbl->Size = System::Drawing::Size(135, 37);
            this->room6_timer_lbl->TabIndex = 28;
            this->room6_timer_lbl->Text = L"00:00:00";
            // 
            // room6_timestarted_lbl
            // 
            this->room6_timestarted_lbl->AutoSize = true;
            this->room6_timestarted_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->room6_timestarted_lbl->Location = System::Drawing::Point(235, 75);
            this->room6_timestarted_lbl->Name = L"room6_timestarted_lbl";
            this->room6_timestarted_lbl->Size = System::Drawing::Size(135, 37);
            this->room6_timestarted_lbl->TabIndex = 27;
            this->room6_timestarted_lbl->Text = L"00:00:00";
            // 
            // billiard2_tab
            // 
            this->billiard2_tab->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"billiard2_tab.BackgroundImage")));
            this->billiard2_tab->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->billiard2_tab->Controls->Add(this->room7_order_cmbx);
            this->billiard2_tab->Controls->Add(this->room7_userinput_time);
            this->billiard2_tab->Controls->Add(this->room7_close_btn);
            this->billiard2_tab->Controls->Add(this->room7_remove_btn);
            this->billiard2_tab->Controls->Add(this->room7_add_btn);
            this->billiard2_tab->Controls->Add(this->room7_end_btn);
            this->billiard2_tab->Controls->Add(this->room7_start_btn);
            this->billiard2_tab->Controls->Add(this->room7_recipt_pnl);
            this->billiard2_tab->Controls->Add(this->room7_orders_pnl);
            this->billiard2_tab->Controls->Add(this->room7_timeremaining_lbl);
            this->billiard2_tab->Controls->Add(this->room7_timer_lbl);
            this->billiard2_tab->Controls->Add(this->room7_timestarted_lbl);
            this->billiard2_tab->Location = System::Drawing::Point(4, 36);
            this->billiard2_tab->Name = L"billiard2_tab";
            this->billiard2_tab->Padding = System::Windows::Forms::Padding(3);
            this->billiard2_tab->Size = System::Drawing::Size(1392, 740);
            this->billiard2_tab->TabIndex = 6;
            this->billiard2_tab->Text = L"Billiard2";
            this->billiard2_tab->UseVisualStyleBackColor = true;
            // 
            // room7_order_cmbx
            // 
            this->room7_order_cmbx->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->room7_order_cmbx->FormattingEnabled = true;
            this->room7_order_cmbx->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"indomy", L"pepsi", L"fury" });
            this->room7_order_cmbx->Location = System::Drawing::Point(1004, 401);
            this->room7_order_cmbx->Name = L"room7_order_cmbx";
            this->room7_order_cmbx->Size = System::Drawing::Size(356, 35);
            this->room7_order_cmbx->TabIndex = 46;
            // 
            // room7_userinput_time
            // 
            this->room7_userinput_time->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->room7_userinput_time->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->room7_userinput_time->Location = System::Drawing::Point(598, 405);
            this->room7_userinput_time->Name = L"room7_userinput_time";
            this->room7_userinput_time->Size = System::Drawing::Size(136, 31);
            this->room7_userinput_time->TabIndex = 45;
            this->room7_userinput_time->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Rooms::room7_userinput_time_KeyPress);
            // 
            // room7_close_btn
            // 
            this->room7_close_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->room7_close_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room7_close_btn->Cursor = System::Windows::Forms::Cursors::Hand;
            this->room7_close_btn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room7_close_btn->FlatAppearance->BorderSize = 0;
            this->room7_close_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room7_close_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room7_close_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->room7_close_btn->Location = System::Drawing::Point(1167, 20);
            this->room7_close_btn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->room7_close_btn->Name = L"room7_close_btn";
            this->room7_close_btn->Size = System::Drawing::Size(193, 46);
            this->room7_close_btn->TabIndex = 44;
            this->room7_close_btn->UseVisualStyleBackColor = false;
            this->room7_close_btn->Click += gcnew System::EventHandler(this, &Rooms::room7_close_btn_Click);
            // 
            // room7_remove_btn
            // 
            this->room7_remove_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->room7_remove_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room7_remove_btn->Cursor = System::Windows::Forms::Cursors::Hand;
            this->room7_remove_btn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room7_remove_btn->FlatAppearance->BorderSize = 0;
            this->room7_remove_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room7_remove_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room7_remove_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->room7_remove_btn->Location = System::Drawing::Point(1070, 582);
            this->room7_remove_btn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->room7_remove_btn->Name = L"room7_remove_btn";
            this->room7_remove_btn->Size = System::Drawing::Size(218, 41);
            this->room7_remove_btn->TabIndex = 43;
            this->room7_remove_btn->UseVisualStyleBackColor = false;
            this->room7_remove_btn->Click += gcnew System::EventHandler(this, &Rooms::room7_remove_btn_Click);
            // 
            // room7_add_btn
            // 
            this->room7_add_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->room7_add_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room7_add_btn->Cursor = System::Windows::Forms::Cursors::Hand;
            this->room7_add_btn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room7_add_btn->FlatAppearance->BorderSize = 0;
            this->room7_add_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room7_add_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room7_add_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->room7_add_btn->Location = System::Drawing::Point(1070, 494);
            this->room7_add_btn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->room7_add_btn->Name = L"room7_add_btn";
            this->room7_add_btn->Size = System::Drawing::Size(218, 41);
            this->room7_add_btn->TabIndex = 42;
            this->room7_add_btn->UseVisualStyleBackColor = false;
            this->room7_add_btn->Click += gcnew System::EventHandler(this, &Rooms::room7_add_btn_Click);
            // 
            // room7_end_btn
            // 
            this->room7_end_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->room7_end_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room7_end_btn->Cursor = System::Windows::Forms::Cursors::Hand;
            this->room7_end_btn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room7_end_btn->FlatAppearance->BorderSize = 0;
            this->room7_end_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room7_end_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room7_end_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->room7_end_btn->Location = System::Drawing::Point(579, 582);
            this->room7_end_btn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->room7_end_btn->Name = L"room7_end_btn";
            this->room7_end_btn->Size = System::Drawing::Size(176, 41);
            this->room7_end_btn->TabIndex = 41;
            this->room7_end_btn->UseVisualStyleBackColor = false;
            this->room7_end_btn->Click += gcnew System::EventHandler(this, &Rooms::room7_end_btn_Click);
            // 
            // room7_start_btn
            // 
            this->room7_start_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->room7_start_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room7_start_btn->Cursor = System::Windows::Forms::Cursors::Hand;
            this->room7_start_btn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room7_start_btn->FlatAppearance->BorderSize = 0;
            this->room7_start_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room7_start_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room7_start_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->room7_start_btn->Location = System::Drawing::Point(579, 494);
            this->room7_start_btn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->room7_start_btn->Name = L"room7_start_btn";
            this->room7_start_btn->Size = System::Drawing::Size(176, 41);
            this->room7_start_btn->TabIndex = 40;
            this->room7_start_btn->UseVisualStyleBackColor = false;
            this->room7_start_btn->Click += gcnew System::EventHandler(this, &Rooms::room7_start_btn_Click);
            // 
            // room7_recipt_pnl
            // 
            this->room7_recipt_pnl->AutoScroll = true;
            this->room7_recipt_pnl->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->room7_recipt_pnl->ForeColor = System::Drawing::Color::WhiteSmoke;
            this->room7_recipt_pnl->Location = System::Drawing::Point(770, 94);
            this->room7_recipt_pnl->Name = L"room7_recipt_pnl";
            this->room7_recipt_pnl->Size = System::Drawing::Size(553, 238);
            this->room7_recipt_pnl->TabIndex = 39;
            // 
            // room7_orders_pnl
            // 
            this->room7_orders_pnl->AutoScroll = true;
            this->room7_orders_pnl->Location = System::Drawing::Point(8, 339);
            this->room7_orders_pnl->Name = L"room7_orders_pnl";
            this->room7_orders_pnl->Size = System::Drawing::Size(397, 377);
            this->room7_orders_pnl->TabIndex = 38;
            // 
            // room7_timeremaining_lbl
            // 
            this->room7_timeremaining_lbl->AutoSize = true;
            this->room7_timeremaining_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->room7_timeremaining_lbl->Location = System::Drawing::Point(248, 196);
            this->room7_timeremaining_lbl->Name = L"room7_timeremaining_lbl";
            this->room7_timeremaining_lbl->Size = System::Drawing::Size(135, 37);
            this->room7_timeremaining_lbl->TabIndex = 30;
            this->room7_timeremaining_lbl->Text = L"00:00:00";
            // 
            // room7_timer_lbl
            // 
            this->room7_timer_lbl->AutoSize = true;
            this->room7_timer_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->room7_timer_lbl->Location = System::Drawing::Point(248, 139);
            this->room7_timer_lbl->Name = L"room7_timer_lbl";
            this->room7_timer_lbl->Size = System::Drawing::Size(135, 37);
            this->room7_timer_lbl->TabIndex = 29;
            this->room7_timer_lbl->Text = L"00:00:00";
            // 
            // room7_timestarted_lbl
            // 
            this->room7_timestarted_lbl->AutoSize = true;
            this->room7_timestarted_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->room7_timestarted_lbl->Location = System::Drawing::Point(248, 82);
            this->room7_timestarted_lbl->Name = L"room7_timestarted_lbl";
            this->room7_timestarted_lbl->Size = System::Drawing::Size(135, 37);
            this->room7_timestarted_lbl->TabIndex = 28;
            this->room7_timestarted_lbl->Text = L"00:00:00";
            // 
            // pingpong_tab
            // 
            this->pingpong_tab->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pingpong_tab.BackgroundImage")));
            this->pingpong_tab->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->pingpong_tab->Controls->Add(this->room8_close_btn);
            this->pingpong_tab->Controls->Add(this->room8_add_btn);
            this->pingpong_tab->Controls->Add(this->room8_remove_btn);
            this->pingpong_tab->Controls->Add(this->room8_end_btn);
            this->pingpong_tab->Controls->Add(this->room8_start_btn);
            this->pingpong_tab->Controls->Add(this->room8_order_cmbx);
            this->pingpong_tab->Controls->Add(this->room8_userinput_time);
            this->pingpong_tab->Controls->Add(this->room8_recipt_pnl);
            this->pingpong_tab->Controls->Add(this->room8_orders_pnl);
            this->pingpong_tab->Controls->Add(this->room8_timeremaining_lbl);
            this->pingpong_tab->Controls->Add(this->room8_timer_lbl);
            this->pingpong_tab->Controls->Add(this->room8_timestarted_lbl);
            this->pingpong_tab->Location = System::Drawing::Point(4, 36);
            this->pingpong_tab->Name = L"pingpong_tab";
            this->pingpong_tab->Padding = System::Windows::Forms::Padding(3);
            this->pingpong_tab->Size = System::Drawing::Size(1392, 740);
            this->pingpong_tab->TabIndex = 7;
            this->pingpong_tab->Text = L"PING PONG";
            this->pingpong_tab->UseVisualStyleBackColor = true;
            this->pingpong_tab->Click += gcnew System::EventHandler(this, &Rooms::pingpong_tab_Click);
            // 
            // room8_close_btn
            // 
            this->room8_close_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->room8_close_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room8_close_btn->Cursor = System::Windows::Forms::Cursors::Hand;
            this->room8_close_btn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room8_close_btn->FlatAppearance->BorderSize = 0;
            this->room8_close_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room8_close_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room8_close_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->room8_close_btn->Location = System::Drawing::Point(1168, 20);
            this->room8_close_btn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->room8_close_btn->Name = L"room8_close_btn";
            this->room8_close_btn->Size = System::Drawing::Size(192, 44);
            this->room8_close_btn->TabIndex = 52;
            this->room8_close_btn->UseVisualStyleBackColor = false;
            this->room8_close_btn->Click += gcnew System::EventHandler(this, &Rooms::room8_close_btn_Click);
            // 
            // room8_add_btn
            // 
            this->room8_add_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->room8_add_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room8_add_btn->Cursor = System::Windows::Forms::Cursors::Hand;
            this->room8_add_btn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room8_add_btn->FlatAppearance->BorderSize = 0;
            this->room8_add_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room8_add_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room8_add_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->room8_add_btn->Location = System::Drawing::Point(1057, 494);
            this->room8_add_btn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->room8_add_btn->Name = L"room8_add_btn";
            this->room8_add_btn->Size = System::Drawing::Size(232, 41);
            this->room8_add_btn->TabIndex = 51;
            this->room8_add_btn->UseVisualStyleBackColor = false;
            this->room8_add_btn->Click += gcnew System::EventHandler(this, &Rooms::room8_add_btn_Click);
            // 
            // room8_remove_btn
            // 
            this->room8_remove_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->room8_remove_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room8_remove_btn->Cursor = System::Windows::Forms::Cursors::Hand;
            this->room8_remove_btn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room8_remove_btn->FlatAppearance->BorderSize = 0;
            this->room8_remove_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room8_remove_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room8_remove_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->room8_remove_btn->Location = System::Drawing::Point(1057, 583);
            this->room8_remove_btn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->room8_remove_btn->Name = L"room8_remove_btn";
            this->room8_remove_btn->Size = System::Drawing::Size(232, 41);
            this->room8_remove_btn->TabIndex = 50;
            this->room8_remove_btn->UseVisualStyleBackColor = false;
            this->room8_remove_btn->Click += gcnew System::EventHandler(this, &Rooms::room8_remove_btn_Click);
            // 
            // room8_end_btn
            // 
            this->room8_end_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->room8_end_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room8_end_btn->Cursor = System::Windows::Forms::Cursors::Hand;
            this->room8_end_btn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room8_end_btn->FlatAppearance->BorderSize = 0;
            this->room8_end_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room8_end_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room8_end_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->room8_end_btn->Location = System::Drawing::Point(576, 583);
            this->room8_end_btn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->room8_end_btn->Name = L"room8_end_btn";
            this->room8_end_btn->Size = System::Drawing::Size(176, 41);
            this->room8_end_btn->TabIndex = 49;
            this->room8_end_btn->UseVisualStyleBackColor = false;
            this->room8_end_btn->Click += gcnew System::EventHandler(this, &Rooms::room8_end_btn_Click);
            // 
            // room8_start_btn
            // 
            this->room8_start_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->room8_start_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room8_start_btn->Cursor = System::Windows::Forms::Cursors::Hand;
            this->room8_start_btn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room8_start_btn->FlatAppearance->BorderSize = 0;
            this->room8_start_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room8_start_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->room8_start_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->room8_start_btn->Location = System::Drawing::Point(576, 494);
            this->room8_start_btn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->room8_start_btn->Name = L"room8_start_btn";
            this->room8_start_btn->Size = System::Drawing::Size(176, 41);
            this->room8_start_btn->TabIndex = 48;
            this->room8_start_btn->UseVisualStyleBackColor = false;
            this->room8_start_btn->Click += gcnew System::EventHandler(this, &Rooms::room8_start_btn_Click);
            // 
            // room8_order_cmbx
            // 
            this->room8_order_cmbx->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->room8_order_cmbx->FormattingEnabled = true;
            this->room8_order_cmbx->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"indomy", L"pepsi", L"fury" });
            this->room8_order_cmbx->Location = System::Drawing::Point(998, 402);
            this->room8_order_cmbx->Name = L"room8_order_cmbx";
            this->room8_order_cmbx->Size = System::Drawing::Size(356, 35);
            this->room8_order_cmbx->TabIndex = 47;
            // 
            // room8_userinput_time
            // 
            this->room8_userinput_time->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->room8_userinput_time->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->room8_userinput_time->Location = System::Drawing::Point(600, 406);
            this->room8_userinput_time->Name = L"room8_userinput_time";
            this->room8_userinput_time->Size = System::Drawing::Size(136, 31);
            this->room8_userinput_time->TabIndex = 46;
            this->room8_userinput_time->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Rooms::troom8_userinput_time_KeyPress);
            // 
            // room8_recipt_pnl
            // 
            this->room8_recipt_pnl->AutoScroll = true;
            this->room8_recipt_pnl->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->room8_recipt_pnl->ForeColor = System::Drawing::Color::WhiteSmoke;
            this->room8_recipt_pnl->Location = System::Drawing::Point(754, 99);
            this->room8_recipt_pnl->Name = L"room8_recipt_pnl";
            this->room8_recipt_pnl->Size = System::Drawing::Size(579, 239);
            this->room8_recipt_pnl->TabIndex = 40;
            // 
            // room8_orders_pnl
            // 
            this->room8_orders_pnl->AutoScroll = true;
            this->room8_orders_pnl->Location = System::Drawing::Point(8, 340);
            this->room8_orders_pnl->Name = L"room8_orders_pnl";
            this->room8_orders_pnl->Size = System::Drawing::Size(397, 377);
            this->room8_orders_pnl->TabIndex = 39;
            // 
            // room8_timeremaining_lbl
            // 
            this->room8_timeremaining_lbl->AutoSize = true;
            this->room8_timeremaining_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->room8_timeremaining_lbl->Location = System::Drawing::Point(236, 197);
            this->room8_timeremaining_lbl->Name = L"room8_timeremaining_lbl";
            this->room8_timeremaining_lbl->Size = System::Drawing::Size(135, 37);
            this->room8_timeremaining_lbl->TabIndex = 31;
            this->room8_timeremaining_lbl->Text = L"00:00:00";
            // 
            // room8_timer_lbl
            // 
            this->room8_timer_lbl->AutoSize = true;
            this->room8_timer_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->room8_timer_lbl->Location = System::Drawing::Point(236, 140);
            this->room8_timer_lbl->Name = L"room8_timer_lbl";
            this->room8_timer_lbl->Size = System::Drawing::Size(135, 37);
            this->room8_timer_lbl->TabIndex = 30;
            this->room8_timer_lbl->Text = L"00:00:00";
            // 
            // room8_timestarted_lbl
            // 
            this->room8_timestarted_lbl->AutoSize = true;
            this->room8_timestarted_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->room8_timestarted_lbl->Location = System::Drawing::Point(236, 78);
            this->room8_timestarted_lbl->Name = L"room8_timestarted_lbl";
            this->room8_timestarted_lbl->Size = System::Drawing::Size(135, 37);
            this->room8_timestarted_lbl->TabIndex = 29;
            this->room8_timestarted_lbl->Text = L"00:00:00";
            // 
            // countdown_timer1
            // 
            this->countdown_timer1->Tick += gcnew System::EventHandler(this, &Rooms::countdown_timer1_tick);
            // 
            // stopwatch_timer1
            // 
            this->stopwatch_timer1->Tick += gcnew System::EventHandler(this, &Rooms::stopwatch_timer1_Tick);
            // 
            // countdown_timer2
            // 
            this->countdown_timer2->Tick += gcnew System::EventHandler(this, &Rooms::countdown_timer2_Tick);
            // 
            // stopwatch_timer2
            // 
            this->stopwatch_timer2->Tick += gcnew System::EventHandler(this, &Rooms::stopwatch_timer2_Tick);
            // 
            // stopwatch_timer3
            // 
            this->stopwatch_timer3->Tick += gcnew System::EventHandler(this, &Rooms::stopwatch_timer3_Tick);
            // 
            // countdown_timer3
            // 
            this->countdown_timer3->Tick += gcnew System::EventHandler(this, &Rooms::countdown_timer3_Tick);
            // 
            // stopwatch_timer4
            // 
            this->stopwatch_timer4->Tick += gcnew System::EventHandler(this, &Rooms::stopwatch_timer4_Tick);
            // 
            // countdown_timer4
            // 
            this->countdown_timer4->Tick += gcnew System::EventHandler(this, &Rooms::countdown_timer4_Tick);
            // 
            // countdown_timer5
            // 
            this->countdown_timer5->Tick += gcnew System::EventHandler(this, &Rooms::countdown_timer5_Tick);
            // 
            // stopwatch_timer5
            // 
            this->stopwatch_timer5->Tick += gcnew System::EventHandler(this, &Rooms::stopwatch_timer5_Tick);
            // 
            // countdown_timer6
            // 
            this->countdown_timer6->Tick += gcnew System::EventHandler(this, &Rooms::countdown_timer6_Tick);
            // 
            // stopwatch_timer6
            // 
            this->stopwatch_timer6->Tick += gcnew System::EventHandler(this, &Rooms::stopwatch_timer6_Tick);
            // 
            // countdown_timer7
            // 
            this->countdown_timer7->Tick += gcnew System::EventHandler(this, &Rooms::countdown_timer7_Tick);
            // 
            // stopwatch_timer7
            // 
            this->stopwatch_timer7->Tick += gcnew System::EventHandler(this, &Rooms::stopwatch_timer7_Tick);
            // 
            // countdown_timer8
            // 
            this->countdown_timer8->Tick += gcnew System::EventHandler(this, &Rooms::countdown_timer8_Tick);
            // 
            // stopwatch_timer8
            // 
            this->stopwatch_timer8->Tick += gcnew System::EventHandler(this, &Rooms::stopwatch_timer8_Tick);
            // 
            // room1_mode_cmbx
            // 
            this->room1_mode_cmbx->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->room1_mode_cmbx->ForeColor = System::Drawing::Color::Black;
            this->room1_mode_cmbx->FormattingEnabled = true;
            this->room1_mode_cmbx->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"indomy", L"pepsi", L"fury" });
            this->room1_mode_cmbx->Location = System::Drawing::Point(529, 198);
            this->room1_mode_cmbx->Name = L"room1_mode_cmbx";
            this->room1_mode_cmbx->Size = System::Drawing::Size(190, 35);
            this->room1_mode_cmbx->TabIndex = 18;
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->ForeColor = System::Drawing::Color::White;
            this->label1->Location = System::Drawing::Point(522, 135);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(210, 41);
            this->label1->TabIndex = 19;
            this->label1->Text = L"Choose Mode";
            // 
            // room2_mode_cmbx
            // 
            this->room2_mode_cmbx->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->room2_mode_cmbx->ForeColor = System::Drawing::Color::Black;
            this->room2_mode_cmbx->FormattingEnabled = true;
            this->room2_mode_cmbx->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"indomy", L"pepsi", L"fury" });
            this->room2_mode_cmbx->Location = System::Drawing::Point(529, 198);
            this->room2_mode_cmbx->Name = L"room2_mode_cmbx";
            this->room2_mode_cmbx->Size = System::Drawing::Size(190, 35);
            this->room2_mode_cmbx->TabIndex = 26;
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->ForeColor = System::Drawing::Color::White;
            this->label2->Location = System::Drawing::Point(522, 135);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(210, 41);
            this->label2->TabIndex = 27;
            this->label2->Text = L"Choose Mode";
            // 
            // room3_mode_cmbx
            // 
            this->room3_mode_cmbx->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->room3_mode_cmbx->ForeColor = System::Drawing::Color::Black;
            this->room3_mode_cmbx->FormattingEnabled = true;
            this->room3_mode_cmbx->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"indomy", L"pepsi", L"fury" });
            this->room3_mode_cmbx->Location = System::Drawing::Point(529, 198);
            this->room3_mode_cmbx->Name = L"room3_mode_cmbx";
            this->room3_mode_cmbx->Size = System::Drawing::Size(190, 35);
            this->room3_mode_cmbx->TabIndex = 36;
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label3->ForeColor = System::Drawing::Color::White;
            this->label3->Location = System::Drawing::Point(522, 135);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(210, 41);
            this->label3->TabIndex = 37;
            this->label3->Text = L"Choose Mode";
            // 
            // room4_mode_cmbx
            // 
            this->room4_mode_cmbx->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->room4_mode_cmbx->ForeColor = System::Drawing::Color::Black;
            this->room4_mode_cmbx->FormattingEnabled = true;
            this->room4_mode_cmbx->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"indomy", L"pepsi", L"fury" });
            this->room4_mode_cmbx->Location = System::Drawing::Point(529, 198);
            this->room4_mode_cmbx->Name = L"room4_mode_cmbx";
            this->room4_mode_cmbx->Size = System::Drawing::Size(190, 35);
            this->room4_mode_cmbx->TabIndex = 43;
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label4->ForeColor = System::Drawing::Color::White;
            this->label4->Location = System::Drawing::Point(522, 135);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(210, 41);
            this->label4->TabIndex = 44;
            this->label4->Text = L"Choose Mode";
            // 
            // room5_mode_cmbx
            // 
            this->room5_mode_cmbx->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->room5_mode_cmbx->ForeColor = System::Drawing::Color::Black;
            this->room5_mode_cmbx->FormattingEnabled = true;
            this->room5_mode_cmbx->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"indomy", L"pepsi", L"fury" });
            this->room5_mode_cmbx->Location = System::Drawing::Point(529, 198);
            this->room5_mode_cmbx->Name = L"room5_mode_cmbx";
            this->room5_mode_cmbx->Size = System::Drawing::Size(190, 35);
            this->room5_mode_cmbx->TabIndex = 45;
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label5->ForeColor = System::Drawing::Color::White;
            this->label5->Location = System::Drawing::Point(522, 135);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(210, 41);
            this->label5->TabIndex = 46;
            this->label5->Text = L"Choose Mode";
            // 
            // Rooms
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
            this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->ClientSize = System::Drawing::Size(1400, 780);
            this->Controls->Add(this->Rooms_tabs);
            this->DoubleBuffered = true;
            this->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
            this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->Name = L"Rooms";
            this->Text = L"Room1";
            this->Load += gcnew System::EventHandler(this, &Rooms::Room1_Load);
            this->Rooms_tabs->ResumeLayout(false);
            this->room1_tab->ResumeLayout(false);
            this->room1_tab->PerformLayout();
            this->room2_tab->ResumeLayout(false);
            this->room2_tab->PerformLayout();
            this->room3_tab->ResumeLayout(false);
            this->room3_tab->PerformLayout();
            this->troom4_tab->ResumeLayout(false);
            this->troom4_tab->PerformLayout();
            this->room5_tab->ResumeLayout(false);
            this->room5_tab->PerformLayout();
            this->billiard1_tab->ResumeLayout(false);
            this->billiard1_tab->PerformLayout();
            this->billiard2_tab->ResumeLayout(false);
            this->billiard2_tab->PerformLayout();
            this->pingpong_tab->ResumeLayout(false);
            this->pingpong_tab->PerformLayout();
            this->ResumeLayout(false);

        }
#pragma endregion
        //////////////////////////////////////////////////////
      //ROOM1
      //////////////////////////////////////////////////////
    private: System::Void Room1_Load(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void room2_tab_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void room2_user_time_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void countdown_timer1_tick(System::Object^ sender, System::EventArgs^ e) {

        if (endTime1 != DateTime::MinValue) {
            // Calculate the remaining time
            TimeSpan remainingTime = endTime1 - DateTime::Now;

            // Check if the countdown is complete
            if (remainingTime.TotalSeconds <= 0) {
                // Countdown is complete, handle the edge case
                countdown_timer1->Stop();
                MessageBox::Show("Room1 time Ended", "Countdown Notification");
            }
            else {
                // Update your UI with the remaining time
                timeremaining1_lbl->Text = remainingTime.ToString("hh\\:mm\\:ss");
            }
        }
        else {
            // Handle the case where endTime1 is DateTime::MinValue (stopwatch mode)
            // Update your UI or perform any necessary actions here
        }

    }

    private: System::Void Room1_starttime_btn_Click(System::Object^ sender, System::EventArgs^ e) {
        double timeInput;
        if (room1_startTime_btn_click == false) {
            room1_startTime_btn_click = true;
            if (Double::TryParse(textBoxHours1->Text, timeInput) && timeInput >= 0) {
                // Convert hours to minutes
                int minutes = static_cast<int>(timeInput * 60);

                // User entered a valid number of minutes, start countdown
                startTime1 = DateTime::Now;
                room1_available = false;
                timestarted1_lbl->Text = startTime1.ToString("hh:mm:ss tt");
                endTime1 = DateTime::Now.AddMinutes(minutes);
                countdown_timer1->Start();
                stopwatch_timer1->Stop();
            }
            else if (timeInput < 0) {
                MessageBox::Show("please enter non negative value", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
            else {
                // User didn't enter a valid number, start stopwatch
                startTime1 = DateTime::Now;
                room1_available = false;
                timestarted1_lbl->Text = startTime1.ToString("hh:mm:ss tt");
                endTime1 = DateTime::MinValue;
                countdown_timer1->Stop();
                stopwatch_timer1->Start();
            }
        }
            else {
            MessageBox::Show("Room is already online", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
    }
    

private: System::Void room1_endtime_btn_Click(System::Object^ sender, System::EventArgs^ e) {
    if (timestarted1_lbl->Text == "00:00:00")
    {
        MessageBox::Show("No Room Started", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
    else {
    room1_endtime_btn_click = true;
        countdown_timer1->Stop();
        stopwatch_timer1->Stop();
        room1_available = true;
        finalTime1 = DateTime::Now;
    }
}
private: System::Void room1_tab_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void stopwatch_timer1_Tick(System::Object^ sender, System::EventArgs^ e) {

    TimeSpan elapsedTime = DateTime::Now - startTime1;
    timer1_lbl->Text = elapsedTime.ToString("hh\\:mm\\:ss");
}
private: System::Void room1_remove_btn_Click(System::Object^ sender, System::EventArgs^ e) {
    
    if (room1_startTime_btn_click == true) {
        if (room1_order_cmbx->SelectedIndex == -1) {
            MessageBox::Show("Please choose an item from the list first.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
        else {
            String^ selectedItem = room1_order_cmbx->SelectedItem->ToString();
            RemoveItemFromPanel(selectedItem, room1_orders_pnl, room1_orders_map);
        }
    }
    else {
        MessageBox::Show("room has to start first", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
}

private: System::Void room1_add_btn_Click(System::Object^ sender, System::EventArgs^ e) {
    if (room1_startTime_btn_click == true) {
        if (room1_order_cmbx->SelectedIndex == -1) {
            MessageBox::Show("Please choose an item from the list first.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
        else {
            try
            {
                String^ connString = "Data Source=sql.bsite.net\\MSSQL2016;Persist Security Info=True;User ID=ahmedsameh_;Password=Admin1234";
                SqlConnection^ sqlConn = gcnew SqlConnection(connString);
                sqlConn->Open();

                String^ selectedItem = room1_order_cmbx->SelectedItem->ToString();
                String^ updateQuery = "UPDATE items SET quantity = quantity - 1 WHERE name = @itemName";

                SqlCommand^ updateCommand = gcnew SqlCommand(updateQuery, sqlConn);
                updateCommand->Parameters->AddWithValue("@itemName", selectedItem);
                updateCommand->ExecuteNonQuery();
                String^ selected = room1_order_cmbx->SelectedItem->ToString();
                if (!String::IsNullOrEmpty(selected)) {
                    AddItemToPanel1(selected, room1_orders_pnl);
                    if (room1_orders_map->ContainsKey(selected)) {
                        room1_orders_map[selected]++;
                    }
                    else {
                        room1_orders_map[selected] = 1;
                    }
                }
                MessageBox::Show("item added successfully.");
                room1_order_cmbx->SelectedIndex = -1;
                data_combobox();
            }
            catch (Exception^ ex)
            {
                MessageBox::Show("Failed to add item: " + ex->Message);
            }
        }
    }
    else {
        MessageBox::Show("room has to start first", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
}
private: System::Void AddItemToPanel1(String^ itemName,FlowLayoutPanel^ pnl_name) {
           Label^ newItemLabel = gcnew Label();
           newItemLabel->Text = itemName;

           // Calculate the Y-coordinate for the new label
           int newY = pnl_name->Controls->Count * (newItemLabel->Height + 5);

           newItemLabel->Location = System::Drawing::Point(0, newY);

           // Set other properties like size, etc. as needed
           pnl_name->Controls->Add(newItemLabel);
       }


private: System::Void RemoveItemFromPanel(String^ itemName,FlowLayoutPanel^ pnl_name, Dictionary<String^, int>^ user_orders) {
           for each (Control ^ control in pnl_name->Controls) {
               if (control->Text == itemName) {
                   pnl_name->Controls->Remove(control);
                   if (user_orders->ContainsKey(itemName)) {
                       if (user_orders[itemName] > 1) {
                           user_orders[itemName]--;
                       }
                       else {
                           user_orders->Remove(itemName);
                       }
                       break; // Exit the loop after removing the item
                   }
                   else {
                       MessageBox::Show("the orders are empty", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
                   }
               }
           }
       }
private: System::Void Rooms::FetchItemPricesFromDatabase() {
           // Execute your database query to fetch item prices and update the itemPrices map
           // ...

           // Update the itemPrices map with the fetched data
           //itemPrices.clear(); // Clear existing data
          // while (reader->Read()) {
               // Parse data from the reader and update itemPrices map
              // std::string itemName = reader->GetString(0);
             //  double itemPrice = reader->GetDouble(1);
             //  itemPrices[itemName] = itemPrice;
          // }

           // Close the reader and connection when done
        //   reader->Close();
         //  connection->Close();
       }
private: System::Void room1_close_btn_Click(System::Object^ sender, System::EventArgs^ e) {

    ////////////////////////////////////////////////////////////
    //query for saving the data for the order in the data base//
    ////////////////////////////////////////////////////////////


        if (timestarted1_lbl->Text == "00:00:00")
        {
            MessageBox::Show("The Room is empty ya ahbal", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
        else {
    if (room1_endtime_btn_click == true) {
            DisplayReceipt(room1_orders_map, itemPrices, startTime1, finalTime1, room1_recipt_pnl,"Room1");
            MessageBox::Show("Done?", "Countdown Notification");
            room1_recipt_pnl->Controls->Clear();
            room1_orders_pnl->Controls->Clear();
            timer1_lbl->Text = "00:00:00";
            timeremaining1_lbl->Text = "00:00:00";
            timestarted1_lbl->Text = "00:00:00";
            room1_orders_map->Clear();
            stopwatch_timer1->Stop();
            countdown_timer1->Stop();
            room1_startTime_btn_click = false;
            room1_endtime_btn_click = false;
        }
    else {
        MessageBox::Show("you have to end the time first", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
    }
}

       
private: void DisplayReceipt(Dictionary<String^, int>^ userOrders, Dictionary<String^, int>^ itemprices,DateTime startTime,DateTime endTime, FlowLayoutPanel^ panel_name,String^ room_id) {
           double totalCost = 0.0;
           double elapsedHours=0.0;
           double timeCost=0.0;
           int int_time_cost;
           // Clear the existing controls in the flow layout panel
           panel_name->Controls->Clear();
           
           if (endTime != DateTime::MinValue) {
               // Calculate the elapsed time in hours
               TimeSpan elapsedTime = endTime - startTime;
               elapsedHours = elapsedTime.TotalHours;

               timeCost = elapsedHours * 50;
             
               if (elapsedHours < 0.4)
                   timeCost = 20.0;

                int_time_cost =static_cast<int>(timeCost);
               // Add the time cost to the total cost
               totalCost += int_time_cost;
           }

           for each(KeyValuePair<String^, int>^ order in userOrders) {
               String^ itemName = order->Key;
               int quantity = order->Value;

               if (itemprices->ContainsKey(itemName)) {
                   double itemprice = itemprices[itemName];
                   totalCost += itemprice * quantity;

                   // Create a label to display the item details
                   Label^ labelItem = gcnew Label();
                   labelItem->AutoSize = true;
                   labelItem->Text = itemName + " x" + quantity;

                   // Add the label to the flow layout panel
                   panel_name->Controls->Add(labelItem);
               }
           }
           //MessageBox::Show("int_time_cost1: " + int_time_cost.ToString());
           //MessageBox::Show("totalCost: " + totalCost.ToString());

           // Display the total cost
           Label^ labelTotalCost = gcnew Label();
           Label^ labelTotalTimeCost = gcnew Label();
           labelTotalCost->AutoSize = true;
           labelTotalTimeCost->AutoSize = true;
           labelTotalTimeCost->Text = "Time Cost: " + int_time_cost.ToString();
           labelTotalCost->Text = "Total Cost: " + totalCost.ToString();
           SharedData::Instance->TotalAllRoomsCost += totalCost;
           SharedData::Instance->AddHoursToRoomTime(room_id, elapsedHours);

           
           // Add the total cost label to the flow layout panel
           panel_name->Controls->Add(labelTotalTimeCost);
           panel_name->Controls->Add(labelTotalCost);
       }


       //////////////////////////////////////////////////////
      //ROOM2
      //////////////////////////////////////////////////////

private: System::Void room2_start_btn_Click(System::Object^ sender, System::EventArgs^ e) {
    double timeInput;
    if (room2_startTime_btn_click == false) {
        room2_startTime_btn_click = true;
        //if(room2_timestarted_lbl->Text == "00:00:00")
        if (Double::TryParse(room2_userinput_time->Text, timeInput) && timeInput >= 0) {
            // Convert hours to minutes
            int minutes = static_cast<int>(timeInput * 60);

            // User entered a valid number of minutes, start countdown
            startTime2 = DateTime::Now;
            room2_available = false;
            room2_timestarted_lbl->Text = startTime2.ToString("hh:mm:ss tt");
            endTime2 = DateTime::Now.AddMinutes(minutes);
            countdown_timer2->Start();
            stopwatch_timer2->Stop();
        }
        else if (timeInput < 0) {
            MessageBox::Show("please enter non negative value", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
        else {
            // User didn't enter a valid number, start stopwatch
            startTime2 = DateTime::Now;
            room2_available = false;
            room2_timestarted_lbl->Text = startTime2.ToString("hh:mm:ss tt");
            endTime2 = DateTime::MinValue;
            countdown_timer2->Stop();
            stopwatch_timer2->Start();
        }
    }
    else {
        MessageBox::Show("Room is already online", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
}
private: System::Void room2_end_btn_Click(System::Object^ sender, System::EventArgs^ e) {
    if (room2_timestarted_lbl->Text == "00:00:00")
    {
        MessageBox::Show("No Room Started", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
    else {
    room2_endtime_btn_click = true;
        countdown_timer2->Stop();
        stopwatch_timer2->Stop();
        room2_available = true;
        finalTime2 = DateTime::Now;
    }

}
private: System::Void room2_add_btn_Click(System::Object^ sender, System::EventArgs^ e) {
    if (room2_startTime_btn_click == true) {
        if (room2_order_cmbx->SelectedIndex == -1) {
            MessageBox::Show("Please choose an item from the list first.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
        else {
            try
            {
                String^ connString = "Data Source=sql.bsite.net\\MSSQL2016;Persist Security Info=True;User ID=ahmedsameh_;Password=Admin1234";
                SqlConnection^ sqlConn = gcnew SqlConnection(connString);
                sqlConn->Open();

                String^ selectedItem = room2_order_cmbx->SelectedItem->ToString();
                String^ updateQuery = "UPDATE items SET quantity = quantity - 1 WHERE name = @itemName";

                SqlCommand^ updateCommand = gcnew SqlCommand(updateQuery, sqlConn);
                updateCommand->Parameters->AddWithValue("@itemName", selectedItem);
                updateCommand->ExecuteNonQuery();
                String^ selected = room2_order_cmbx->SelectedItem->ToString();
                if (!String::IsNullOrEmpty(selected)) {
                    AddItemToPanel1(selected, room2_orders_pnl);
                    if (room2_orders_map->ContainsKey(selected)) {
                        room2_orders_map[selected]++;
                    }
                    else {
                        room2_orders_map[selected] = 1;
                    }
                }
                MessageBox::Show("item added successfully.");
                room8_order_cmbx->SelectedIndex = -1;
                data_combobox();
            }
            catch (Exception^ ex)
            {
                MessageBox::Show("Failed to add item: " + ex->Message);
            }
        }
    }
    else {
        MessageBox::Show("room has to start first", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
}
private: System::Void room2_remove_btn_Click(System::Object^ sender, System::EventArgs^ e) {
    if (room2_startTime_btn_click == true) {
        if (room2_order_cmbx->SelectedIndex == -1) {
            MessageBox::Show("Please choose an item from the list first.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
        else {
            String^ selectedItem = room2_order_cmbx->SelectedItem->ToString();
            RemoveItemFromPanel(selectedItem, room2_orders_pnl, room2_orders_map);
        }
    }
    else {
        MessageBox::Show("room has to start first", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
}
private: System::Void room2_closeroom_btn_Click(System::Object^ sender, System::EventArgs^ e) {
    ////////////////////////////////////////////////////////////
     //query for saving the data for the order in the data base//
     ////////////////////////////////////////////////////////////


        if (room2_timestarted_lbl->Text == "00:00:00")
        {
            MessageBox::Show("The Room is empty ya ahbal", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
        else {
    if (room2_endtime_btn_click == true) {
            DisplayReceipt(room2_orders_map, itemPrices, startTime2, finalTime2, room2_recipt_pnl,"Room2");
            MessageBox::Show("Done?", "Countdown Notification");
            room2_recipt_pnl->Controls->Clear();
            room2_orders_pnl->Controls->Clear();
            room2_timer_lbl->Text = "00:00:00";
            room2_timeremaining_lbl->Text = "00:00:00";
            room2_timestarted_lbl->Text = "00:00:00";
            room2_orders_map->Clear();
            stopwatch_timer2->Stop();
            countdown_timer2->Stop();
            room2_startTime_btn_click = false;
            room2_endtime_btn_click = false;
        }
    else {
        MessageBox::Show("you have to end the time first", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
         }
    }
}
private: System::Void countdown_timer2_Tick(System::Object^ sender, System::EventArgs^ e) {
    if (endTime2 != DateTime::MinValue) {
        // Calculate the remaining time
        TimeSpan remainingTime = endTime2 - DateTime::Now;

        // Check if the countdown is complete
        if (remainingTime.TotalSeconds <= 0) {
            // Countdown is complete, handle the edge case
            countdown_timer2->Stop();
            MessageBox::Show("Room2 time Ended", "Countdown Notification");
        }
        else {
            // Update your UI with the remaining time
            room2_timeremaining_lbl->Text = remainingTime.ToString("hh\\:mm\\:ss");
        }
    }
    else {
        // Handle the case where endTime1 is DateTime::MinValue (stopwatch mode)
        // Update your UI or perform any necessary actions here
    }
}
private: System::Void stopwatch_timer2_Tick(System::Object^ sender, System::EventArgs^ e) {
    TimeSpan elapsedTime = DateTime::Now - startTime2;
    room2_timer_lbl->Text = elapsedTime.ToString("hh\\:mm\\:ss");
}
private: System::Void room2_userinput_time_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
    if (!Char::IsDigit(e->KeyChar) && e->KeyChar != '.' && !Char::IsControl(e->KeyChar)) {
        // Block the input by setting e->Handled to true
        e->Handled = true;
    }

    // Allow only one decimal point
    if (e->KeyChar == '.' && room2_userinput_time->Text->Contains(".")) {
        // Block the input by setting e->Handled to true
        e->Handled = true;
    }
}
private: System::Void textBoxHours1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {

    if (!Char::IsDigit(e->KeyChar) && e->KeyChar != '.' && !Char::IsControl(e->KeyChar)) {
        // Block the input by setting e->Handled to true
        e->Handled = true;
    }

    // Allow only one decimal point
    if (e->KeyChar == '.' && textBoxHours1->Text->Contains(".")) {
        // Block the input by setting e->Handled to true
        e->Handled = true;
    }
}


       //////////////////////////////////////////////////////
      //ROOM3
      //////////////////////////////////////////////////////

private: System::Void room3_start_btn_Click(System::Object^ sender, System::EventArgs^ e) {
    double timeInput;
    if (room3_startTime_btn_click == false) {
        room3_startTime_btn_click = true;
        //if(room2_timestarted_lbl->Text == "00:00:00")
        if (Double::TryParse(room3_userinput_time->Text, timeInput) && timeInput >= 0) {
            // Convert hours to minutes
            int minutes = static_cast<int>(timeInput * 60);

            // User entered a valid number of minutes, start countdown
            startTime3 = DateTime::Now;
            room3_available = false;
            room3_timestarted_lbl->Text = startTime3.ToString("hh:mm:ss tt");
            endTime3 = DateTime::Now.AddMinutes(minutes);
            countdown_timer3->Start();
            stopwatch_timer3->Stop();
        }
        else if (timeInput < 0) {
            MessageBox::Show("please enter non negative value", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
        else {
            // User didn't enter a valid number, start stopwatch
            startTime3 = DateTime::Now;
            room3_available = false;
            room3_timestarted_lbl->Text = startTime3.ToString("hh:mm:ss tt");
            endTime3 = DateTime::MinValue;
            countdown_timer3->Stop();
            stopwatch_timer3->Start();
        }
    }
    else {
        MessageBox::Show("Room is already online", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
}
private: System::Void room3_end_btn_Click(System::Object^ sender, System::EventArgs^ e) {

    if (room3_timestarted_lbl->Text == "00:00:00")
    {
        MessageBox::Show("No Room Started", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
    else {
        room3_endtime_btn_click = true;
        countdown_timer3->Stop();
        stopwatch_timer3->Stop();
        room3_available = true;
        finalTime3 = DateTime::Now;
    }

}
private: System::Void room3_add_btn_Click(System::Object^ sender, System::EventArgs^ e) {
    if (room3_startTime_btn_click == true) {
        if (room3_order_cmbx->SelectedIndex == -1) {
            MessageBox::Show("Please choose an item from the list first.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
        else {
            try
            {
                String^ connString = "Data Source=sql.bsite.net\\MSSQL2016;Persist Security Info=True;User ID=ahmedsameh_;Password=Admin1234";
                SqlConnection^ sqlConn = gcnew SqlConnection(connString);
                sqlConn->Open();

                String^ selectedItem = room3_order_cmbx->SelectedItem->ToString();
                String^ updateQuery = "UPDATE items SET quantity = quantity - 1 WHERE name = @itemName";

                SqlCommand^ updateCommand = gcnew SqlCommand(updateQuery, sqlConn);
                updateCommand->Parameters->AddWithValue("@itemName", selectedItem);
                updateCommand->ExecuteNonQuery();
                String^ selected = room3_order_cmbx->SelectedItem->ToString();
                if (!String::IsNullOrEmpty(selected)) {
                    AddItemToPanel1(selected, room3_orders_pnl);
                    if (room3_orders_map->ContainsKey(selected)) {
                        room3_orders_map[selected]++;
                    }
                    else {
                        room3_orders_map[selected] = 1;
                    }
                }
                MessageBox::Show("item added successfully.");
                room8_order_cmbx->SelectedIndex = -1;
                data_combobox();
            }
            catch (Exception^ ex)
            {
                MessageBox::Show("Failed to add item: " + ex->Message);
            }
        }
    }
    else {
        MessageBox::Show("room has to start first", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }

}
private: System::Void room3_remove_btn_Click(System::Object^ sender, System::EventArgs^ e) {
    if (room3_startTime_btn_click == true) {
        if (room3_order_cmbx->SelectedIndex == -1) {
            MessageBox::Show("Please choose an item from the list first.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
        else {
            String^ selectedItem = room3_order_cmbx->SelectedItem->ToString();
            RemoveItemFromPanel(selectedItem, room3_orders_pnl, room3_orders_map);
        }
    }
    else {
        MessageBox::Show("room has to start first", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }

}
private: System::Void room3_close_btn_Click(System::Object^ sender, System::EventArgs^ e) {
    if (room3_timestarted_lbl->Text == "00:00:00")
    {
        MessageBox::Show("The Room is empty ya ahbal", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
    else {
        if (room3_endtime_btn_click == true) {
            DisplayReceipt(room3_orders_map, itemPrices, startTime3, finalTime3, room3_recipt_pnl, "Room3");
            MessageBox::Show("Done?", "Countdown Notification");
            room3_recipt_pnl->Controls->Clear();
            room3_orders_pnl->Controls->Clear();
            room3_timer_lbl->Text = "00:00:00";
            room3_timeremaining_lbl->Text = "00:00:00";
            room3_timestarted_lbl->Text = "00:00:00";
            room3_orders_map->Clear();
            stopwatch_timer3->Stop();
            countdown_timer3->Stop();
            room3_startTime_btn_click = false;
            room3_endtime_btn_click = false;
        }
        else {
            MessageBox::Show("you have to end the time first", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
    }

}
private: System::Void stopwatch_timer3_Tick(System::Object^ sender, System::EventArgs^ e) {
    TimeSpan elapsedTime = DateTime::Now - startTime3;
    room3_timer_lbl->Text = elapsedTime.ToString("hh\\:mm\\:ss");
}
private: System::Void countdown_timer3_Tick(System::Object^ sender, System::EventArgs^ e) {
    if (endTime3 != DateTime::MinValue) {
        // Calculate the remaining time
        TimeSpan remainingTime = endTime3 - DateTime::Now;

        // Check if the countdown is complete
        if (remainingTime.TotalSeconds <= 0) {
            // Countdown is complete, handle the edge case
            countdown_timer3->Stop();
            MessageBox::Show("Room2 time Ended", "Countdown Notification");
        }
        else {
            // Update your UI with the remaining time
            room3_timeremaining_lbl->Text = remainingTime.ToString("hh\\:mm\\:ss");
        }
    }
    else {
        // Handle the case where endTime1 is DateTime::MinValue (stopwatch mode)
        // Update your UI or perform any necessary actions here
    }
}
private: System::Void Rooms_tabs_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
    if (!Char::IsDigit(e->KeyChar) && e->KeyChar != '.' && !Char::IsControl(e->KeyChar)) {
        // Block the input by setting e->Handled to true
        e->Handled = true;
    }

    // Allow only one decimal point
    if (e->KeyChar == '.' && room3_userinput_time->Text->Contains(".")) {
        // Block the input by setting e->Handled to true
        e->Handled = true;
    }
}
       //////////////////////////////////////////////////////////////////////////////////////////////////////
       //ROOM4
       //////////////////////////////////////////////////////////////////////////////////////////////////////
private: System::Void room4_start_btn_Click(System::Object^ sender, System::EventArgs^ e) {
    double timeInput;
    if (room4_startTime_btn_click == false) {
        room4_startTime_btn_click = true;
        //if(room2_timestarted_lbl->Text == "00:00:00")
        if (Double::TryParse(room4_userinput_time->Text, timeInput) && timeInput >= 0) {
            // Convert hours to minutes
            int minutes = static_cast<int>(timeInput * 60);

            // User entered a valid number of minutes, start countdown
            startTime4 = DateTime::Now;
            room4_available = false;
            room4_timestarted_lbl->Text = startTime4.ToString("hh:mm:ss tt");
            endTime4 = DateTime::Now.AddMinutes(minutes);
            countdown_timer4->Start();
            stopwatch_timer4->Stop();
        }
        else if (timeInput < 0) {
            MessageBox::Show("please enter non negative value", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
        else {
            // User didn't enter a valid number, start stopwatch
            startTime4 = DateTime::Now;
            room4_available = false;
            room4_timestarted_lbl->Text = startTime4.ToString("hh:mm:ss tt");
            endTime4 = DateTime::MinValue;
            countdown_timer4->Stop();
            stopwatch_timer4->Start();
        }
    }
    else {
        MessageBox::Show("Room is already online", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }

}
private: System::Void room4_end_btn_Click(System::Object^ sender, System::EventArgs^ e) {
    if (room4_timestarted_lbl->Text == "00:00:00")
    {
        MessageBox::Show("No Room Started", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
    else {
        room4_endtime_btn_click = true;
        countdown_timer4->Stop();
        stopwatch_timer4->Stop();
        room4_available = true;
        finalTime4 = DateTime::Now;
    }
}
private: System::Void room4_add_btn_Click(System::Object^ sender, System::EventArgs^ e) {
    if (room4_startTime_btn_click == true) {
        if (room4_order_cmbx->SelectedIndex == -1) {
            MessageBox::Show("Please choose an item from the list first.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
        else {
            try
            {
                String^ connString = "Data Source=sql.bsite.net\\MSSQL2016;Persist Security Info=True;User ID=ahmedsameh_;Password=Admin1234";
                SqlConnection^ sqlConn = gcnew SqlConnection(connString);
                sqlConn->Open();

                String^ selectedItem = room4_order_cmbx->SelectedItem->ToString();
                String^ updateQuery = "UPDATE items SET quantity = quantity - 1 WHERE name = @itemName";

                SqlCommand^ updateCommand = gcnew SqlCommand(updateQuery, sqlConn);
                updateCommand->Parameters->AddWithValue("@itemName", selectedItem);
                updateCommand->ExecuteNonQuery();
                String^ selected = room4_order_cmbx->SelectedItem->ToString();
                if (!String::IsNullOrEmpty(selected)) {
                    AddItemToPanel1(selected, room4_orders_pnl);
                    if (room4_orders_map->ContainsKey(selected)) {
                        room4_orders_map[selected]++;
                    }
                    else {
                        room4_orders_map[selected] = 1;
                    }
                }
                MessageBox::Show("item added successfully.");
                room4_order_cmbx->SelectedIndex = -1;
                data_combobox();
            }
            catch (Exception^ ex)
            {
                MessageBox::Show("Failed to add item: " + ex->Message);
            }
        }
    }
    else {
        MessageBox::Show("room has to start first", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }

}
private: System::Void room4_remove_btn_Click(System::Object^ sender, System::EventArgs^ e) {
    if (room4_startTime_btn_click == true) {
        if (room4_order_cmbx->SelectedIndex == -1) {
            MessageBox::Show("Please choose an item from the list first.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
        else {
            String^ selectedItem = room4_order_cmbx->SelectedItem->ToString();
            RemoveItemFromPanel(selectedItem, room4_orders_pnl, room4_orders_map);
        }
    }
    else {
        MessageBox::Show("room has to start first", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
}
private: System::Void room4_close_btn_Click(System::Object^ sender, System::EventArgs^ e) {
    if (room4_timestarted_lbl->Text == "00:00:00")
    {
        MessageBox::Show("The Room is empty ya ahbal", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
    else {
        if (room4_endtime_btn_click == true) {
            DisplayReceipt(room4_orders_map, itemPrices, startTime4, finalTime4, room4_recipt_pnl, "Room4");
            MessageBox::Show("Done?", "Countdown Notification");
            room4_recipt_pnl->Controls->Clear();
            room4_orders_pnl->Controls->Clear();
            room4_timer_lbl->Text = "00:00:00";
            room4_timeremaining_lbl->Text = "00:00:00";
            room4_timestarted_lbl->Text = "00:00:00";
            room4_orders_map->Clear();
            stopwatch_timer4->Stop();
            countdown_timer4->Stop();
            room4_startTime_btn_click = false;
            room4_endtime_btn_click = false;
        }
        else {
            MessageBox::Show("you have to end the time first", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
    }
}
private: System::Void room4_userinput_time_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {

    if (!Char::IsDigit(e->KeyChar) && e->KeyChar != '.' && !Char::IsControl(e->KeyChar)) {
        // Block the input by setting e->Handled to true
        e->Handled = true;
    }

    // Allow only one decimal point
    if (e->KeyChar == '.' && room4_userinput_time->Text->Contains(".")) {
        // Block the input by setting e->Handled to true
        e->Handled = true;
    }
}
private: System::Void stopwatch_timer4_Tick(System::Object^ sender, System::EventArgs^ e) {
    TimeSpan elapsedTime = DateTime::Now - startTime4;
    room4_timer_lbl->Text = elapsedTime.ToString("hh\\:mm\\:ss");
}
private: System::Void countdown_timer4_Tick(System::Object^ sender, System::EventArgs^ e) {
    if (endTime4 != DateTime::MinValue) {
        // Calculate the remaining time
        TimeSpan remainingTime = endTime4 - DateTime::Now;

        // Check if the countdown is complete
        if (remainingTime.TotalSeconds <= 0) {
            // Countdown is complete, handle the edge case
            countdown_timer4->Stop();
            MessageBox::Show("Room4 time Ended", "Countdown Notification");
        }
        else {
            // Update your UI with the remaining time
            room4_timeremaining_lbl->Text = remainingTime.ToString("hh\\:mm\\:ss");
        }
    }
    else {
        // Handle the case where endTime1 is DateTime::MinValue (stopwatch mode)
        // Update your UI or perform any necessary actions here
    }
}
       //////////////////////////////////////////////////////////////////////////////////////
     //ROOM5
     /////////////////////////////////////////////////////////////////////////////////////////




private: System::Void room5_start_btn_Click(System::Object^ sender, System::EventArgs^ e) {
    double timeInput;
    if (room5_startTime_btn_click == false) {
        room5_startTime_btn_click = true;
        //if(room2_timestarted_lbl->Text == "00:00:00")
        if (Double::TryParse(room5_userinput_time->Text, timeInput) && timeInput >= 0) {
            // Convert hours to minutes
            int minutes = static_cast<int>(timeInput * 60);

            // User entered a valid number of minutes, start countdown
            startTime5 = DateTime::Now;
            room5_available = false;
            room5_timestarted_lbl->Text = startTime5.ToString("hh:mm:ss tt");
            endTime5 = DateTime::Now.AddMinutes(minutes);
            countdown_timer5->Start();
            stopwatch_timer5->Stop();
        }
        else if (timeInput < 0) {
            MessageBox::Show("please enter non negative value", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
        else {
            // User didn't enter a valid number, start stopwatch
            startTime5 = DateTime::Now;
            room5_available = false;
            room5_timestarted_lbl->Text = startTime5.ToString("hh:mm:ss tt");
            endTime5 = DateTime::MinValue;
            countdown_timer5->Stop();
            stopwatch_timer5->Start();
        }
    }
    else {
        MessageBox::Show("Room is already online", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
}

private: System::Void room5_end_btn_Click(System::Object^ sender, System::EventArgs^ e) {
    if (room5_timestarted_lbl->Text == "00:00:00")
    {
        MessageBox::Show("No Room Started", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
    else {
        room5_endtime_btn_click = true;
        countdown_timer5->Stop();
        stopwatch_timer5->Stop();
        room5_available = true;
        finalTime5 = DateTime::Now;
    }
}
private: System::Void room5_add_btn_Click(System::Object^ sender, System::EventArgs^ e) {
    if (room5_startTime_btn_click == true) {
        if (room5_order_cmbx->SelectedIndex == -1) {
            MessageBox::Show("Please choose an item from the list first.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
        else {
            try
            {
                String^ connString = "Data Source=sql.bsite.net\\MSSQL2016;Persist Security Info=True;User ID=ahmedsameh_;Password=Admin1234";
                SqlConnection^ sqlConn = gcnew SqlConnection(connString);
                sqlConn->Open();

                String^ selectedItem = room5_order_cmbx->SelectedItem->ToString();
                String^ updateQuery = "UPDATE items SET quantity = quantity - 1 WHERE name = @itemName";

                SqlCommand^ updateCommand = gcnew SqlCommand(updateQuery, sqlConn);
                updateCommand->Parameters->AddWithValue("@itemName", selectedItem);
                updateCommand->ExecuteNonQuery();
                String^ selected = room5_order_cmbx->SelectedItem->ToString();
                if (!String::IsNullOrEmpty(selected)) {
                    AddItemToPanel1(selected, room8_orders_pnl);
                    if (room5_orders_map->ContainsKey(selected)) {
                        room5_orders_map[selected]++;
                    }
                    else {
                        room5_orders_map[selected] = 1;
                    }
                }
                MessageBox::Show("item added successfully.");
                room8_order_cmbx->SelectedIndex = -1;
                data_combobox();
            }
            catch (Exception^ ex)
            {
                MessageBox::Show("Failed to add item: " + ex->Message);
            }
        }
    }
    else {
        MessageBox::Show("room has to start first", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }

}
private: System::Void room5_remove_btn_Click(System::Object^ sender, System::EventArgs^ e) {
    if (room5_startTime_btn_click == true) {
        if (room5_order_cmbx->SelectedIndex == -1) {
            MessageBox::Show("Please choose an item from the list first.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
        else {
            String^ selectedItem = room5_order_cmbx->SelectedItem->ToString();
            RemoveItemFromPanel(selectedItem, room5_orders_pnl, room5_orders_map);
        }
    }
    else {
        MessageBox::Show("room has to start first", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
}
private: System::Void room5_close_btn_Click(System::Object^ sender, System::EventArgs^ e) {
    if (room5_timestarted_lbl->Text == "00:00:00")
    {
        MessageBox::Show("The Room is empty ya ahbal", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
    else {
        if (room5_endtime_btn_click == true) {
            DisplayReceipt(room5_orders_map, itemPrices, startTime5, finalTime5, room5_recipt_pnl, "Room5");
            MessageBox::Show("Done?", "Countdown Notification");
            room5_recipt_pnl->Controls->Clear();
            room5_orders_pnl->Controls->Clear();
            room5_timer_lbl->Text = "00:00:00";
            room5_timeremaining_lbl->Text = "00:00:00";
            room5_timestarted_lbl->Text = "00:00:00";
            room5_orders_map->Clear();
            stopwatch_timer5->Stop();
            countdown_timer5->Stop();
            room5_startTime_btn_click = false;
            room5_endtime_btn_click = false;
        }
        else {
            MessageBox::Show("you have to end the time first", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
    }
}
private: System::Void stopwatch_timer5_Tick(System::Object^ sender, System::EventArgs^ e) {
    TimeSpan elapsedTime = DateTime::Now - startTime5;
    room5_timer_lbl->Text = elapsedTime.ToString("hh\\:mm\\:ss");
}
private: System::Void countdown_timer5_Tick(System::Object^ sender, System::EventArgs^ e) {
    if (endTime5 != DateTime::MinValue) {
        // Calculate the remaining time
        TimeSpan remainingTime = endTime5 - DateTime::Now;

        // Check if the countdown is complete
        if (remainingTime.TotalSeconds <= 0) {
            // Countdown is complete, handle the edge case
            countdown_timer5->Stop();
            MessageBox::Show("Room5 time Ended", "Countdown Notification");
        }
        else {
            // Update your UI with the remaining time
            room5_timeremaining_lbl->Text = remainingTime.ToString("hh\\:mm\\:ss");
        }
    }
    else {
        // Handle the case where endTime1 is DateTime::MinValue (stopwatch mode)
        // Update your UI or perform any necessary actions here
    }
}
private: System::Void room5_userinput_time_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
    if (!Char::IsDigit(e->KeyChar) && e->KeyChar != '.' && !Char::IsControl(e->KeyChar)) {
        // Block the input by setting e->Handled to true
        e->Handled = true;
    }

    // Allow only one decimal point
    if (e->KeyChar == '.' && room5_userinput_time->Text->Contains(".")) {
        // Block the input by setting e->Handled to true
        e->Handled = true;
    }
}
       //////////////////////////////////////////////////////////////////////////////////////
    //Billiard1
    /////////////////////////////////////////////////////////////////////////////////////////



private: System::Void room6_start_btn_Click(System::Object^ sender, System::EventArgs^ e) {

    double timeInput;
    if (room6_startTime_btn_click == false) {
        room6_startTime_btn_click = true;
        //if(room2_timestarted_lbl->Text == "00:00:00")
        if (Double::TryParse(room6_userinput_time->Text, timeInput) && timeInput >= 0) {
            // Convert hours to minutes
            int minutes = static_cast<int>(timeInput * 60);

            // User entered a valid number of minutes, start countdown
            startTime6 = DateTime::Now;
            
            room6_timestarted_lbl->Text = startTime6.ToString("hh:mm:ss tt");
            endTime6 = DateTime::Now.AddMinutes(minutes);
            countdown_timer6->Start();
            stopwatch_timer6->Stop();
        }
        else if (timeInput < 0) {
            MessageBox::Show("please enter non negative value", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
        else {
            // User didn't enter a valid number, start stopwatch
            startTime6 = DateTime::Now;
            
            room6_timestarted_lbl->Text = startTime6.ToString("hh:mm:ss tt");
            endTime6 = DateTime::MinValue;
            countdown_timer6->Stop();
            stopwatch_timer6->Start();
        }
    }
    else {
        MessageBox::Show("Room is already online", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
}
private: System::Void room6_end_btn_Click(System::Object^ sender, System::EventArgs^ e) {
    if (room6_timestarted_lbl->Text == "00:00:00")
    {
        MessageBox::Show("No Room Started", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
    else {
        room6_endtime_btn_click = true;
        countdown_timer6->Stop();
        stopwatch_timer6->Stop();
       
        finalTime6 = DateTime::Now;
    }
}
private: System::Void room6_add_btn_Click(System::Object^ sender, System::EventArgs^ e) {
    if (room6_startTime_btn_click == true) {
        if (room6_order_cmbx->SelectedIndex == -1) {
            MessageBox::Show("Please choose an item from the list first.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
        else {
            try
            {
                String^ connString = "Data Source=sql.bsite.net\\MSSQL2016;Persist Security Info=True;User ID=ahmedsameh_;Password=Admin1234";
                SqlConnection^ sqlConn = gcnew SqlConnection(connString);
                sqlConn->Open();

                String^ selectedItem = room6_order_cmbx->SelectedItem->ToString();
                String^ updateQuery = "UPDATE items SET quantity = quantity - 1 WHERE name = @itemName";

                SqlCommand^ updateCommand = gcnew SqlCommand(updateQuery, sqlConn);
                updateCommand->Parameters->AddWithValue("@itemName", selectedItem);
                updateCommand->ExecuteNonQuery();
                String^ selected = room6_order_cmbx->SelectedItem->ToString();
                if (!String::IsNullOrEmpty(selected)) {
                    AddItemToPanel1(selected, room6_orders_pnl);
                    if (room6_orders_map->ContainsKey(selected)) {
                        room6_orders_map[selected]++;
                    }
                    else {
                        room6_orders_map[selected] = 1;
                    }
                }
                MessageBox::Show("item added successfully.");
                room8_order_cmbx->SelectedIndex = -1;
                data_combobox();
            }
            catch (Exception^ ex)
            {
                MessageBox::Show("Failed to add item: " + ex->Message);
            }
        }
    }
    else {
        MessageBox::Show("room has to start first", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }

}
private: System::Void room6_remove_btn_Click(System::Object^ sender, System::EventArgs^ e) {
    if (room6_startTime_btn_click == true) {
        if (room6_order_cmbx->SelectedIndex == -1) {
            MessageBox::Show("Please choose an item from the list first.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
        else {
            String^ selectedItem = room6_order_cmbx->SelectedItem->ToString();
            RemoveItemFromPanel(selectedItem, room6_orders_pnl, room6_orders_map);
        }
    }
    else {
        MessageBox::Show("room has to start first", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
}
private: System::Void room6_close_btn_Click(System::Object^ sender, System::EventArgs^ e) {
    if (room6_timestarted_lbl->Text == "00:00:00")
    {
        MessageBox::Show("The Room is empty ya ahbal", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
    else {
        if (room6_endtime_btn_click == true) {
            DisplayReceipt(room6_orders_map, itemPrices, startTime6, finalTime6, room6_recipt_pnl, "Billiard1");
            MessageBox::Show("Done?", "Countdown Notification");
            room6_recipt_pnl->Controls->Clear();
            room6_orders_pnl->Controls->Clear();
            room6_timer_lbl->Text = "00:00:00";
            room6_timeremaining_lbl->Text = "00:00:00";
            room6_timestarted_lbl->Text = "00:00:00";
            room6_orders_map->Clear();
            stopwatch_timer6->Stop();
            countdown_timer6->Stop();
            room6_startTime_btn_click = false;
            room6_endtime_btn_click = false;
        }
        else {
            MessageBox::Show("you have to end the time first", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
    }
}
private: System::Void stopwatch_timer6_Tick(System::Object^ sender, System::EventArgs^ e) {
    TimeSpan elapsedTime = DateTime::Now - startTime6;
    room6_timer_lbl->Text = elapsedTime.ToString("hh\\:mm\\:ss");
}
private: System::Void countdown_timer6_Tick(System::Object^ sender, System::EventArgs^ e) {
    if (endTime6 != DateTime::MinValue) {
        // Calculate the remaining time
        TimeSpan remainingTime = endTime6 - DateTime::Now;

        // Check if the countdown is complete
        if (remainingTime.TotalSeconds <= 0) {
            // Countdown is complete, handle the edge case
            countdown_timer6->Stop();
            MessageBox::Show("Billiard1 time Ended", "Countdown Notification");
        }
        else {
            // Update your UI with the remaining time
            room6_timeremaining_lbl->Text = remainingTime.ToString("hh\\:mm\\:ss");
        }
    }
    else {
        // Handle the case where endTime1 is DateTime::MinValue (stopwatch mode)
        // Update your UI or perform any necessary actions here
    }
}
private: System::Void room6_userinput_time_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
    if (!Char::IsDigit(e->KeyChar) && e->KeyChar != '.' && !Char::IsControl(e->KeyChar)) {
        // Block the input by setting e->Handled to true
        e->Handled = true;
    }

    // Allow only one decimal point
    if (e->KeyChar == '.' && room6_userinput_time->Text->Contains(".")) {
        // Block the input by setting e->Handled to true
        e->Handled = true;
    }
}
   ////////////////////////////////////////////////////////////////////////////////////////
   //Billiard2
   /////////////////////////////////////////////////////////////////////////////////////////



private: System::Void room7_start_btn_Click(System::Object^ sender, System::EventArgs^ e) {
    double timeInput;
    if (room7_startTime_btn_click == false) {
        room7_startTime_btn_click = true;
        //if(room2_timestarted_lbl->Text == "00:00:00")
        if (Double::TryParse(room7_userinput_time->Text, timeInput) && timeInput >= 0) {
            // Convert hours to minutes
            int minutes = static_cast<int>(timeInput * 60);

            // User entered a valid number of minutes, start countdown
            startTime7 = DateTime::Now;
            
            room7_timestarted_lbl->Text = startTime7.ToString("hh:mm:ss tt");
            endTime7 = DateTime::Now.AddMinutes(minutes);
            countdown_timer7->Start();
            stopwatch_timer7->Stop();
        }
        else if (timeInput < 0) {
            MessageBox::Show("please enter non negative value", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
        else {
            // User didn't enter a valid number, start stopwatch
            startTime7 = DateTime::Now;
           
            room7_timestarted_lbl->Text = startTime7.ToString("hh:mm:ss tt");
            endTime7 = DateTime::MinValue;
            countdown_timer7->Stop();
            stopwatch_timer7->Start();
        }
    }
    else {
        MessageBox::Show("Room is already online", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
}
private: System::Void room7_end_btn_Click(System::Object^ sender, System::EventArgs^ e) {
    if (room7_timestarted_lbl->Text == "00:00:00")
    {
        MessageBox::Show("No Room Started", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
    else {
        room7_endtime_btn_click = true;
        countdown_timer7->Stop();
        stopwatch_timer7->Stop();
        
        finalTime7 = DateTime::Now;
    }
}
private: System::Void room7_add_btn_Click(System::Object^ sender, System::EventArgs^ e) {
    if (room7_startTime_btn_click == true) {
        if (room7_order_cmbx->SelectedIndex == -1) {
            MessageBox::Show("Please choose an item from the list first.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
        else {
            try
            {
                String^ connString = "Data Source=sql.bsite.net\\MSSQL2016;Persist Security Info=True;User ID=ahmedsameh_;Password=Admin1234";
                SqlConnection^ sqlConn = gcnew SqlConnection(connString);
                sqlConn->Open();

                String^ selectedItem = room7_order_cmbx->SelectedItem->ToString();
                String^ updateQuery = "UPDATE items SET quantity = quantity - 1 WHERE name = @itemName";

                SqlCommand^ updateCommand = gcnew SqlCommand(updateQuery, sqlConn);
                updateCommand->Parameters->AddWithValue("@itemName", selectedItem);
                updateCommand->ExecuteNonQuery();
                String^ selected = room7_order_cmbx->SelectedItem->ToString();
                if (!String::IsNullOrEmpty(selected)) {
                    AddItemToPanel1(selected, room7_orders_pnl);
                    if (room7_orders_map->ContainsKey(selected)) {
                        room7_orders_map[selected]++;
                    }
                    else {
                        room7_orders_map[selected] = 1;
                    }
                }
                MessageBox::Show("item added successfully.");
                room8_order_cmbx->SelectedIndex = -1;
                data_combobox();
            }
            catch (Exception^ ex)
            {
                MessageBox::Show("Failed to add item: " + ex->Message);
            }
            
        }
    }
    else {
        MessageBox::Show("room has to start first", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
}
private: System::Void room7_remove_btn_Click(System::Object^ sender, System::EventArgs^ e) {
    if (room7_startTime_btn_click == true) {
        if (room7_order_cmbx->SelectedIndex == -1) {
            MessageBox::Show("Please choose an item from the list first.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
        else {
            String^ selectedItem = room7_order_cmbx->SelectedItem->ToString();
            RemoveItemFromPanel(selectedItem, room7_orders_pnl, room7_orders_map);
        }
    }
    else {
        MessageBox::Show("room has to start first", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
}
private: System::Void room7_close_btn_Click(System::Object^ sender, System::EventArgs^ e) {
    if (room7_timestarted_lbl->Text == "00:00:00")
    {
        MessageBox::Show("The Room is empty ya ahbal", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
    else {
        if (room7_endtime_btn_click == true) {
            DisplayReceipt(room7_orders_map, itemPrices, startTime7, finalTime7, room7_recipt_pnl, "Billiard2");
            MessageBox::Show("Done?", "Countdown Notification");
            room7_recipt_pnl->Controls->Clear();
            room7_orders_pnl->Controls->Clear();
            room7_timer_lbl->Text = "00:00:00";
            room7_timeremaining_lbl->Text = "00:00:00";
            room7_timestarted_lbl->Text = "00:00:00";
            room7_orders_map->Clear();
            stopwatch_timer7->Stop();
            countdown_timer7->Stop();
            room7_startTime_btn_click = false;
            room7_endtime_btn_click = false;
        }
        else {
            MessageBox::Show("you have to end the time first", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
    }
}
private: System::Void stopwatch_timer7_Tick(System::Object^ sender, System::EventArgs^ e) {
    TimeSpan elapsedTime = DateTime::Now - startTime7;
    room7_timer_lbl->Text = elapsedTime.ToString("hh\\:mm\\:ss");
}
private: System::Void countdown_timer7_Tick(System::Object^ sender, System::EventArgs^ e) {
    if (endTime7 != DateTime::MinValue) {
        // Calculate the remaining time
        TimeSpan remainingTime = endTime7 - DateTime::Now;

        // Check if the countdown is complete
        if (remainingTime.TotalSeconds <= 0) {
            // Countdown is complete, handle the edge case
            countdown_timer7->Stop();
            MessageBox::Show("Billiard2 time Ended", "Countdown Notification");
        }
        else {
            // Update your UI with the remaining time
            room7_timeremaining_lbl->Text = remainingTime.ToString("hh\\:mm\\:ss");
        }
    }
    else {
        // Handle the case where endTime1 is DateTime::MinValue (stopwatch mode)
        // Update your UI or perform any necessary actions here
    }
}

private: System::Void room7_userinput_time_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
    if (!Char::IsDigit(e->KeyChar) && e->KeyChar != '.' && !Char::IsControl(e->KeyChar)) {
        // Block the input by setting e->Handled to true
        e->Handled = true;
    }

    // Allow only one decimal point
    if (e->KeyChar == '.' && room7_userinput_time->Text->Contains(".")) {
        // Block the input by setting e->Handled to true
        e->Handled = true;
    }
}

   //////////////////////////////////////////////////////////////////////////////////////////
  //pingpong
  /////////////////////////////////////////////////////////////////////////////////////////





private: System::Void room8_start_btn_Click(System::Object^ sender, System::EventArgs^ e) {
    double timeInput;
    if (room8_startTime_btn_click == false) {
        room8_startTime_btn_click = true;
        //if(room2_timestarted_lbl->Text == "00:00:00")
        if (Double::TryParse(room8_userinput_time->Text, timeInput) && timeInput >= 0) {
            // Convert hours to minutes
            int minutes = static_cast<int>(timeInput * 60);

            // User entered a valid number of minutes, start countdown
            startTime8 = DateTime::Now;
            
            room8_timestarted_lbl->Text = startTime8.ToString("hh:mm:ss tt");
            endTime8 = DateTime::Now.AddMinutes(minutes);
            countdown_timer8->Start();
            stopwatch_timer8->Stop();
        }
        else if (timeInput < 0) {
            MessageBox::Show("please enter non negative value", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
        else {
            // User didn't enter a valid number, start stopwatch
            startTime8 = DateTime::Now;
           
            room8_timestarted_lbl->Text = startTime8.ToString("hh:mm:ss tt");
            endTime8 = DateTime::MinValue;
            countdown_timer8->Stop();
            stopwatch_timer8->Start();
        }
    }
    else {
        MessageBox::Show("Room is already online", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
}
private: System::Void room8_end_btn_Click(System::Object^ sender, System::EventArgs^ e) {
    if (room8_timestarted_lbl->Text == "00:00:00")
    {
        MessageBox::Show("No Room Started", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
    else {
        room8_endtime_btn_click = true;
        countdown_timer8->Stop();
        stopwatch_timer8->Stop();
       
        finalTime8 = DateTime::Now;
    }
}
private: System::Void room8_add_btn_Click(System::Object^ sender, System::EventArgs^ e) {
    if (room8_startTime_btn_click == true) {
        if (room8_order_cmbx->SelectedIndex == -1) {
            MessageBox::Show("Please choose an item from the list first.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
        else {
            try
            {
                String^ connString = "Data Source=sql.bsite.net\\MSSQL2016;Persist Security Info=True;User ID=ahmedsameh_;Password=Admin1234";
                SqlConnection^ sqlConn = gcnew SqlConnection(connString);
                sqlConn->Open();

                String^ selectedItem = room8_order_cmbx->SelectedItem->ToString();
                String^ updateQuery = "UPDATE items SET quantity = quantity - 1 WHERE name = @itemName";

                SqlCommand^ updateCommand = gcnew SqlCommand(updateQuery, sqlConn);
                updateCommand->Parameters->AddWithValue("@itemName", selectedItem);
                updateCommand->ExecuteNonQuery();
                String^ selected = room8_order_cmbx->SelectedItem->ToString();
                if (!String::IsNullOrEmpty(selected)) {
                    AddItemToPanel1(selected, room8_orders_pnl);
                    if (room8_orders_map->ContainsKey(selected)) {
                        room8_orders_map[selected]++;
                    }
                    else {
                        room8_orders_map[selected] = 1;
                    }
                }
                room8_order_cmbx->SelectedIndex = -1;
                data_combobox();
            }
            catch (Exception^ ex)
            {
                MessageBox::Show("Failed to add item: " + ex->Message);
            }

          
        }
    }
    else {
        MessageBox::Show("room has to start first", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
    

   
}
private: System::Void room8_remove_btn_Click(System::Object^ sender, System::EventArgs^ e) {
    if (room8_startTime_btn_click == true) {
        if (room8_order_cmbx->SelectedIndex == -1) {
            MessageBox::Show("Please choose an item from the list first.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
        else {
            String^ selectedItem = room8_order_cmbx->SelectedItem->ToString();
            RemoveItemFromPanel(selectedItem, room8_orders_pnl, room8_orders_map);
            try
            {
                String^ connString = "Data Source=sql.bsite.net\\MSSQL2016;Persist Security Info=True;User ID=ahmedsameh_;Password=Admin1234";
                SqlConnection^ sqlConn = gcnew SqlConnection(connString);
                sqlConn->Open();

                String^ updateQuery = "UPDATE items SET quantity = quantity + 1 WHERE name = @itemName";

                SqlCommand^ updateCommand = gcnew SqlCommand(updateQuery, sqlConn);
                updateCommand->Parameters->AddWithValue("@itemName", selectedItem);
                updateCommand->ExecuteNonQuery();
                String^ selected = room8_order_cmbx->SelectedItem->ToString();
                room8_order_cmbx->SelectedIndex = -1;
                data_combobox();
            }
            catch (Exception^ ex)
            {
                MessageBox::Show("Failed to dellet item: " + ex->Message);
            }
        }
    }
    else {
        MessageBox::Show("room has to start first", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
}
private: System::Void room8_close_btn_Click(System::Object^ sender, System::EventArgs^ e) {
    if (room8_timestarted_lbl->Text == "00:00:00")
    {
        MessageBox::Show("The Room is empty ya ahbal", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
    else {
        if (room8_endtime_btn_click == true) {
            DisplayReceipt(room8_orders_map, itemPrices, startTime8, finalTime8, room8_recipt_pnl, "Pingpong");
            MessageBox::Show("Done?", "Countdown Notification");
            room8_recipt_pnl->Controls->Clear();
            room8_orders_pnl->Controls->Clear();
            room8_timer_lbl->Text = "00:00:00";
            room8_timeremaining_lbl->Text = "00:00:00";
            room8_timestarted_lbl->Text = "00:00:00";
            room8_orders_map->Clear();
            stopwatch_timer8->Stop();
            countdown_timer8->Stop();
            room8_startTime_btn_click = false;
            room8_endtime_btn_click = false;
        }
        else {
            MessageBox::Show("you have to end the time first", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
    }
}
private: System::Void stopwatch_timer8_Tick(System::Object^ sender, System::EventArgs^ e) {
    TimeSpan elapsedTime = DateTime::Now - startTime8;
    room8_timer_lbl->Text = elapsedTime.ToString("hh\\:mm\\:ss");
}
private: System::Void countdown_timer8_Tick(System::Object^ sender, System::EventArgs^ e) {
    if (endTime8 != DateTime::MinValue) {
        // Calculate the remaining time
        TimeSpan remainingTime = endTime8 - DateTime::Now;

        // Check if the countdown is complete
        if (remainingTime.TotalSeconds <= 0) {
            // Countdown is complete, handle the edge case
            countdown_timer8->Stop();
            MessageBox::Show("pingpong time Ended", "Countdown Notification");
        }
        else {
            // Update your UI with the remaining time
            room8_timeremaining_lbl->Text = remainingTime.ToString("hh\\:mm\\:ss");
        }
    }
    else {
        // Handle the case where endTime1 is DateTime::MinValue (stopwatch mode)
        // Update your UI or perform any necessary actions here
    }
}
private: System::Void troom8_userinput_time_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
    if (!Char::IsDigit(e->KeyChar) && e->KeyChar != '.' && !Char::IsControl(e->KeyChar)) {
        // Block the input by setting e->Handled to true
        e->Handled = true;
    }

    // Allow only one decimal point
    if (e->KeyChar == '.' && room8_userinput_time->Text->Contains(".")) {
        // Block the input by setting e->Handled to true
        e->Handled = true;
    }
}
private: System::Void pingpong_tab_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
