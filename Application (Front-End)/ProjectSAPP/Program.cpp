#include "LoginForm.h"
#include "MainForm.h"
#include "RegisterForm.h"
using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	
	


	Student^ user = nullptr;
	while (true) {
		ProjectSAPP::LoginForm loginForm;

		loginForm.ShowDialog();
		if (loginForm.switchToRegister) {
			ProjectSAPP::RegisterForm registerForm;

			registerForm.ShowDialog();

			if (registerForm.switchToLogin)
			{
				continue;
			}
			else
			{
				user = registerForm.user;
				break;
			}

		}
		else
		{
			user = loginForm.user;
			break;
		}

	}


	

	if (user != nullptr) {
		ProjectSAPP::MainForm mainform(user);
		Application::Run(% mainform);
	}  
	else {
		MessageBox::Show("Authentication Canceled",
			"Program.cpp", MessageBoxButtons::OK);
	}
}
