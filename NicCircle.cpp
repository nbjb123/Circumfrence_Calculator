#include "NicCircle.h"

#include <Windows.h>

using namespace System;
using namespace System::Windows::Forms;

void Main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	cirlce1::NicCircle form;
	Application::Run(% form);
}
