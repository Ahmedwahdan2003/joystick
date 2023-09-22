#include "login.h"
using namespace System;
using namespace System::Windows::Forms;
using namespace joystick;
static void Application_ThreadException(Object^ sender, System::Threading::ThreadExceptionEventArgs^ e)
{
    // Handle the exception (e->Exception)
    MessageBox::Show("An error occurred: " + e->Exception->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
}

static void CurrentDomain_UnhandledException(Object^ sender, UnhandledExceptionEventArgs^ e)
{
    // Handle the exception (e->ExceptionObject as Exception)
    MessageBox::Show("An unhandled error occurred: " + (dynamic_cast<Exception^>(e->ExceptionObject))->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
}

[STAThread]
void main(array<System::String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    joystick::login f1;
    Application::Run(% f1);
    Application::ThreadException += gcnew System::Threading::ThreadExceptionEventHandler(Application_ThreadException);
    AppDomain::CurrentDomain->UnhandledException += gcnew UnhandledExceptionEventHandler(CurrentDomain_UnhandledException);
}

