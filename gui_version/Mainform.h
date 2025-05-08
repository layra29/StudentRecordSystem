#pragma once
#include "Student.h"
#include <msclr/marshal_cppstd.h>
namespace StudentRecordGUIv2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Mainform
	/// </summary>
	public ref class Mainform : public System::Windows::Forms::Form
	{
	public:
		Mainform(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Mainform()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnShowStudents;
	private: System::Windows::Forms::Label^ lblID;
	private: System::Windows::Forms::Label^ lblName;
	private: System::Windows::Forms::Label^ lblGPA;
	private: System::Windows::Forms::Label^ lblMajor;
	private: System::Windows::Forms::TextBox^ txtID;
	private: System::Windows::Forms::TextBox^ txtName;
	private: System::Windows::Forms::TextBox^ txtGPA;
	private: System::Windows::Forms::TextBox^ txtMajor;
	private: System::Windows::Forms::Button^ btnAddStudent;
	private: System::Windows::Forms::TextBox^ txtStudentOutput;
	private: System::Windows::Forms::Button^ btnSearchStudent;
	private: System::Windows::Forms::TextBox^ txtSearchID;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ btnClearOutput;



	protected:

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
			this->btnShowStudents = (gcnew System::Windows::Forms::Button());
			this->lblID = (gcnew System::Windows::Forms::Label());
			this->lblName = (gcnew System::Windows::Forms::Label());
			this->lblGPA = (gcnew System::Windows::Forms::Label());
			this->lblMajor = (gcnew System::Windows::Forms::Label());
			this->txtID = (gcnew System::Windows::Forms::TextBox());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->txtGPA = (gcnew System::Windows::Forms::TextBox());
			this->txtMajor = (gcnew System::Windows::Forms::TextBox());
			this->btnAddStudent = (gcnew System::Windows::Forms::Button());
			this->txtStudentOutput = (gcnew System::Windows::Forms::TextBox());
			this->btnSearchStudent = (gcnew System::Windows::Forms::Button());
			this->txtSearchID = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->btnClearOutput = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnShowStudents
			// 
			this->btnShowStudents->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->btnShowStudents->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnShowStudents->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnShowStudents->Location = System::Drawing::Point(0, 3);
			this->btnShowStudents->Name = L"btnShowStudents";
			this->btnShowStudents->Size = System::Drawing::Size(130, 41);
			this->btnShowStudents->TabIndex = 0;
			this->btnShowStudents->Text = L"Show All";
			this->btnShowStudents->UseVisualStyleBackColor = false;
			this->btnShowStudents->Click += gcnew System::EventHandler(this, &Mainform::btnShowStudents_Click);
			// 
			// lblID
			// 
			this->lblID->AutoSize = true;
			this->lblID->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblID->Location = System::Drawing::Point(464, 92);
			this->lblID->Name = L"lblID";
			this->lblID->Size = System::Drawing::Size(96, 26);
			this->lblID->TabIndex = 1;
			this->lblID->Text = L"Student ID";
			// 
			// lblName
			// 
			this->lblName->AutoSize = true;
			this->lblName->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblName->Location = System::Drawing::Point(468, 16);
			this->lblName->Name = L"lblName";
			this->lblName->Size = System::Drawing::Size(88, 26);
			this->lblName->TabIndex = 2;
			this->lblName->Text = L"Full Name";
			// 
			// lblGPA
			// 
			this->lblGPA->AutoSize = true;
			this->lblGPA->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblGPA->Location = System::Drawing::Point(489, 168);
			this->lblGPA->Name = L"lblGPA";
			this->lblGPA->Size = System::Drawing::Size(47, 26);
			this->lblGPA->TabIndex = 3;
			this->lblGPA->Text = L"GPA";
			// 
			// lblMajor
			// 
			this->lblMajor->AutoSize = true;
			this->lblMajor->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblMajor->Location = System::Drawing::Point(484, 244);
			this->lblMajor->Name = L"lblMajor";
			this->lblMajor->Size = System::Drawing::Size(56, 26);
			this->lblMajor->TabIndex = 4;
			this->lblMajor->Text = L"Major";
			// 
			// txtID
			// 
			this->txtID->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtID->Location = System::Drawing::Point(388, 126);
			this->txtID->Name = L"txtID";
			this->txtID->Size = System::Drawing::Size(248, 34);
			this->txtID->TabIndex = 5;
			// 
			// txtName
			// 
			this->txtName->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtName->Location = System::Drawing::Point(389, 50);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(246, 34);
			this->txtName->TabIndex = 6;
			// 
			// txtGPA
			// 
			this->txtGPA->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtGPA->Location = System::Drawing::Point(389, 202);
			this->txtGPA->Name = L"txtGPA";
			this->txtGPA->Size = System::Drawing::Size(246, 34);
			this->txtGPA->TabIndex = 7;
			// 
			// txtMajor
			// 
			this->txtMajor->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtMajor->Location = System::Drawing::Point(389, 278);
			this->txtMajor->Name = L"txtMajor";
			this->txtMajor->Size = System::Drawing::Size(246, 34);
			this->txtMajor->TabIndex = 8;
			// 
			// btnAddStudent
			// 
			this->btnAddStudent->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnAddStudent->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnAddStudent->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAddStudent->Location = System::Drawing::Point(24, 21);
			this->btnAddStudent->Name = L"btnAddStudent";
			this->btnAddStudent->Size = System::Drawing::Size(130, 79);
			this->btnAddStudent->TabIndex = 9;
			this->btnAddStudent->Text = L"Add Student";
			this->btnAddStudent->UseVisualStyleBackColor = false;
			this->btnAddStudent->Click += gcnew System::EventHandler(this, &Mainform::btnAddStudent_Click);
			// 
			// txtStudentOutput
			// 
			this->txtStudentOutput->Font = (gcnew System::Drawing::Font(L"Consolas", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtStudentOutput->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->txtStudentOutput->Location = System::Drawing::Point(0, 50);
			this->txtStudentOutput->Multiline = true;
			this->txtStudentOutput->Name = L"txtStudentOutput";
			this->txtStudentOutput->ReadOnly = true;
			this->txtStudentOutput->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->txtStudentOutput->Size = System::Drawing::Size(356, 198);
			this->txtStudentOutput->TabIndex = 10;
			// 
			// btnSearchStudent
			// 
			this->btnSearchStudent->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->btnSearchStudent->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnSearchStudent->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSearchStudent->Location = System::Drawing::Point(0, 409);
			this->btnSearchStudent->Name = L"btnSearchStudent";
			this->btnSearchStudent->Size = System::Drawing::Size(170, 38);
			this->btnSearchStudent->TabIndex = 11;
			this->btnSearchStudent->Text = L"Search by ID";
			this->btnSearchStudent->UseVisualStyleBackColor = false;
			this->btnSearchStudent->Click += gcnew System::EventHandler(this, &Mainform::btnSearchStudent_Click);
			// 
			// txtSearchID
			// 
			this->txtSearchID->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtSearchID->Location = System::Drawing::Point(0, 466);
			this->txtSearchID->Name = L"txtSearchID";
			this->txtSearchID->Size = System::Drawing::Size(170, 34);
			this->txtSearchID->TabIndex = 12;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->btnAddStudent);
			this->groupBox1->Location = System::Drawing::Point(419, 331);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(200, 100);
			this->groupBox1->TabIndex = 13;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Student Information";
			// 
			// btnClearOutput
			// 
			this->btnClearOutput->BackColor = System::Drawing::SystemColors::ControlDark;
			this->btnClearOutput->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnClearOutput->Location = System::Drawing::Point(58, 278);
			this->btnClearOutput->Name = L"btnClearOutput";
			this->btnClearOutput->Size = System::Drawing::Size(175, 39);
			this->btnClearOutput->TabIndex = 14;
			this->btnClearOutput->Text = L"Clear Output";
			this->btnClearOutput->UseVisualStyleBackColor = false;
			this->btnClearOutput->Click += gcnew System::EventHandler(this, &Mainform::btnClearOutput_Click_1);
			// 
			// Mainform
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(682, 553);
			this->Controls->Add(this->btnClearOutput);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->txtSearchID);
			this->Controls->Add(this->btnSearchStudent);
			this->Controls->Add(this->txtStudentOutput);
			this->Controls->Add(this->txtMajor);
			this->Controls->Add(this->txtGPA);
			this->Controls->Add(this->txtName);
			this->Controls->Add(this->txtID);
			this->Controls->Add(this->lblMajor);
			this->Controls->Add(this->lblGPA);
			this->Controls->Add(this->lblName);
			this->Controls->Add(this->lblID);
			this->Controls->Add(this->btnShowStudents);
			this->Name = L"Mainform";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Student Record Management System";
			this->groupBox1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnShowStudents_Click(System::Object^ sender, System::EventArgs^ e) {
		StudentList list;
		list.loadFromFile(); // Load existing students

		std::string displayText = list.displayStudentsToString(); // You’ll need to implement this method in StudentList
		txtStudentOutput->Text = gcnew String(displayText.c_str());
	}
	private: System::Void btnAddStudent_Click(System::Object^ sender, System::EventArgs^ e) {
		StudentList list;
		list.loadFromFile();

		Student* newStudent = new Student;
		newStudent->id = Convert::ToInt32(txtID->Text);
		newStudent->name = msclr::interop::marshal_as<std::string>(txtName->Text);
		newStudent->gpa = (float)Convert::ToDouble(txtGPA->Text);
		newStudent->major = msclr::interop::marshal_as<std::string>(txtMajor->Text);
		newStudent->next = nullptr;

		// Insert at head (you can adjust logic if needed)
		list.addStudentDirect(newStudent);

		list.saveToFile();

		MessageBox::Show("Student added successfully!");
	}
	private: System::Void btnSearchStudent_Click(System::Object^ sender, System::EventArgs^ e) {
		StudentList list;
		list.loadFromFile();

		String^ input = txtSearchID->Text->Trim();
		if (String::IsNullOrWhiteSpace(input) || !System::Text::RegularExpressions::Regex::IsMatch(input, "^[0-9]+$")) {
			MessageBox::Show("Please enter a valid numeric Student ID.");
			return;
		}
		int targetID = Convert::ToInt32(input);
		Student* current = list.getHead();

		while (current != nullptr) {
			if (current->id == targetID) {
				String^ result = "ID: " + current->id + "\n" +
					"Name: " + gcnew String(current->name.c_str()) + "\n" +
					"GPA: " + current->gpa + "\n" +
					"Major: " + gcnew String(current->major.c_str());

				MessageBox::Show(result);
				return;
			}
			current = current->next;
		}

		MessageBox::Show("Student not found.");
	}
private: System::Void btnClearOutput_Click_1(System::Object^ sender, System::EventArgs^ e) {
	txtStudentOutput->Clear(); // This will clear the output TextBox
}
};
};
