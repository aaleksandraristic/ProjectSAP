#pragma once
#include "Student.h"

namespace ProjectSAPP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;


	/// <summary>
	/// Summary for RegisterForm
	/// </summary>
	public ref class RegisterForm : public System::Windows::Forms::Form
	{
	public:
		RegisterForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->CenterToScreen();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~RegisterForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ tbFirstName;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ tbLastName;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ tbStudentEmail;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ tbPassword;


	private: System::Windows::Forms::LinkLabel^ llLogin;
	private: System::Windows::Forms::Button^ btnOkk;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tbFirstName = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tbLastName = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tbStudentEmail = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tbPassword = (gcnew System::Windows::Forms::TextBox());
			this->llLogin = (gcnew System::Windows::Forms::LinkLabel());
			this->btnOkk = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(159, 50);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(116, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Register";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(19, 134);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(116, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"First Name";
			// 
			// tbFirstName
			// 
			this->tbFirstName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbFirstName->Location = System::Drawing::Point(186, 131);
			this->tbFirstName->Name = L"tbFirstName";
			this->tbFirstName->Size = System::Drawing::Size(250, 31);
			this->tbFirstName->TabIndex = 1;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(19, 171);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(115, 25);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Last Name";
			// 
			// tbLastName
			// 
			this->tbLastName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbLastName->Location = System::Drawing::Point(186, 168);
			this->tbLastName->Name = L"tbLastName";
			this->tbLastName->Size = System::Drawing::Size(250, 31);
			this->tbLastName->TabIndex = 2;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(19, 208);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(150, 25);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Email Address";
			// 
			// tbStudentEmail
			// 
			this->tbStudentEmail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbStudentEmail->Location = System::Drawing::Point(186, 205);
			this->tbStudentEmail->Name = L"tbStudentEmail";
			this->tbStudentEmail->Size = System::Drawing::Size(250, 31);
			this->tbStudentEmail->TabIndex = 3;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(19, 243);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(106, 25);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Password";
			// 
			// tbPassword
			// 
			this->tbPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbPassword->Location = System::Drawing::Point(186, 243);
			this->tbPassword->Name = L"tbPassword";
			this->tbPassword->Size = System::Drawing::Size(250, 31);
			this->tbPassword->TabIndex = 4;
			this->tbPassword->Text = L" ";
			this->tbPassword->UseSystemPasswordChar = true;
			// 
			// llLogin
			// 
			this->llLogin->AutoSize = true;
			this->llLogin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->llLogin->Location = System::Drawing::Point(379, 344);
			this->llLogin->Name = L"llLogin";
			this->llLogin->Size = System::Drawing::Size(57, 24);
			this->llLogin->TabIndex = 6;
			this->llLogin->TabStop = true;
			this->llLogin->Text = L"Login";
			this->llLogin->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &RegisterForm::llLogin_LinkClicked);
			// 
			// btnOkk
			// 
			this->btnOkk->Location = System::Drawing::Point(344, 294);
			this->btnOkk->Name = L"btnOkk";
			this->btnOkk->Size = System::Drawing::Size(92, 32);
			this->btnOkk->TabIndex = 5;
			this->btnOkk->Text = L"Register";
			this->btnOkk->UseVisualStyleBackColor = true;
			this->btnOkk->Click += gcnew System::EventHandler(this, &RegisterForm::btnOkk_Click);
			// 
			// RegisterForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(453, 393);
			this->Controls->Add(this->btnOkk);
			this->Controls->Add(this->llLogin);
			this->Controls->Add(this->tbPassword);
			this->Controls->Add(this->tbStudentEmail);
			this->Controls->Add(this->tbLastName);
			this->Controls->Add(this->tbFirstName);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"RegisterForm";
			this->Text = L"RegisterForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();


	}
	public: bool switchToLogin = false;
	private: System::Void llLogin_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		this->switchToLogin = true;
		this->Close();
	}
	public: Student^ user = nullptr;

	private: System::Void btnOkk_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ FirstName = tbFirstName->Text;
		String^ LastName = tbLastName->Text;
		String^ StudentEmail = tbStudentEmail->Text;
		String^ Password = tbPassword->Text;


		if (FirstName->Length == 0 || LastName->Length == 0
			|| StudentEmail->Length == 0
			|| Password->Length == 0) {

			MessageBox::Show("Please enter all the fields",
				"On or more empty fields", MessageBoxButtons::OK);
			return;
		}

		void btnOkk_Click(Object ^ sender, EventArgs ^ e);

		try {

			String^ connString = "Data Source=LAPTOP-5HP5FUTU;Initial Catalog=ProjectSAP;Integrated Security=True";
			SqlConnection^ sqlConn = gcnew SqlConnection(connString);
			sqlConn -> Open();

			String^ storedProcedureName = "NewStudent";  // Replace with the name of your stored procedure

			SqlCommand^ cmd = sqlConn->CreateCommand();
			cmd->CommandText = storedProcedureName;
			cmd->CommandType = CommandType::StoredProcedure;

			// Add parameters for the stored procedure
			cmd->Parameters->Add(gcnew SqlParameter("@Email", SqlDbType::VarChar, 100));
			cmd->Parameters->Add(gcnew SqlParameter("@Password", SqlDbType::VarChar, 100));
			cmd->Parameters->Add(gcnew SqlParameter("@FirstName", SqlDbType::VarChar, 100));
			cmd->Parameters->Add(gcnew SqlParameter("@LastName", SqlDbType::VarChar, 100));
			

			cmd->Parameters["@Email"]->Value = tbStudentEmail->Text;  // Assuming you have a TextBox control named textBoxPhone
			cmd->Parameters["@Password"]->Value = tbPassword->Text;
			cmd->Parameters["@FirstName"]->Value = tbFirstName->Text;  // Assuming you have a TextBox control named textBoxName
			cmd->Parameters["@LastName"]->Value = tbLastName->Text;  // Assuming you have a TextBox control named textBoxEmail
			

			cmd->ExecuteNonQuery();  // Execute the stored procedure 


			MessageBox::Show("Successfully registered a new user!", "Registration Successful", MessageBoxButtons::OK);
		}

		catch (Exception^ ex) {
			Console::WriteLine(ex->Message);

			MessageBox::Show(" Failed to register new user. Exception: " + ex->Message,
				"Register Unsuccessful", MessageBoxButtons::OK);
		}



	};
	};
}
