#include "MyForm.h"

[System::STAThread]
int main() {
	System::Windows::Forms::Application::EnableVisualStyles();
	System::Windows::Forms::Application::SetCompatibleTextRenderingDefault(false);
	Memory_Game::MyForm form;
	System::Windows::Forms::Application::Run(% form);

	return 0;
}
