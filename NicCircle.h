#pragma once
#include "Cir.h"

namespace cirlce1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for NicCircle
	/// </summary>
	public ref class NicCircle : public System::Windows::Forms::Form
	{
	public:
		NicCircle(void)
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
		~NicCircle()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblRadius;
	protected:
	private: System::Windows::Forms::Label^ lblPi;
	private: System::Windows::Forms::Label^ lblCircumference;
	private: System::Windows::Forms::Label^ lblArea;
	private: System::Windows::Forms::TextBox^ txtRadius;

	private: System::Windows::Forms::Label^ lblCresult;
	private: System::Windows::Forms::Label^ lblAresult;
	private: System::Windows::Forms::Button^ btnCalculate;

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
			this->lblRadius = (gcnew System::Windows::Forms::Label());
			this->lblPi = (gcnew System::Windows::Forms::Label());
			this->lblCircumference = (gcnew System::Windows::Forms::Label());
			this->lblArea = (gcnew System::Windows::Forms::Label());
			this->txtRadius = (gcnew System::Windows::Forms::TextBox());
			this->lblCresult = (gcnew System::Windows::Forms::Label());
			this->lblAresult = (gcnew System::Windows::Forms::Label());
			this->btnCalculate = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lblRadius
			// 
			this->lblRadius->AutoSize = true;
			this->lblRadius->Location = System::Drawing::Point(272, 73);
			this->lblRadius->Name = L"lblRadius";
			this->lblRadius->Size = System::Drawing::Size(46, 13);
			this->lblRadius->TabIndex = 0;
			this->lblRadius->Text = L"Radius: ";
			// 
			// lblPi
			// 
			this->lblPi->AutoSize = true;
			this->lblPi->Location = System::Drawing::Point(333, 113);
			this->lblPi->Name = L"lblPi";
			this->lblPi->Size = System::Drawing::Size(61, 13);
			this->lblPi->TabIndex = 1;
			this->lblPi->Text = L"Pi = 3.1459";
			// 
			// lblCircumference
			// 
			this->lblCircumference->AutoSize = true;
			this->lblCircumference->Location = System::Drawing::Point(272, 166);
			this->lblCircumference->Name = L"lblCircumference";
			this->lblCircumference->Size = System::Drawing::Size(78, 13);
			this->lblCircumference->TabIndex = 2;
			this->lblCircumference->Text = L"Circumference:";
			// 
			// lblArea
			// 
			this->lblArea->AutoSize = true;
			this->lblArea->Location = System::Drawing::Point(272, 203);
			this->lblArea->Name = L"lblArea";
			this->lblArea->Size = System::Drawing::Size(35, 13);
			this->lblArea->TabIndex = 3;
			this->lblArea->Text = L"Area: ";
			// 
			// txtRadius
			// 
			this->txtRadius->Location = System::Drawing::Point(354, 70);
			this->txtRadius->Name = L"txtRadius";
			this->txtRadius->Size = System::Drawing::Size(100, 20);
			this->txtRadius->TabIndex = 4;
			// 
			// lblCresult
			// 
			this->lblCresult->AutoSize = true;
			this->lblCresult->Location = System::Drawing::Point(398, 166);
			this->lblCresult->Name = L"lblCresult";
			this->lblCresult->Size = System::Drawing::Size(16, 13);
			this->lblCresult->TabIndex = 5;
			this->lblCresult->Text = L"---";
			// 
			// lblAresult
			// 
			this->lblAresult->AutoSize = true;
			this->lblAresult->Location = System::Drawing::Point(398, 203);
			this->lblAresult->Name = L"lblAresult";
			this->lblAresult->Size = System::Drawing::Size(16, 13);
			this->lblAresult->TabIndex = 6;
			this->lblAresult->Text = L"---";
			// 
			// btnCalculate
			// 
			this->btnCalculate->Location = System::Drawing::Point(302, 246);
			this->btnCalculate->Name = L"btnCalculate";
			this->btnCalculate->Size = System::Drawing::Size(140, 43);
			this->btnCalculate->TabIndex = 7;
			this->btnCalculate->Text = L"Calculate";
			this->btnCalculate->UseVisualStyleBackColor = true;
			this->btnCalculate->Click += gcnew System::EventHandler(this, &NicCircle::btnCalculate_Click);
			// 
			// NicCircle
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(761, 346);
			this->Controls->Add(this->btnCalculate);
			this->Controls->Add(this->lblAresult);
			this->Controls->Add(this->lblCresult);
			this->Controls->Add(this->txtRadius);
			this->Controls->Add(this->lblArea);
			this->Controls->Add(this->lblCircumference);
			this->Controls->Add(this->lblPi);
			this->Controls->Add(this->lblRadius);
			this->Name = L"NicCircle";
			this->Text = L"Circle Calculations";
			this->Load += gcnew System::EventHandler(this, &NicCircle::NicCircle_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void NicCircle_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnCalculate_Click(System::Object^ sender, System::EventArgs^ e) {

		circle1::Circle Cir; 
		Cir.SetR(Convert::ToInt32(txtRadius->Text));

		lblAresult->Text = Cir.Area().ToString(); 
		lblCresult->Text = Cir.Circumference().ToString(); 
	}
};
}
