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
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(Student^ student)
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
		~MainForm()
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
	private: System::Windows::Forms::TextBox^ tbGpa;


	private: System::Windows::Forms::Label^ label6;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ tbMailingAddress;

	private: System::Windows::Forms::Label^ label9;


	private: System::Windows::Forms::Button^ btnSubmit;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ tbStudentEmail;
	private: System::Windows::Forms::Label^ lblMajor;
	private: System::Windows::Forms::ComboBox^ comboBoxMajor;
	private: System::Windows::Forms::ComboBox^ comboBoxSemester;
	private: System::Windows::Forms::Label^ lblSemester;
	private: System::Windows::Forms::ComboBox^ comboBoxHighSchool;
	private: System::Windows::Forms::ComboBox^ comboBoxGender;















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
			this->tbGpa = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->tbMailingAddress = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->btnSubmit = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tbStudentEmail = (gcnew System::Windows::Forms::TextBox());
			this->lblMajor = (gcnew System::Windows::Forms::Label());
			this->comboBoxMajor = (gcnew System::Windows::Forms::ComboBox());
			this->comboBoxSemester = (gcnew System::Windows::Forms::ComboBox());
			this->lblSemester = (gcnew System::Windows::Forms::Label());
			this->comboBoxHighSchool = (gcnew System::Windows::Forms::ComboBox());
			this->comboBoxGender = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(178, 22);
			this->label1->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(318, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Student Application Form";
			this->label1->Click += gcnew System::EventHandler(this, &MainForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(95, 86);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(116, 25);
			this->label2->TabIndex = 2;
			this->label2->Text = L"First Name";
			// 
			// tbFirstName
			// 
			this->tbFirstName->Location = System::Drawing::Point(323, 83);
			this->tbFirstName->Name = L"tbFirstName";
			this->tbFirstName->Size = System::Drawing::Size(350, 31);
			this->tbFirstName->TabIndex = 1;
			this->tbFirstName->TextChanged += gcnew System::EventHandler(this, &MainForm::tbFirstName_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(95, 141);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(115, 25);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Last Name";
			// 
			// tbLastName
			// 
			this->tbLastName->Location = System::Drawing::Point(323, 138);
			this->tbLastName->Name = L"tbLastName";
			this->tbLastName->Size = System::Drawing::Size(350, 31);
			this->tbLastName->TabIndex = 2;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(95, 354);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(56, 25);
			this->label4->TabIndex = 2;
			this->label4->Text = L"GPA";
			// 
			// tbGpa
			// 
			this->tbGpa->Location = System::Drawing::Point(323, 351);
			this->tbGpa->Name = L"tbGpa";
			this->tbGpa->Size = System::Drawing::Size(350, 31);
			this->tbGpa->TabIndex = 6;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(95, 403);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(190, 25);
			this->label6->TabIndex = 5;
			this->label6->Text = L"High School Name";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(12, 481);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(0, 25);
			this->label7->TabIndex = 7;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(95, 193);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(153, 25);
			this->label8->TabIndex = 8;
			this->label8->Text = L"Home Address";
			// 
			// tbMailingAddress
			// 
			this->tbMailingAddress->Location = System::Drawing::Point(323, 193);
			this->tbMailingAddress->Name = L"tbMailingAddress";
			this->tbMailingAddress->Size = System::Drawing::Size(350, 31);
			this->tbMailingAddress->TabIndex = 3;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(95, 249);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(83, 25);
			this->label9->TabIndex = 10;
			this->label9->Text = L"Gender";
			// 
			// btnSubmit
			// 
			this->btnSubmit->Location = System::Drawing::Point(266, 571);
			this->btnSubmit->Name = L"btnSubmit";
			this->btnSubmit->Size = System::Drawing::Size(124, 47);
			this->btnSubmit->TabIndex = 10;
			this->btnSubmit->Text = L"Submit";
			this->btnSubmit->UseVisualStyleBackColor = true;
			this->btnSubmit->Click += gcnew System::EventHandler(this, &MainForm::btnSubmit_Click_1);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(95, 302);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(150, 25);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Email Address";
			// 
			// tbStudentEmail
			// 
			this->tbStudentEmail->Location = System::Drawing::Point(323, 299);
			this->tbStudentEmail->Name = L"tbStudentEmail";
			this->tbStudentEmail->Size = System::Drawing::Size(350, 31);
			this->tbStudentEmail->TabIndex = 5;
			// 
			// lblMajor
			// 
			this->lblMajor->AutoSize = true;
			this->lblMajor->Location = System::Drawing::Point(95, 450);
			this->lblMajor->Name = L"lblMajor";
			this->lblMajor->Size = System::Drawing::Size(66, 25);
			this->lblMajor->TabIndex = 15;
			this->lblMajor->Text = L"Major";
			// 
			// comboBoxMajor
			// 
			this->comboBoxMajor->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxMajor->FormattingEnabled = true;
			this->comboBoxMajor->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"Computer Science", L"Business", L"Biology",
					L"Communications", L"Phschology", L"Phisical Therapy"
			});
			this->comboBoxMajor->Location = System::Drawing::Point(323, 450);
			this->comboBoxMajor->Name = L"comboBoxMajor";
			this->comboBoxMajor->Size = System::Drawing::Size(350, 33);
			this->comboBoxMajor->TabIndex = 8;
			// 
			// comboBoxSemester
			// 
			this->comboBoxSemester->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxSemester->FormattingEnabled = true;
			this->comboBoxSemester->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Fall 2023", L"Spring 2024", L"Summer 2024" });
			this->comboBoxSemester->Location = System::Drawing::Point(323, 501);
			this->comboBoxSemester->Name = L"comboBoxSemester";
			this->comboBoxSemester->Size = System::Drawing::Size(350, 33);
			this->comboBoxSemester->TabIndex = 9;
			// 
			// lblSemester
			// 
			this->lblSemester->AutoSize = true;
			this->lblSemester->Location = System::Drawing::Point(95, 501);
			this->lblSemester->Name = L"lblSemester";
			this->lblSemester->Size = System::Drawing::Size(103, 25);
			this->lblSemester->TabIndex = 18;
			this->lblSemester->Text = L"Semester";
			// 
			// comboBoxHighSchool
			// 
			this->comboBoxHighSchool->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxHighSchool->FormattingEnabled = true;
			this->comboBoxHighSchool->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Louisiana State High School", L"Gymnasium" });
			this->comboBoxHighSchool->Location = System::Drawing::Point(323, 400);
			this->comboBoxHighSchool->Name = L"comboBoxHighSchool";
			this->comboBoxHighSchool->Size = System::Drawing::Size(350, 33);
			this->comboBoxHighSchool->TabIndex = 7;
			// 
			// comboBoxGender
			// 
			this->comboBoxGender->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxGender->FormattingEnabled = true;
			this->comboBoxGender->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Male", L"Female", L"Prefer Not to Answer" });
			this->comboBoxGender->Location = System::Drawing::Point(323, 246);
			this->comboBoxGender->Name = L"comboBoxGender";
			this->comboBoxGender->Size = System::Drawing::Size(350, 33);
			this->comboBoxGender->TabIndex = 4;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(685, 647);
			this->Controls->Add(this->comboBoxGender);
			this->Controls->Add(this->comboBoxHighSchool);
			this->Controls->Add(this->comboBoxSemester);
			this->Controls->Add(this->lblSemester);
			this->Controls->Add(this->comboBoxMajor);
			this->Controls->Add(this->lblMajor);
			this->Controls->Add(this->tbStudentEmail);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->btnSubmit);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->tbMailingAddress);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->tbGpa);
			this->Controls->Add(this->tbLastName);
			this->Controls->Add(this->tbFirstName);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void btnSubmit_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	public: Student^ user = nullptr;

	private: System::Void btnSubmit_Click_1(System::Object^ sender, System::EventArgs^ e) {

		String^ StudentEmail = tbStudentEmail->Text;
		String^ FirstName = tbFirstName->Text;
		String^ LastName = tbLastName->Text;
		String^ Gender = comboBoxGender->Text;
		String^ MailingAddress = tbMailingAddress->Text;
		String^ Gpa = tbGpa->Text;
		String^ HighSchoolName = comboBoxHighSchool->Text;
		String^ Major = comboBoxMajor->Text;
		String^ Semester = comboBoxSemester->Text;


		if (StudentEmail->Length == 0 || FirstName->Length == 0 || LastName->Length == 0 || MailingAddress->Length == 0 || Gpa->Length == 0) {

			MessageBox::Show("Please enter all the fields", "On or more empty fields", MessageBoxButtons::OK);
			return;
		}


		try {

			String^ connString = "Data Source=LAPTOP-5HP5FUTU;Initial Catalog=ProjectSAP;Integrated Security=True";
			SqlConnection^ sqlConn = gcnew SqlConnection(connString);
			sqlConn->Open();

			String^ storedProcedureName = "SubmitApplication";  // Replace with the name of your stored procedure

			SqlCommand^ cmd = sqlConn->CreateCommand();
			cmd->CommandText = storedProcedureName;
			cmd->CommandType = CommandType::StoredProcedure;

			// Add parameters for the stored procedure
			cmd->Parameters->Add(gcnew SqlParameter("@FirstName", SqlDbType::VarChar, 50));
			cmd->Parameters->Add(gcnew SqlParameter("@LastName", SqlDbType::VarChar, 50));
			cmd->Parameters->Add(gcnew SqlParameter("@HomeAddress", SqlDbType::VarChar, 1000));
			cmd->Parameters->Add(gcnew SqlParameter("@Gender", SqlDbType::VarChar, 10));
			cmd->Parameters->Add(gcnew SqlParameter("@EmailAddress", SqlDbType::VarChar, 100));
			cmd->Parameters->Add(gcnew SqlParameter("@GPA", SqlDbType::Decimal, 100));
			cmd->Parameters->Add(gcnew SqlParameter("@HighSchoolName", SqlDbType::VarChar, 1000));
			cmd->Parameters->Add(gcnew SqlParameter("@MajorName", SqlDbType::VarChar, 1000));
			cmd->Parameters->Add(gcnew SqlParameter("@SemesterName", SqlDbType::VarChar, 1000));

			cmd->Parameters["@FirstName"]->Value = FirstName;
			cmd->Parameters["@LastName"]->Value = LastName;
			cmd->Parameters["@HomeAddress"]->Value = MailingAddress;
			cmd->Parameters["@Gender"]->Value = Gender;
			cmd->Parameters["@EmailAddress"]->Value = StudentEmail;
			cmd->Parameters["@GPA"]->Value = Gpa;
			cmd->Parameters["@HighSchoolName"]->Value = HighSchoolName;
			cmd->Parameters["@MajorName"]->Value = Major;
			cmd->Parameters["@SemesterName"]->Value = Semester;

			cmd->ExecuteNonQuery();  // Execute the stored procedure 

			MessageBox::Show("Successfully submitted an application!", "Application Submitted", MessageBoxButtons::OK);
		}

		catch (Exception^ ex) {
			Console::WriteLine(ex->Message);

			MessageBox::Show("Failed to submit an application. Exception: " + ex->Message,
				"Application Failed to Submit", MessageBoxButtons::OK);
		}

		//this->Close();
}

private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
	comboBoxMajor->SelectedIndex = 0;
	comboBoxSemester->SelectedIndex = 0;
	comboBoxHighSchool->SelectedIndex = 0;
	comboBoxGender->SelectedIndex = 0;
}

private: System::Void tbFirstName_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};

}
