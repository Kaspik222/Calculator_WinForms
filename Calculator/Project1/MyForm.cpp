#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;

// [STAThreadAttribute] // означає, що ми запускаємо функцію main в окремому потоці
int main(array<String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false); // необхідне для коректної обробки текста
	Application::EnableVisualStyles(); // підкл різні візуальні стилі
	Project1::MyForm form;
	Application::Run(% form); // передача параметр form 
}

