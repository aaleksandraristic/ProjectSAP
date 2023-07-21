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
	/// Summary for LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
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
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ tbEmail;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ tbPassword;
	private: System::Windows::Forms::Button^ btnOk;

	private: System::Windows::Forms::LinkLabel^ llRegister;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tbEmail = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tbPassword = (gcnew System::Windows::Forms::TextBox());
			this->btnOk = (gcnew System::Windows::Forms::Button());
			this->llRegister = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(269, 52);
			this->label1->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(65, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Login";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(99, 124);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(65, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Email";
			// 
			// tbEmail
			// 
			this->tbEmail->Location = System::Drawing::Point(184, 121);
			this->tbEmail->Name = L"tbEmail";
			this->tbEmail->Size = System::Drawing::Size(372, 31);
			this->tbEmail->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(58, 192);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(106, 25);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Password";
			// 
			// tbPassword
			// 
			this->tbPassword->Location = System::Drawing::Point(184, 186);
			this->tbPassword->Name = L"tbPassword";
			this->tbPassword->PasswordChar = '*';
			this->tbPassword->Size = System::Drawing::Size(372, 31);
			this->tbPassword->TabIndex = 4;
			// 
			// btnOk
			// 
			this->btnOk->Location = System::Drawing::Point(456, 233);
			this->btnOk->Name = L"btnOk";
			this->btnOk->Size = System::Drawing::Size(100, 43);
			this->btnOk->TabIndex = 5;
			this->btnOk->Text = L"Login";
			this->btnOk->UseVisualStyleBackColor = true;
			this->btnOk->Click += gcnew System::EventHandler(this, &LoginForm::btnOk_Click);
			// 
			// llRegister
			// 
			this->llRegister->AutoSize = true;
			this->llRegister->Location = System::Drawing::Point(464, 299);
			this->llRegister->Name = L"llRegister";
			this->llRegister->Size = System::Drawing::Size(92, 25);
			this->llRegister->TabIndex = 7;
			this->llRegister->TabStop = true;
			this->llRegister->Text = L"Register";
			this->llRegister->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &LoginForm::llRegister_LinkClicked);
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(568, 357);
			this->Controls->Add(this->llRegister);
			this->Controls->Add(this->btnOk);
			this->Controls->Add(this->tbPassword);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->tbEmail);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"LoginForm";
			this->Text = L"LoginForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
		   public: Student^ user = nullptr;
private: System::Void btnOk_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ email = this->tbEmail->Text;
	String^ password = this->tbPassword->Text;

	if (email->Length == 0 || password->Length == 0) {
		MessageBox::Show("Please enter email and password",
			"Email or Password Empty", MessageBoxButtons::OK);
		return;
	}
	try {
		String^ connString = "Data Source=LAPTOP-5HP5FUTU;Initial Catalog=ProjectSAP;Integrated Security=True";
		SqlConnection sqlConn(connString);
		sqlConn.Open();

		String^ sqlQuery = "SELECT * FROM Student WHERE StudentEmail = @email AND PasswordHash = @password";
		SqlCommand command(sqlQuery, % sqlConn);

		command.Parameters->AddWithValue("@email", email);
		command.Parameters->AddWithValue("@password", password);
		SqlDataReader^ reader = command.ExecuteReader();

		if (reader->Read()) {
			user = gcnew Student;
			//user->id = reader->GetInt32(0);
			user->StudentEmail = reader->GetString(0);
			user->PasswordHash = reader->GetString(1);
			//user->First_name = reader->GetString(2);
			//user->Last_name = reader->GetString(3);
			LogHistory("Success");
			this->Close();
		}
		else {
			LogHistory("Failure");
			MessageBox::Show("Email or password is incorrect",
				"Email or Password Error", MessageBoxButtons::OK);
		}


}
	catch (Exception^ e) {
		MessageBox::Show("Failed to connect to database",
			"Database Connection Error", MessageBoxButtons::OK);
	}


}
	   public: bool switchToRegister = false;

private: System::Void llRegister_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	this-> switchToRegister = true;
	this->Close();
}

private: System::Void LogHistory(System::String^ status) {

	String^ connString = "Data Source=LAPTOP-5HP5FUTU;Initial Catalog=ProjectSAP;Integrated Security=True";
	SqlConnection^ sqlConn = gcnew SqlConnection(connString);
	sqlConn->Open();

	String^ storedProcedureName = "InsertLogInHistory";  // Replace with the name of your stored procedure

	SqlCommand^ cmd = sqlConn->CreateCommand();
	cmd->CommandText = storedProcedureName;
	cmd->CommandType = CommandType::StoredProcedure;

	// Add parameters for the stored procedure
	cmd->Parameters->Add(gcnew SqlParameter("@Email", SqlDbType::VarChar, 100));
	cmd->Parameters->Add(gcnew SqlParameter("@LoginStatus", SqlDbType::VarChar, 20));
	cmd->Parameters["@Email"]->Value = this->tbEmail->Text;
	cmd->Parameters["@LoginStatus"]->Value = status;
	cmd->ExecuteNonQuery();  // Execute the stored procedure 

}

};


}
