#include "Mainform.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Main(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    StudentRecordGUIv2::Mainform form;
    Application::Run(% form);
   
}
