#pragma once
#include <iostream>

namespace Calculator {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std::string_literals;
	using namespace std;

	enum OPERATOR { PLUS, MINUS, MULTIPLY, DIVIDE, EQUAL };

	/// <summary>
	/// Summary for UI
	/// </summary>
	public ref class UI : public System::Windows::Forms::Form
	{
	private: double num1, num2;
	private: bool initial = false, clear = true;
	private: OPERATOR o = EQUAL;
		//private: enum OPERATOR { PLUS, MINUS, MULTIPLY, DIVIDE };
		public:
			UI(void)
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
			~UI()
			{
				if (components)
				{
					delete components;
				}
			}
		private: System::Windows::Forms::Button^ button_1;
		private: System::Windows::Forms::Button^ button_0;
		private: System::Windows::Forms::Button^ button_9;
		private: System::Windows::Forms::Button^ button_8;
		private: System::Windows::Forms::Button^ button_7;
		protected:

		protected:




		private: System::Windows::Forms::Button^ button_6;
		private: System::Windows::Forms::Button^ button_5;
		private: System::Windows::Forms::Button^ button_4;



		private: System::Windows::Forms::Button^ button_3;

		private: System::Windows::Forms::Button^ button_2;
		private: System::Windows::Forms::Button^ button_Plus;
		private: System::Windows::Forms::Button^ button_Minus;
		private: System::Windows::Forms::Button^ button_Multiply;
		private: System::Windows::Forms::Button^ button_Divide;
		private: System::Windows::Forms::Button^ button_Equal;








		private: System::Windows::Forms::Button^ button_Point;
	private: System::Windows::Forms::TextBox^ textBox_Display;

		private: System::Windows::Forms::Button^ button_Restart;


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
				this->button_1 = (gcnew System::Windows::Forms::Button());
				this->button_0 = (gcnew System::Windows::Forms::Button());
				this->button_9 = (gcnew System::Windows::Forms::Button());
				this->button_8 = (gcnew System::Windows::Forms::Button());
				this->button_7 = (gcnew System::Windows::Forms::Button());
				this->button_6 = (gcnew System::Windows::Forms::Button());
				this->button_5 = (gcnew System::Windows::Forms::Button());
				this->button_4 = (gcnew System::Windows::Forms::Button());
				this->button_3 = (gcnew System::Windows::Forms::Button());
				this->button_2 = (gcnew System::Windows::Forms::Button());
				this->button_Plus = (gcnew System::Windows::Forms::Button());
				this->button_Minus = (gcnew System::Windows::Forms::Button());
				this->button_Multiply = (gcnew System::Windows::Forms::Button());
				this->button_Divide = (gcnew System::Windows::Forms::Button());
				this->button_Equal = (gcnew System::Windows::Forms::Button());
				this->button_Point = (gcnew System::Windows::Forms::Button());
				this->textBox_Display = (gcnew System::Windows::Forms::TextBox());
				this->button_Restart = (gcnew System::Windows::Forms::Button());
				this->SuspendLayout();
				// 
				// button_1
				// 
				this->button_1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->button_1->Location = System::Drawing::Point(75, 225);
				this->button_1->Name = L"button_1";
				this->button_1->Size = System::Drawing::Size(75, 75);
				this->button_1->TabIndex = 0;
				this->button_1->Text = L"1";
				this->button_1->UseVisualStyleBackColor = true;
				this->button_1->Click += gcnew System::EventHandler(this, &UI::Number_Button_Click);
				// 
				// button_0
				// 
				this->button_0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->button_0->Location = System::Drawing::Point(225, 675);
				this->button_0->Name = L"button_0";
				this->button_0->Size = System::Drawing::Size(75, 75);
				this->button_0->TabIndex = 1;
				this->button_0->Text = L"0";
				this->button_0->UseVisualStyleBackColor = true;
				this->button_0->Click += gcnew System::EventHandler(this, &UI::Number_Button_Click);
				// 
				// button_9
				// 
				this->button_9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->button_9->Location = System::Drawing::Point(375, 525);
				this->button_9->Name = L"button_9";
				this->button_9->Size = System::Drawing::Size(75, 75);
				this->button_9->TabIndex = 2;
				this->button_9->Text = L"9";
				this->button_9->UseVisualStyleBackColor = true;
				this->button_9->Click += gcnew System::EventHandler(this, &UI::Number_Button_Click);
				// 
				// button_8
				// 
				this->button_8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->button_8->Location = System::Drawing::Point(225, 525);
				this->button_8->Name = L"button_8";
				this->button_8->Size = System::Drawing::Size(75, 75);
				this->button_8->TabIndex = 3;
				this->button_8->Text = L"8";
				this->button_8->UseVisualStyleBackColor = true;
				this->button_8->Click += gcnew System::EventHandler(this, &UI::Number_Button_Click);
				// 
				// button_7
				// 
				this->button_7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->button_7->Location = System::Drawing::Point(75, 525);
				this->button_7->Name = L"button_7";
				this->button_7->Size = System::Drawing::Size(75, 75);
				this->button_7->TabIndex = 4;
				this->button_7->Text = L"7";
				this->button_7->UseVisualStyleBackColor = true;
				this->button_7->Click += gcnew System::EventHandler(this, &UI::Number_Button_Click);
				// 
				// button_6
				// 
				this->button_6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->button_6->Location = System::Drawing::Point(375, 375);
				this->button_6->Name = L"button_6";
				this->button_6->Size = System::Drawing::Size(75, 75);
				this->button_6->TabIndex = 5;
				this->button_6->Text = L"6";
				this->button_6->UseVisualStyleBackColor = true;
				this->button_6->Click += gcnew System::EventHandler(this, &UI::Number_Button_Click);
				// 
				// button_5
				// 
				this->button_5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->button_5->Location = System::Drawing::Point(225, 375);
				this->button_5->Name = L"button_5";
				this->button_5->Size = System::Drawing::Size(75, 75);
				this->button_5->TabIndex = 6;
				this->button_5->Text = L"5";
				this->button_5->UseVisualStyleBackColor = true;
				this->button_5->Click += gcnew System::EventHandler(this, &UI::Number_Button_Click);
				// 
				// button_4
				// 
				this->button_4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->button_4->Location = System::Drawing::Point(75, 375);
				this->button_4->Name = L"button_4";
				this->button_4->Size = System::Drawing::Size(75, 75);
				this->button_4->TabIndex = 7;
				this->button_4->Text = L"4";
				this->button_4->UseVisualStyleBackColor = true;
				this->button_4->Click += gcnew System::EventHandler(this, &UI::Number_Button_Click);
				// 
				// button_3
				// 
				this->button_3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->button_3->Location = System::Drawing::Point(375, 225);
				this->button_3->Name = L"button_3";
				this->button_3->Size = System::Drawing::Size(75, 75);
				this->button_3->TabIndex = 8;
				this->button_3->Text = L"3";
				this->button_3->UseVisualStyleBackColor = true;
				this->button_3->Click += gcnew System::EventHandler(this, &UI::Number_Button_Click);
				// 
				// button_2
				// 
				this->button_2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->button_2->Location = System::Drawing::Point(225, 225);
				this->button_2->Name = L"button_2";
				this->button_2->Size = System::Drawing::Size(75, 75);
				this->button_2->TabIndex = 9;
				this->button_2->Text = L"2";
				this->button_2->UseVisualStyleBackColor = true;
				this->button_2->Click += gcnew System::EventHandler(this, &UI::Number_Button_Click);
				// 
				// button_Plus
				// 
				this->button_Plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->button_Plus->Location = System::Drawing::Point(525, 225);
				this->button_Plus->Name = L"button_Plus";
				this->button_Plus->Size = System::Drawing::Size(75, 75);
				this->button_Plus->TabIndex = 10;
				this->button_Plus->Text = L"+";
				this->button_Plus->UseVisualStyleBackColor = true;
				this->button_Plus->Click += gcnew System::EventHandler(this, &UI::Plus_Button_Click);
				// 
				// button_Minus
				// 
				this->button_Minus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->button_Minus->Location = System::Drawing::Point(675, 225);
				this->button_Minus->Name = L"button_Minus";
				this->button_Minus->Size = System::Drawing::Size(75, 75);
				this->button_Minus->TabIndex = 11;
				this->button_Minus->Text = L"-";
				this->button_Minus->UseVisualStyleBackColor = true;
				this->button_Minus->Click += gcnew System::EventHandler(this, &UI::Minus_Button_Click);
				// 
				// button_Multiply
				// 
				this->button_Multiply->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->button_Multiply->Location = System::Drawing::Point(525, 375);
				this->button_Multiply->Name = L"button_Multiply";
				this->button_Multiply->Size = System::Drawing::Size(75, 75);
				this->button_Multiply->TabIndex = 12;
				this->button_Multiply->Text = L"*";
				this->button_Multiply->UseVisualStyleBackColor = true;
				this->button_Multiply->Click += gcnew System::EventHandler(this, &UI::Multiply_Button_Click);
				// 
				// button_Divide
				// 
				this->button_Divide->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->button_Divide->Location = System::Drawing::Point(675, 375);
				this->button_Divide->Name = L"button_Divide";
				this->button_Divide->Size = System::Drawing::Size(75, 75);
				this->button_Divide->TabIndex = 13;
				this->button_Divide->Text = L"/";
				this->button_Divide->UseVisualStyleBackColor = true;
				this->button_Divide->Click += gcnew System::EventHandler(this, &UI::Divide_Button_Click);
				// 
				// button_Equal
				// 
				this->button_Equal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->button_Equal->Location = System::Drawing::Point(600, 525);
				this->button_Equal->Name = L"button_Equal";
				this->button_Equal->Size = System::Drawing::Size(75, 75);
				this->button_Equal->TabIndex = 14;
				this->button_Equal->Text = L"=";
				this->button_Equal->UseVisualStyleBackColor = true;
				this->button_Equal->Click += gcnew System::EventHandler(this, &UI::Equal_Button_Click);
				// 
				// button_Point
				// 
				this->button_Point->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->button_Point->Location = System::Drawing::Point(375, 675);
				this->button_Point->Name = L"button_Point";
				this->button_Point->Size = System::Drawing::Size(75, 75);
				this->button_Point->TabIndex = 16;
				this->button_Point->Text = L".";
				this->button_Point->UseVisualStyleBackColor = true;
				this->button_Point->Click += gcnew System::EventHandler(this, &UI::Number_Button_Click);
				// 
				// textBox_Display
				// 
				this->textBox_Display->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 50, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->textBox_Display->Location = System::Drawing::Point(75, 75);
				this->textBox_Display->MaxLength = 17;
				this->textBox_Display->Name = L"textBox_Display";
				this->textBox_Display->ReadOnly = true;
				this->textBox_Display->Size = System::Drawing::Size(675, 83);
				this->textBox_Display->TabIndex = 17;
				this->textBox_Display->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
				// 
				// button_Restart
				// 
				this->button_Restart->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->button_Restart->Location = System::Drawing::Point(75, 675);
				this->button_Restart->Name = L"button_Restart";
				this->button_Restart->Size = System::Drawing::Size(75, 75);
				this->button_Restart->TabIndex = 18;
				this->button_Restart->Text = L"C";
				this->button_Restart->UseVisualStyleBackColor = true;
				// 
				// UI
				// 
				this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
				this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				this->ClientSize = System::Drawing::Size(809, 786);
				this->Controls->Add(this->button_Restart);
				this->Controls->Add(this->textBox_Display);
				this->Controls->Add(this->button_Point);
				this->Controls->Add(this->button_Equal);
				this->Controls->Add(this->button_Divide);
				this->Controls->Add(this->button_Multiply);
				this->Controls->Add(this->button_Minus);
				this->Controls->Add(this->button_Plus);
				this->Controls->Add(this->button_2);
				this->Controls->Add(this->button_3);
				this->Controls->Add(this->button_4);
				this->Controls->Add(this->button_5);
				this->Controls->Add(this->button_6);
				this->Controls->Add(this->button_7);
				this->Controls->Add(this->button_8);
				this->Controls->Add(this->button_9);
				this->Controls->Add(this->button_0);
				this->Controls->Add(this->button_1);
				this->Name = L"UI";
				this->Text = L"UI";
				this->Load += gcnew System::EventHandler(this, &UI::UI_Load);
				this->ResumeLayout(false);
				this->PerformLayout();

			}
#pragma endregion
			  

		private: System::Void UI_Load(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void Number_Button_Click(System::Object^ sender, System::EventArgs^ e) {
			if (clear) {
				clear = false;
				textBox_Display->Text = "";
			}
			textBox_Display->Text += ((Button^)sender)->Text;
		}
		private: System::Void setInitialNumber(OPERATOR op) {
			switch (op)
			{
				case Calculator::PLUS:
					num2 = 0;
					initial = false;
					break;
				case Calculator::MINUS:
					num2 = 0;
					initial = false;
					break;
				case Calculator::MULTIPLY:
					num2 = 1;
					initial = false;
					break;
				case Calculator::DIVIDE:
					num2 = 1;
					initial = false;
					break;
				default:
					num2 = 0;
					initial = false;
					break;
			}
		}
		private: System::Void calculation(OPERATOR op) {

			button_0->Text = "L";
			switch (op)
			{
			case Calculator::PLUS:
				button_0->Text = "I";
				num2 += num1;
				break;
			case Calculator::MINUS:
				num2 -= num1;
				break;
			case Calculator::MULTIPLY:
				num2 *= num1;
				break;
			case Calculator::DIVIDE:
				num2 /= num1;
				break;
			}
		}
		private: System::Void operate() {
			if (System::String::IsNullOrEmpty(textBox_Display->Text)) {
				return;
			}
			if (initial) {
				setInitialNumber(o);
			}
			num1 = System::Convert::ToDouble(textBox_Display->Text);
			calculation(o);
			textBox_Display->Text = (num2).ToString();
			clear = true;
		}
		private: System::Void Plus_Button_Click(System::Object^ sender, System::EventArgs^ e) {
			o = PLUS;
			operate();
		}
		private: System::Void Minus_Button_Click(System::Object^ sender, System::EventArgs^ e) {
			o = MINUS;
			operate();
		}
		private: System::Void Multiply_Button_Click(System::Object^ sender, System::EventArgs^ e) {
			o = MULTIPLY;
			operate();
		}
		private: System::Void Divide_Button_Click(System::Object^ sender, System::EventArgs^ e) {
			o = DIVIDE;
			operate();
		}
		private: System::Void Equal_Button_Click(System::Object^ sender, System::EventArgs^ e) {
			if (o != EQUAL) {
				operate();
			}
			o = EQUAL;
			clear = true;
		}
		private: System::Void Clear_Button_Click(System::Object^ sender, System::EventArgs^ e) {
			initial = true;
			textBox_Display->Text = "";
		}
};
}
