#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;

// [STAThreadAttribute] // ������, �� �� ��������� ������� main � �������� ������
int main(array<String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false); // ��������� ��� �������� ������� ������
	Application::EnableVisualStyles(); // ���� ���� �������� ����
	Project1::MyForm form;
	Application::Run(% form); // �������� �������� form 
}

