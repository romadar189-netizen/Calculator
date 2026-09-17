#pragma once

namespace TestProject1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}


	protected:

	protected:


	private: System::Windows::Forms::Label^ Label_MainText;
	private: System::Windows::Forms::Button^ BTN_Close;
	private: System::Windows::Forms::Label^ L_Result;
	private: System::Windows::Forms::Button^ btn_AC;
	private: System::Windows::Forms::Button^ btn_minus_plus;
	private: System::Windows::Forms::Button^ btnpercent;





	private: System::Windows::Forms::Button^ BTN_Divide;
	private: System::Windows::Forms::Button^ BTN_Mult;


	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ BTN_Plus;

	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ BTN_Minus;

	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ BTN_Equl;
	private: System::Windows::Forms::Button^ btn_dot;



	private: System::Windows::Forms::Button^ button20;




	protected:






	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Label_MainText = (gcnew System::Windows::Forms::Label());
			this->BTN_Close = (gcnew System::Windows::Forms::Button());
			this->L_Result = (gcnew System::Windows::Forms::Label());
			this->btn_AC = (gcnew System::Windows::Forms::Button());
			this->btn_minus_plus = (gcnew System::Windows::Forms::Button());
			this->btnpercent = (gcnew System::Windows::Forms::Button());
			this->BTN_Divide = (gcnew System::Windows::Forms::Button());
			this->BTN_Mult = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->BTN_Plus = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->BTN_Minus = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->BTN_Equl = (gcnew System::Windows::Forms::Button());
			this->btn_dot = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Label_MainText
			// 
			this->Label_MainText->AutoSize = true;
			this->Label_MainText->Location = System::Drawing::Point(187, 75);
			this->Label_MainText->Name = L"Label_MainText";
			this->Label_MainText->Size = System::Drawing::Size(0, 13);
			this->Label_MainText->TabIndex = 2;
			// 
			// BTN_Close
			// 
			this->BTN_Close->BackColor = System::Drawing::Color::Red;
			this->BTN_Close->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->BTN_Close->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->BTN_Close->ForeColor = System::Drawing::Color::White;
			this->BTN_Close->Location = System::Drawing::Point(256, 10);
			this->BTN_Close->Margin = System::Windows::Forms::Padding(1);
			this->BTN_Close->Name = L"BTN_Close";
			this->BTN_Close->Size = System::Drawing::Size(25, 25);
			this->BTN_Close->TabIndex = 3;
			this->BTN_Close->Text = L"X";
			this->BTN_Close->UseVisualStyleBackColor = false;
			this->BTN_Close->Click += gcnew System::EventHandler(this, &MyForm::BTN_Close_Click);
			// 
			// L_Result
			// 
			this->L_Result->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->L_Result->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->L_Result->Location = System::Drawing::Point(18, 61);
			this->L_Result->Name = L"L_Result";
			this->L_Result->Size = System::Drawing::Size(263, 49);
			this->L_Result->TabIndex = 4;
			this->L_Result->Text = L"0";
			this->L_Result->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// btn_AC
			// 
			this->btn_AC->BackColor = System::Drawing::Color::Yellow;
			this->btn_AC->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_AC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_AC->Location = System::Drawing::Point(18, 122);
			this->btn_AC->Name = L"btn_AC";
			this->btn_AC->Size = System::Drawing::Size(65, 55);
			this->btn_AC->TabIndex = 5;
			this->btn_AC->Text = L"AC";
			this->btn_AC->UseVisualStyleBackColor = false;
			this->btn_AC->Click += gcnew System::EventHandler(this, &MyForm::btn_AC_Click);
			// 
			// btn_minus_plus
			// 
			this->btn_minus_plus->BackColor = System::Drawing::Color::Yellow;
			this->btn_minus_plus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_minus_plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_minus_plus->Location = System::Drawing::Point(84, 122);
			this->btn_minus_plus->Name = L"btn_minus_plus";
			this->btn_minus_plus->Size = System::Drawing::Size(65, 55);
			this->btn_minus_plus->TabIndex = 6;
			this->btn_minus_plus->Text = L"+/-";
			this->btn_minus_plus->UseVisualStyleBackColor = false;
			this->btn_minus_plus->Click += gcnew System::EventHandler(this, &MyForm::btn_minus_plus_Click);
			// 
			// btnpercent
			// 
			this->btnpercent->BackColor = System::Drawing::Color::Yellow;
			this->btnpercent->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnpercent->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnpercent->Location = System::Drawing::Point(150, 122);
			this->btnpercent->Name = L"btnpercent";
			this->btnpercent->Size = System::Drawing::Size(65, 55);
			this->btnpercent->TabIndex = 7;
			this->btnpercent->Text = L"%";
			this->btnpercent->UseVisualStyleBackColor = false;
			this->btnpercent->Click += gcnew System::EventHandler(this, &MyForm::btnpercent_Click);
			// 
			// BTN_Divide
			// 
			this->BTN_Divide->BackColor = System::Drawing::Color::Coral;
			this->BTN_Divide->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->BTN_Divide->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->BTN_Divide->Location = System::Drawing::Point(216, 122);
			this->BTN_Divide->Name = L"BTN_Divide";
			this->BTN_Divide->Size = System::Drawing::Size(65, 55);
			this->BTN_Divide->TabIndex = 8;
			this->BTN_Divide->Text = L"/";
			this->BTN_Divide->UseVisualStyleBackColor = false;
			this->BTN_Divide->Click += gcnew System::EventHandler(this, &MyForm::BTN_Divide_Click);
			// 
			// BTN_Mult
			// 
			this->BTN_Mult->BackColor = System::Drawing::Color::Coral;
			this->BTN_Mult->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->BTN_Mult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->BTN_Mult->Location = System::Drawing::Point(216, 188);
			this->BTN_Mult->Name = L"BTN_Mult";
			this->BTN_Mult->Size = System::Drawing::Size(65, 55);
			this->BTN_Mult->TabIndex = 12;
			this->BTN_Mult->Text = L"*";
			this->BTN_Mult->UseVisualStyleBackColor = false;
			this->BTN_Mult->Click += gcnew System::EventHandler(this, &MyForm::BTN_Mult_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(150, 188);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(65, 55);
			this->button6->TabIndex = 11;
			this->button6->Text = L"3";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::BTN_Add_Number);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->Location = System::Drawing::Point(84, 188);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(65, 55);
			this->button7->TabIndex = 10;
			this->button7->Text = L"2";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::BTN_Add_Number);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->Location = System::Drawing::Point(18, 188);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(65, 55);
			this->button8->TabIndex = 9;
			this->button8->Text = L"1";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::BTN_Add_Number);
			// 
			// BTN_Plus
			// 
			this->BTN_Plus->BackColor = System::Drawing::Color::Coral;
			this->BTN_Plus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->BTN_Plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->BTN_Plus->Location = System::Drawing::Point(216, 253);
			this->BTN_Plus->Name = L"BTN_Plus";
			this->BTN_Plus->Size = System::Drawing::Size(65, 55);
			this->BTN_Plus->TabIndex = 16;
			this->BTN_Plus->Text = L"+";
			this->BTN_Plus->UseVisualStyleBackColor = false;
			this->BTN_Plus->Click += gcnew System::EventHandler(this, &MyForm::BTN_Plus_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->Location = System::Drawing::Point(150, 253);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(65, 55);
			this->button10->TabIndex = 15;
			this->button10->Text = L"6";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::BTN_Add_Number);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button11->Location = System::Drawing::Point(84, 253);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(65, 55);
			this->button11->TabIndex = 14;
			this->button11->Text = L"5";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::BTN_Add_Number);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button12->Location = System::Drawing::Point(18, 253);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(65, 55);
			this->button12->TabIndex = 13;
			this->button12->Text = L"4";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::BTN_Add_Number);
			// 
			// BTN_Minus
			// 
			this->BTN_Minus->BackColor = System::Drawing::Color::Coral;
			this->BTN_Minus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->BTN_Minus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->BTN_Minus->Location = System::Drawing::Point(216, 321);
			this->BTN_Minus->Name = L"BTN_Minus";
			this->BTN_Minus->Size = System::Drawing::Size(65, 55);
			this->BTN_Minus->TabIndex = 20;
			this->BTN_Minus->Text = L"-";
			this->BTN_Minus->UseVisualStyleBackColor = false;
			this->BTN_Minus->Click += gcnew System::EventHandler(this, &MyForm::BTN_Minus_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button14->Location = System::Drawing::Point(150, 321);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(65, 55);
			this->button14->TabIndex = 19;
			this->button14->Text = L"9";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::BTN_Add_Number);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button15->Location = System::Drawing::Point(84, 321);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(65, 55);
			this->button15->TabIndex = 18;
			this->button15->Text = L"8";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::BTN_Add_Number);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button16->Location = System::Drawing::Point(18, 321);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(65, 55);
			this->button16->TabIndex = 17;
			this->button16->Text = L"7";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::BTN_Add_Number);
			// 
			// BTN_Equl
			// 
			this->BTN_Equl->BackColor = System::Drawing::Color::Coral;
			this->BTN_Equl->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->BTN_Equl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->BTN_Equl->Location = System::Drawing::Point(216, 387);
			this->BTN_Equl->Name = L"BTN_Equl";
			this->BTN_Equl->Size = System::Drawing::Size(65, 55);
			this->BTN_Equl->TabIndex = 24;
			this->BTN_Equl->Text = L"=";
			this->BTN_Equl->UseVisualStyleBackColor = false;
			this->BTN_Equl->Click += gcnew System::EventHandler(this, &MyForm::BTN_Equl_Click);
			// 
			// btn_dot
			// 
			this->btn_dot->BackColor = System::Drawing::Color::WhiteSmoke;
			this->btn_dot->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_dot->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_dot->Location = System::Drawing::Point(150, 387);
			this->btn_dot->Name = L"btn_dot";
			this->btn_dot->Size = System::Drawing::Size(65, 55);
			this->btn_dot->TabIndex = 23;
			this->btn_dot->Text = L".";
			this->btn_dot->UseVisualStyleBackColor = false;
			this->btn_dot->Click += gcnew System::EventHandler(this, &MyForm::btn_dot_Click);
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button20->Location = System::Drawing::Point(18, 387);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(131, 55);
			this->button20->TabIndex = 21;
			this->button20->Text = L"0";
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::BTN_Add_Number);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DimGray;
			this->ClientSize = System::Drawing::Size(300, 500);
			this->Controls->Add(this->BTN_Equl);
			this->Controls->Add(this->btn_dot);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->BTN_Minus);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->BTN_Plus);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->BTN_Mult);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->BTN_Divide);
			this->Controls->Add(this->btnpercent);
			this->Controls->Add(this->btn_minus_plus);
			this->Controls->Add(this->btn_AC);
			this->Controls->Add(this->L_Result);
			this->Controls->Add(this->BTN_Close);
			this->Controls->Add(this->Label_MainText);
			this->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Kalkulator";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: float first_number;
	private: char user_symbol = ' ';
		private: bool is_equal = false;



	private: System::Void BTN_Close_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void BTN_Add_Number(System::Object^ sender, System::EventArgs^ e) {
		Button^ btn = safe_cast<Button^>(sender);
		if (this->L_Result->Text == "0" || is_equal)
		{
			this->L_Result->Text = btn->Text;
			is_equal = false;
		}
		else {
			this->L_Result->Text = this->L_Result->Text + btn->Text;
		}
	}

	private: System::Void Math_Action(char symbol) {
		this->first_number = Convert::ToDouble(this->L_Result->Text);
		this->user_symbol = symbol;
		this->L_Result->Text = "0";
	}

	private: System::Void BTN_Plus_Click(System::Object^ sender, System::EventArgs^ e) {
		Math_Action('+');
	}
	private: System::Void BTN_Minus_Click(System::Object^ sender, System::EventArgs^ e) {
		Math_Action('-');
	}
	private: System::Void BTN_Mult_Click(System::Object^ sender, System::EventArgs^ e) {
		Math_Action('*');
	}
	private: System::Void BTN_Divide_Click(System::Object^ sender, System::EventArgs^ e) {
		Math_Action('/');
	}

	private: System::Void BTN_Equl_Click(System::Object^ sender, System::EventArgs^ e) {
		if (user_symbol == ' ') {
			MessageBox::Show(this, "You need to choose an operation first", "Error", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			return;
		}

		float second_number = Convert::ToDouble(this->L_Result->Text);
		float res;
		switch (this->user_symbol)
		{
		case '+': {
			res = this->first_number + second_number;
			break;
		}
		case '-': {
			res = this->first_number - second_number;
			break;
		}
		case '*': {
			res = this->first_number * second_number;
			break;
		}
		case '%': {
			res = this->first_number * second_number / 100;
			break;
		}
		case '/': {
			if (second_number == 0) {
				res = 0;
				MessageBox::Show(this, "1 / 0 - nonono, 2 / 2 - yes", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else {
				res = this->first_number / second_number;
			}
			break;
		}
		}
		is_equal = true;
		this->L_Result->Text = Convert::ToString(res);
	}
	private: System::Void btn_AC_Click(System::Object^ sender, System::EventArgs^ e) {
		this->L_Result->Text = "0";
		this->first_number = 0;
		this->user_symbol = ' ';
		is_equal = false;
	}
private: System::Void btn_minus_plus_Click(System::Object^ sender, System::EventArgs^ e) {
	float num = System::Convert::ToDouble(this->L_Result->Text);
	num *= -1;
	this->L_Result->Text = System::Convert::ToString(num);
}
private: System::Void btnpercent_Click(System::Object^ sender, System::EventArgs^ e) {
	Math_Action('%');
}
private: System::Void btn_dot_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!this->L_Result->Text->Contains(",")) {
		this->L_Result->Text = this->L_Result->Text + ",";
	}
}
};
}
		   