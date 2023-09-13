#include "login.h"
using namespace System;
using namespace System::Windows::Forms;
using namespace joystick;
[STAThread]
void main(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    joystick::login f1;
    Application::Run(% f1);
}



