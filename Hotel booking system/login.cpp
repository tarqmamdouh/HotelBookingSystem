#include "login.h"
#include "AddHotel.h"
#include "APanel.h"
#include "AddCity.h"
#include "Cities.h"
#include "Hotels.h"
#include "setting.h"
#include "City.h"
#include <iostream>
using namespace System;
using namespace System::Windows::Forms;
[STAThread]
int main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Hotelbookingsystem::login form;
	Application::Run(%form);
}

