#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;

int main(array<String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false); // íåîáõ³äíå äëÿ êîðåêòíî¿ îáðîáêè òåêñòà
	Application::EnableVisualStyles(); // ï³äêë ð³çí³ â³çóàëüí³ ñòèë³
	Project1::MyForm form;
	Application::Run(% form); // ïåðåäà÷à ïàðàìåòð form 
}

