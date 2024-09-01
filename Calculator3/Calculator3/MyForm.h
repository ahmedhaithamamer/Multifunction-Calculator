#pragma once
#include <cmath>
namespace Calculator3 {
	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			// Set the form to a fixed size
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;

			// Disable the maximize button
			this->MaximizeBox = false;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ ClearLel24ra;
	protected:

	private: System::Windows::Forms::TextBox^ textBox;
	private: System::Windows::Forms::Button^ ClearNum;
	private: System::Windows::Forms::Button^ bta3Keda;
	private: System::Windows::Forms::Button^ SEVEN;
	private: System::Windows::Forms::Button^ EIGHT;
	private: System::Windows::Forms::Button^ NINE;
	protected:







	private: System::Windows::Forms::Button^ Plus;
	private: System::Windows::Forms::Button^ FOUR;
	private: System::Windows::Forms::Button^ FIVE;
	private: System::Windows::Forms::Button^ SIX;




	private: System::Windows::Forms::Button^ Minus;
	private: System::Windows::Forms::Button^ ONE;
	private: System::Windows::Forms::Button^ TWO;
	private: System::Windows::Forms::Button^ THREE;




	private: System::Windows::Forms::Button^ Multiply;
	private: System::Windows::Forms::Button^ ZERO;


	private: System::Windows::Forms::Button^ Decimal;


	private: System::Windows::Forms::Button^ EqualKam;
	private: System::Windows::Forms::Button^ Divide;



	private: System::Windows::Forms::Button^ button3;

	private: System::Windows::Forms::Button^ button22;


	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::Button^ button26;
	private: System::Windows::Forms::Button^ button27;



	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ standardToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ scientificToolStripMenuItem;



	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;







	private: System::Windows::Forms::Label^ lblShowOp;
	private: System::Windows::Forms::Button^ Log;

	private: System::Windows::Forms::Button^ LogARITHM;




	private: System::Windows::Forms::Label^ label1;







private: System::Windows::Forms::Button^ button2;
private: System::Windows::Forms::Button^ button4;


private: System::Windows::Forms::Button^ button7;
private: System::Windows::Forms::Button^ Sin;

private: System::Windows::Forms::Button^ button10;

private: System::Windows::Forms::Button^ button1;
private: System::Windows::Forms::Button^ button5;
private: System::Windows::Forms::Button^ button6;
private: System::Windows::Forms::Button^ button8;
private: System::Windows::Forms::Button^ button9;
private: System::Windows::Forms::Button^ button12;
private: System::Windows::Forms::Button^ button13;
private: System::Windows::Forms::Button^ button20;
private: System::Windows::Forms::Button^ button19;
private: System::Windows::Forms::Button^ button18;
private: System::Windows::Forms::Button^ button14;
private: System::Windows::Forms::Button^ button11;
private: System::Windows::Forms::Button^ button15;
private: System::Windows::Forms::Button^ button16;
private: System::Windows::Forms::Button^ button17;
private: System::Windows::Forms::Button^ button21;
private: System::Windows::Forms::Button^ button23;
private: System::Windows::Forms::Button^ button24;
private: System::Windows::Forms::Button^ button28;
private: System::Windows::Forms::Button^ button29;
private: System::Windows::Forms::Button^ button30;
private: System::Windows::Forms::Button^ button31;
private: System::Windows::Forms::Button^ button32;
private: System::Windows::Forms::Button^ button33;
private: System::Windows::Forms::Button^ button34;
private: System::Windows::Forms::Button^ button35;
private: System::Windows::Forms::Button^ button36;
private: System::Windows::Forms::ToolStripMenuItem^ lengthToolStripMenuItem;
private: System::Windows::Forms::TextBox^ textBox1;
private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::Button^ button37;
private: System::Windows::Forms::Button^ button38;
private: System::Windows::Forms::RadioButton^ radioButton3;
private: System::Windows::Forms::RadioButton^ radioButton2;
private: System::Windows::Forms::RadioButton^ radioButton1;
private: System::Windows::Forms::ToolStripMenuItem^ temprutureToolStripMenuItem;
private: System::Windows::Forms::TextBox^ textBox2;





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
			this->ClearLel24ra = (gcnew System::Windows::Forms::Button());
			this->textBox = (gcnew System::Windows::Forms::TextBox());
			this->ClearNum = (gcnew System::Windows::Forms::Button());
			this->bta3Keda = (gcnew System::Windows::Forms::Button());
			this->SEVEN = (gcnew System::Windows::Forms::Button());
			this->EIGHT = (gcnew System::Windows::Forms::Button());
			this->NINE = (gcnew System::Windows::Forms::Button());
			this->Plus = (gcnew System::Windows::Forms::Button());
			this->FOUR = (gcnew System::Windows::Forms::Button());
			this->FIVE = (gcnew System::Windows::Forms::Button());
			this->SIX = (gcnew System::Windows::Forms::Button());
			this->Minus = (gcnew System::Windows::Forms::Button());
			this->ONE = (gcnew System::Windows::Forms::Button());
			this->TWO = (gcnew System::Windows::Forms::Button());
			this->THREE = (gcnew System::Windows::Forms::Button());
			this->Multiply = (gcnew System::Windows::Forms::Button());
			this->ZERO = (gcnew System::Windows::Forms::Button());
			this->Decimal = (gcnew System::Windows::Forms::Button());
			this->EqualKam = (gcnew System::Windows::Forms::Button());
			this->Divide = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->standardToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->scientificToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->lengthToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->temprutureToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->lblShowOp = (gcnew System::Windows::Forms::Label());
			this->LogARITHM = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->Sin = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// ClearLel24ra
			// 
			this->ClearLel24ra->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ClearLel24ra->Font = (gcnew System::Drawing::Font(L"Wingdings", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->ClearLel24ra->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ClearLel24ra->Location = System::Drawing::Point(28, 142);
			this->ClearLel24ra->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->ClearLel24ra->Name = L"ClearLel24ra";
			this->ClearLel24ra->Size = System::Drawing::Size(80, 80);
			this->ClearLel24ra->TabIndex = 0;
			this->ClearLel24ra->Text = L"";
			this->ClearLel24ra->UseVisualStyleBackColor = false;
			this->ClearLel24ra->Click += gcnew System::EventHandler(this, &MyForm::BackSpace);
			// 
			// textBox
			// 
			this->textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox->Location = System::Drawing::Point(28, 41);
			this->textBox->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBox->Multiline = true;
			this->textBox->Name = L"textBox";
			this->textBox->Size = System::Drawing::Size(896, 93);
			this->textBox->TabIndex = 1;
			this->textBox->Text = L"0";
			this->textBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// ClearNum
			// 
			this->ClearNum->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ClearNum->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ClearNum->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ClearNum->Location = System::Drawing::Point(114, 142);
			this->ClearNum->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->ClearNum->Name = L"ClearNum";
			this->ClearNum->Size = System::Drawing::Size(80, 80);
			this->ClearNum->TabIndex = 0;
			this->ClearNum->Text = L"C";
			this->ClearNum->UseVisualStyleBackColor = false;
			this->ClearNum->Click += gcnew System::EventHandler(this, &MyForm::Clear);
			// 
			// bta3Keda
			// 
			this->bta3Keda->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bta3Keda->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bta3Keda->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->bta3Keda->Location = System::Drawing::Point(200, 142);
			this->bta3Keda->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->bta3Keda->Name = L"bta3Keda";
			this->bta3Keda->Size = System::Drawing::Size(80, 80);
			this->bta3Keda->TabIndex = 0;
			this->bta3Keda->Text = L"±";
			this->bta3Keda->UseVisualStyleBackColor = false;
			this->bta3Keda->Click += gcnew System::EventHandler(this, &MyForm::PlusMinus);
			// 
			// SEVEN
			// 
			this->SEVEN->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SEVEN->Location = System::Drawing::Point(28, 228);
			this->SEVEN->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->SEVEN->Name = L"SEVEN";
			this->SEVEN->Size = System::Drawing::Size(80, 80);
			this->SEVEN->TabIndex = 0;
			this->SEVEN->Text = L"7";
			this->SEVEN->UseVisualStyleBackColor = true;
			this->SEVEN->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// EIGHT
			// 
			this->EIGHT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EIGHT->Location = System::Drawing::Point(114, 228);
			this->EIGHT->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->EIGHT->Name = L"EIGHT";
			this->EIGHT->Size = System::Drawing::Size(80, 80);
			this->EIGHT->TabIndex = 0;
			this->EIGHT->Text = L"8";
			this->EIGHT->UseVisualStyleBackColor = true;
			this->EIGHT->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// NINE
			// 
			this->NINE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NINE->Location = System::Drawing::Point(200, 228);
			this->NINE->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->NINE->Name = L"NINE";
			this->NINE->Size = System::Drawing::Size(80, 80);
			this->NINE->TabIndex = 0;
			this->NINE->Text = L"9";
			this->NINE->UseVisualStyleBackColor = true;
			this->NINE->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// Plus
			// 
			this->Plus->BackColor = System::Drawing::Color::Orange;
			this->Plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Plus->ForeColor = System::Drawing::Color::Transparent;
			this->Plus->Location = System::Drawing::Point(286, 142);
			this->Plus->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Plus->Name = L"Plus";
			this->Plus->Size = System::Drawing::Size(80, 80);
			this->Plus->TabIndex = 0;
			this->Plus->Text = L"+";
			this->Plus->UseVisualStyleBackColor = false;
			this->Plus->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// FOUR
			// 
			this->FOUR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FOUR->Location = System::Drawing::Point(28, 314);
			this->FOUR->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->FOUR->Name = L"FOUR";
			this->FOUR->Size = System::Drawing::Size(80, 80);
			this->FOUR->TabIndex = 0;
			this->FOUR->Text = L"4";
			this->FOUR->UseVisualStyleBackColor = true;
			this->FOUR->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// FIVE
			// 
			this->FIVE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FIVE->Location = System::Drawing::Point(114, 314);
			this->FIVE->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->FIVE->Name = L"FIVE";
			this->FIVE->Size = System::Drawing::Size(80, 80);
			this->FIVE->TabIndex = 0;
			this->FIVE->Text = L"5";
			this->FIVE->UseVisualStyleBackColor = true;
			this->FIVE->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// SIX
			// 
			this->SIX->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SIX->Location = System::Drawing::Point(200, 314);
			this->SIX->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->SIX->Name = L"SIX";
			this->SIX->Size = System::Drawing::Size(80, 80);
			this->SIX->TabIndex = 0;
			this->SIX->Text = L"6";
			this->SIX->UseVisualStyleBackColor = true;
			this->SIX->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// Minus
			// 
			this->Minus->BackColor = System::Drawing::Color::Orange;
			this->Minus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Minus->ForeColor = System::Drawing::Color::Transparent;
			this->Minus->Location = System::Drawing::Point(286, 228);
			this->Minus->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Minus->Name = L"Minus";
			this->Minus->Size = System::Drawing::Size(80, 80);
			this->Minus->TabIndex = 0;
			this->Minus->Text = L"-";
			this->Minus->UseVisualStyleBackColor = false;
			this->Minus->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// ONE
			// 
			this->ONE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ONE->Location = System::Drawing::Point(28, 399);
			this->ONE->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->ONE->Name = L"ONE";
			this->ONE->Size = System::Drawing::Size(80, 80);
			this->ONE->TabIndex = 0;
			this->ONE->Text = L"1";
			this->ONE->UseVisualStyleBackColor = true;
			this->ONE->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// TWO
			// 
			this->TWO->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TWO->Location = System::Drawing::Point(114, 399);
			this->TWO->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->TWO->Name = L"TWO";
			this->TWO->Size = System::Drawing::Size(80, 80);
			this->TWO->TabIndex = 0;
			this->TWO->Text = L"2";
			this->TWO->UseVisualStyleBackColor = true;
			this->TWO->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// THREE
			// 
			this->THREE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->THREE->Location = System::Drawing::Point(200, 399);
			this->THREE->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->THREE->Name = L"THREE";
			this->THREE->Size = System::Drawing::Size(80, 80);
			this->THREE->TabIndex = 0;
			this->THREE->Text = L"3";
			this->THREE->UseVisualStyleBackColor = true;
			this->THREE->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// Multiply
			// 
			this->Multiply->BackColor = System::Drawing::Color::Orange;
			this->Multiply->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Multiply->ForeColor = System::Drawing::Color::Transparent;
			this->Multiply->Location = System::Drawing::Point(286, 314);
			this->Multiply->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Multiply->Name = L"Multiply";
			this->Multiply->Size = System::Drawing::Size(80, 80);
			this->Multiply->TabIndex = 0;
			this->Multiply->Text = L"×";
			this->Multiply->UseVisualStyleBackColor = false;
			this->Multiply->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// ZERO
			// 
			this->ZERO->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ZERO->Location = System::Drawing::Point(28, 486);
			this->ZERO->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->ZERO->Name = L"ZERO";
			this->ZERO->Size = System::Drawing::Size(80, 80);
			this->ZERO->TabIndex = 0;
			this->ZERO->Text = L"0";
			this->ZERO->UseVisualStyleBackColor = true;
			this->ZERO->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// Decimal
			// 
			this->Decimal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Decimal->Location = System::Drawing::Point(114, 486);
			this->Decimal->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Decimal->Name = L"Decimal";
			this->Decimal->Size = System::Drawing::Size(80, 80);
			this->Decimal->TabIndex = 0;
			this->Decimal->Text = L".";
			this->Decimal->UseVisualStyleBackColor = true;
			this->Decimal->Click += gcnew System::EventHandler(this, &MyForm::Dot);
			// 
			// EqualKam
			// 
			this->EqualKam->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->EqualKam->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EqualKam->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->EqualKam->Location = System::Drawing::Point(200, 486);
			this->EqualKam->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->EqualKam->Name = L"EqualKam";
			this->EqualKam->Size = System::Drawing::Size(166, 80);
			this->EqualKam->TabIndex = 0;
			this->EqualKam->Text = L"=";
			this->EqualKam->UseVisualStyleBackColor = false;
			this->EqualKam->Click += gcnew System::EventHandler(this, &MyForm::Equal);
			// 
			// Divide
			// 
			this->Divide->BackColor = System::Drawing::Color::Orange;
			this->Divide->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Divide->ForeColor = System::Drawing::Color::Transparent;
			this->Divide->Location = System::Drawing::Point(286, 399);
			this->Divide->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Divide->Name = L"Divide";
			this->Divide->Size = System::Drawing::Size(80, 80);
			this->Divide->TabIndex = 0;
			this->Divide->Text = L"÷";
			this->Divide->UseVisualStyleBackColor = false;
			this->Divide->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Cambria", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ImageKey = L"(none)";
			this->button3->Location = System::Drawing::Point(570, 142);
			this->button3->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(80, 80);
			this->button3->TabIndex = 2;
			this->button3->Text = L"x^2";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::square);
			// 
			// button22
			// 
			this->button22->Font = (gcnew System::Drawing::Font(L"Cambria", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button22->Location = System::Drawing::Point(398, 398);
			this->button22->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(80, 166);
			this->button22->TabIndex = 2;
			this->button22->Text = L"π";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::Pi);
			// 
			// button25
			// 
			this->button25->Font = (gcnew System::Drawing::Font(L"Cambria", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button25->Location = System::Drawing::Point(484, 310);
			this->button25->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(80, 80);
			this->button25->TabIndex = 2;
			this->button25->Text = L"√";
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm::root);
			// 
			// button26
			// 
			this->button26->Font = (gcnew System::Drawing::Font(L"Cambria", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button26->Location = System::Drawing::Point(484, 398);
			this->button26->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(80, 165);
			this->button26->TabIndex = 2;
			this->button26->Text = L"℮";
			this->button26->UseVisualStyleBackColor = true;
			this->button26->Click += gcnew System::EventHandler(this, &MyForm::e);
			// 
			// button27
			// 
			this->button27->Font = (gcnew System::Drawing::Font(L"Cambria", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button27->Location = System::Drawing::Point(656, 142);
			this->button27->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(80, 80);
			this->button27->TabIndex = 2;
			this->button27->Text = L"x^3";
			this->button27->UseVisualStyleBackColor = true;
			this->button27->Click += gcnew System::EventHandler(this, &MyForm::cube);
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->fileToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(4, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(947, 24);
			this->menuStrip1->TabIndex = 3;
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->standardToolStripMenuItem,
					this->scientificToolStripMenuItem, this->lengthToolStripMenuItem, this->temprutureToolStripMenuItem, this->exitToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// standardToolStripMenuItem
			// 
			this->standardToolStripMenuItem->Name = L"standardToolStripMenuItem";
			this->standardToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->standardToolStripMenuItem->Text = L"Standard";
			this->standardToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::standardToolStripMenuItem_Click);
			// 
			// scientificToolStripMenuItem
			// 
			this->scientificToolStripMenuItem->Name = L"scientificToolStripMenuItem";
			this->scientificToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->scientificToolStripMenuItem->Text = L"Scientific";
			this->scientificToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::scientificToolStripMenuItem_Click);
			// 
			// lengthToolStripMenuItem
			// 
			this->lengthToolStripMenuItem->Name = L"lengthToolStripMenuItem";
			this->lengthToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->lengthToolStripMenuItem->Text = L"Length";
			this->lengthToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::lengthToolStripMenuItem_Click);
			// 
			// temprutureToolStripMenuItem
			// 
			this->temprutureToolStripMenuItem->Name = L"temprutureToolStripMenuItem";
			this->temprutureToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->temprutureToolStripMenuItem->Text = L"Temperature";
			this->temprutureToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::temprutureToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::exitToolStripMenuItem_Click);
			// 
			// lblShowOp
			// 
			this->lblShowOp->AutoSize = true;
			this->lblShowOp->BackColor = System::Drawing::Color::White;
			this->lblShowOp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblShowOp->Location = System::Drawing::Point(30, 43);
			this->lblShowOp->Name = L"lblShowOp";
			this->lblShowOp->Size = System::Drawing::Size(0, 20);
			this->lblShowOp->TabIndex = 4;
			// 
			// LogARITHM
			// 
			this->LogARITHM->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->LogARITHM->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LogARITHM->Location = System::Drawing::Point(570, 483);
			this->LogARITHM->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->LogARITHM->Name = L"LogARITHM";
			this->LogARITHM->Size = System::Drawing::Size(80, 80);
			this->LogARITHM->TabIndex = 2;
			this->LogARITHM->Text = L"Log";
			this->LogARITHM->UseVisualStyleBackColor = false;
			this->LogARITHM->Click += gcnew System::EventHandler(this, &MyForm::Logarithm);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::White;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(116, 42);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 20);
			this->label1->TabIndex = 4;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(570, 398);
			this->button2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(80, 80);
			this->button2->TabIndex = 0;
			this->button2->Text = L"Tan";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::Tan);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(570, 312);
			this->button4->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(80, 80);
			this->button4->TabIndex = 0;
			this->button4->Text = L"Cos";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::Cos);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(656, 226);
			this->button7->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(80, 80);
			this->button7->TabIndex = 0;
			this->button7->Text = L"Sinh";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::Sinh);
			// 
			// Sin
			// 
			this->Sin->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Sin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Sin->Location = System::Drawing::Point(570, 224);
			this->Sin->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Sin->Name = L"Sin";
			this->Sin->Size = System::Drawing::Size(80, 80);
			this->Sin->TabIndex = 0;
			this->Sin->Text = L"Sin";
			this->Sin->UseVisualStyleBackColor = false;
			this->Sin->Click += gcnew System::EventHandler(this, &MyForm::sIN);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::Orange;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button10->Location = System::Drawing::Point(398, 142);
			this->button10->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(80, 80);
			this->button10->TabIndex = 0;
			this->button10->Text = L"Bin";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::Bin);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(656, 312);
			this->button1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(80, 80);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Cosh";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::Cosh);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(656, 398);
			this->button5->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(80, 80);
			this->button5->TabIndex = 0;
			this->button5->Text = L"Tanh";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::Tanh);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(656, 484);
			this->button6->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(80, 80);
			this->button6->TabIndex = 0;
			this->button6->Text = L"Sinh";
			this->button6->UseVisualStyleBackColor = false;
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Cambria", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(484, 142);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(80, 80);
			this->button8->TabIndex = 5;
			this->button8->Text = L"1/x";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::e2leb);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(484, 224);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(80, 80);
			this->button9->TabIndex = 5;
			this->button9->Text = L"lnx";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::lnx);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::Orange;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button12->Location = System::Drawing::Point(398, 226);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(80, 80);
			this->button12->TabIndex = 5;
			this->button12->Text = L"Oct";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::Octal);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::Orange;
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button13->Location = System::Drawing::Point(398, 312);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(80, 80);
			this->button13->TabIndex = 5;
			this->button13->Text = L"Hexa";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::Hexa);
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button20->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button20->Location = System::Drawing::Point(756, 224);
			this->button20->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(80, 39);
			this->button20->TabIndex = 51;
			this->button20->Text = L"M->Hm";
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button19->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button19->Location = System::Drawing::Point(756, 399);
			this->button19->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(80, 39);
			this->button19->TabIndex = 50;
			this->button19->Text = L"M->Am";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::Orange;
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button18->ForeColor = System::Drawing::Color::Transparent;
			this->button18->Location = System::Drawing::Point(842, 441);
			this->button18->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(80, 39);
			this->button18->TabIndex = 49;
			this->button18->Text = L"Yard->M";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::Orange;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->ForeColor = System::Drawing::Color::Transparent;
			this->button14->Location = System::Drawing::Point(842, 398);
			this->button14->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(80, 39);
			this->button14->TabIndex = 48;
			this->button14->Text = L"Mile->M";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click_1);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::Orange;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->ForeColor = System::Drawing::Color::Transparent;
			this->button11->Location = System::Drawing::Point(842, 351);
			this->button11->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(80, 39);
			this->button11->TabIndex = 47;
			this->button11->Text = L"Foot->M";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::Orange;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->ForeColor = System::Drawing::Color::Transparent;
			this->button15->Location = System::Drawing::Point(842, 311);
			this->button15->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(80, 39);
			this->button15->TabIndex = 46;
			this->button15->Text = L"inch->M";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button16->Location = System::Drawing::Point(842, 224);
			this->button16->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(80, 39);
			this->button16->TabIndex = 45;
			this->button16->Text = L"M->Mile";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button17->Location = System::Drawing::Point(842, 183);
			this->button17->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(80, 39);
			this->button17->TabIndex = 44;
			this->button17->Text = L"M->Foot";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button21->ForeColor = System::Drawing::Color::White;
			this->button21->Location = System::Drawing::Point(842, 523);
			this->button21->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(80, 39);
			this->button21->TabIndex = 43;
			this->button21->Text = L"Area ⬜";
			this->button21->UseVisualStyleBackColor = false;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::button21_Click);
			// 
			// button23
			// 
			this->button23->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button23->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button23->Location = System::Drawing::Point(842, 265);
			this->button23->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(80, 39);
			this->button23->TabIndex = 42;
			this->button23->Text = L"M->Yard";
			this->button23->UseVisualStyleBackColor = false;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::button23_Click);
			// 
			// button24
			// 
			this->button24->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button24->ForeColor = System::Drawing::Color::White;
			this->button24->Location = System::Drawing::Point(842, 483);
			this->button24->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(80, 39);
			this->button24->TabIndex = 41;
			this->button24->Text = L"Area ◯";
			this->button24->UseVisualStyleBackColor = false;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::button24_Click);
			// 
			// button28
			// 
			this->button28->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button28->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button28->Location = System::Drawing::Point(842, 143);
			this->button28->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(80, 39);
			this->button28->TabIndex = 40;
			this->button28->Text = L"M->inch";
			this->button28->UseVisualStyleBackColor = false;
			this->button28->Click += gcnew System::EventHandler(this, &MyForm::button28_Click);
			// 
			// button29
			// 
			this->button29->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button29->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button29->Location = System::Drawing::Point(756, 439);
			this->button29->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(80, 39);
			this->button29->TabIndex = 39;
			this->button29->Text = L"M->Tm";
			this->button29->UseVisualStyleBackColor = false;
			this->button29->Click += gcnew System::EventHandler(this, &MyForm::button29_Click);
			// 
			// button30
			// 
			this->button30->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button30->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button30->Location = System::Drawing::Point(756, 523);
			this->button30->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(80, 39);
			this->button30->TabIndex = 38;
			this->button30->Text = L"M->Gm";
			this->button30->UseVisualStyleBackColor = false;
			this->button30->Click += gcnew System::EventHandler(this, &MyForm::button30_Click);
			// 
			// button31
			// 
			this->button31->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button31->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button31->Location = System::Drawing::Point(756, 483);
			this->button31->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(80, 39);
			this->button31->TabIndex = 37;
			this->button31->Text = L"M->Mm";
			this->button31->UseVisualStyleBackColor = false;
			this->button31->Click += gcnew System::EventHandler(this, &MyForm::button31_Click);
			// 
			// button32
			// 
			this->button32->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button32->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button32->Location = System::Drawing::Point(756, 264);
			this->button32->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(80, 39);
			this->button32->TabIndex = 36;
			this->button32->Text = L"M->Km";
			this->button32->UseVisualStyleBackColor = false;
			this->button32->Click += gcnew System::EventHandler(this, &MyForm::button32_Click);
			// 
			// button33
			// 
			this->button33->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button33->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button33->Location = System::Drawing::Point(756, 353);
			this->button33->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(80, 39);
			this->button33->TabIndex = 35;
			this->button33->Text = L"M->nm";
			this->button33->UseVisualStyleBackColor = false;
			this->button33->Click += gcnew System::EventHandler(this, &MyForm::button33_Click);
			// 
			// button34
			// 
			this->button34->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button34->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button34->Location = System::Drawing::Point(756, 310);
			this->button34->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(80, 39);
			this->button34->TabIndex = 34;
			this->button34->Text = L"M->µm";
			this->button34->UseVisualStyleBackColor = false;
			this->button34->Click += gcnew System::EventHandler(this, &MyForm::button34_Click);
			// 
			// button35
			// 
			this->button35->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button35->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button35->Location = System::Drawing::Point(756, 183);
			this->button35->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(80, 39);
			this->button35->TabIndex = 33;
			this->button35->Text = L"M->mm";
			this->button35->UseVisualStyleBackColor = false;
			this->button35->Click += gcnew System::EventHandler(this, &MyForm::button35_Click);
			// 
			// button36
			// 
			this->button36->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button36->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button36->Location = System::Drawing::Point(756, 143);
			this->button36->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(80, 39);
			this->button36->TabIndex = 32;
			this->button36->Text = L"M->cm";
			this->button36->UseVisualStyleBackColor = false;
			this->button36->Click += gcnew System::EventHandler(this, &MyForm::button36_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(266, 596);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(157, 27);
			this->textBox1->TabIndex = 58;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(44, 600);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(218, 24);
			this->label5->TabIndex = 57;
			this->label5->Text = L"Enter Value to convert";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// button37
			// 
			this->button37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button37->Location = System::Drawing::Point(162, 639);
			this->button37->Margin = System::Windows::Forms::Padding(2);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(89, 35);
			this->button37->TabIndex = 56;
			this->button37->Text = L"Reset";
			this->button37->UseVisualStyleBackColor = true;
			this->button37->Click += gcnew System::EventHandler(this, &MyForm::button37_Click);
			// 
			// button38
			// 
			this->button38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button38->Location = System::Drawing::Point(48, 639);
			this->button38->Margin = System::Windows::Forms::Padding(2);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(110, 35);
			this->button38->TabIndex = 55;
			this->button38->Text = L"Convert";
			this->button38->UseVisualStyleBackColor = true;
			this->button38->Click += gcnew System::EventHandler(this, &MyForm::button38_Click);
			// 
			// radioButton3
			// 
			this->radioButton3->AccessibleRole = System::Windows::Forms::AccessibleRole::RadioButton;
			this->radioButton3->AutoSize = true;
			this->radioButton3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton3->Location = System::Drawing::Point(459, 656);
			this->radioButton3->Margin = System::Windows::Forms::Padding(2);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(85, 28);
			this->radioButton3->TabIndex = 54;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Kelvin";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton3_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AccessibleRole = System::Windows::Forms::AccessibleRole::RadioButton;
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton2->Location = System::Drawing::Point(459, 626);
			this->radioButton2->Margin = System::Windows::Forms::Padding(2);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(226, 28);
			this->radioButton2->TabIndex = 53;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Fahrenheit to Celsius";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton2_CheckedChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AccessibleRole = System::Windows::Forms::AccessibleRole::RadioButton;
			this->radioButton1->AutoSize = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton1->Location = System::Drawing::Point(459, 596);
			this->radioButton1->Margin = System::Windows::Forms::Padding(2);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(226, 28);
			this->radioButton1->TabIndex = 52;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Celsius to Fahrenheit";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(266, 639);
			this->textBox2->Margin = System::Windows::Forms::Padding(2);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(157, 27);
			this->textBox2->TabIndex = 59;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->ClientSize = System::Drawing::Size(947, 693);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button37);
			this->Controls->Add(this->button38);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button28);
			this->Controls->Add(this->button29);
			this->Controls->Add(this->button30);
			this->Controls->Add(this->button31);
			this->Controls->Add(this->button32);
			this->Controls->Add(this->button33);
			this->Controls->Add(this->button34);
			this->Controls->Add(this->button35);
			this->Controls->Add(this->button36);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lblShowOp);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->LogARITHM);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox);
			this->Controls->Add(this->Divide);
			this->Controls->Add(this->Multiply);
			this->Controls->Add(this->Minus);
			this->Controls->Add(this->Plus);
			this->Controls->Add(this->bta3Keda);
			this->Controls->Add(this->EqualKam);
			this->Controls->Add(this->THREE);
			this->Controls->Add(this->SIX);
			this->Controls->Add(this->NINE);
			this->Controls->Add(this->Decimal);
			this->Controls->Add(this->TWO);
			this->Controls->Add(this->FIVE);
			this->Controls->Add(this->EIGHT);
			this->Controls->Add(this->ClearNum);
			this->Controls->Add(this->ZERO);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->Sin);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->ONE);
			this->Controls->Add(this->FOUR);
			this->Controls->Add(this->SEVEN);
			this->Controls->Add(this->ClearLel24ra);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//initializing needed variables
		double firstDigit, secondDigit, result, a;
		float iCelsius, iFahrenheit, iKelvin;
		char iOperation;
		String^ operators;
		double pi = 3.14159265359;



		//By Ahmed Haitham Amer

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		//setting up the defult starup
		MyForm::Width = 410;
		MyForm::Height = 640;
		textBox->Width = 338;
		
	}
private: System::Void EnterNumber(System::Object^ sender, System::EventArgs^ e) {
	// numbers code
	Button^ Numbers = safe_cast<Button^>(sender);


	if (textBox->Text == "0")
	{
		textBox->Text = Numbers->Text;
	}
	else
	{
		textBox->Text = textBox->Text + Numbers->Text;
	}
}
private: System::Void EnterOperator(System::Object^ sender, System::EventArgs^ e) {
	// code for the operators
	Button^ NumbersOp = safe_cast<Button^>(sender);

	firstDigit = Double::Parse(textBox->Text);
	textBox->Text = "";
	operators = NumbersOp->Text;
	lblShowOp->Text = System::Convert::ToString(firstDigit) + " " + operators;
}
private: System::Void Dot(System::Object^ sender, System::EventArgs^ e) {
	//code for decimal

	if (!textBox->Text->Contains("."))
	{
		textBox->Text = textBox->Text + ".";
	}
}
private: System::Void Equal(System::Object^ sender, System::EventArgs^ e) {
	//Code for simple operations
	
	
	secondDigit = Double::Parse(textBox->Text);

	if (operators == "+")
	{
		result = firstDigit + secondDigit;
		textBox->Text = System::Convert::ToString(result);
	}
	else if (operators == "-")
	{
		result = firstDigit - secondDigit;
		textBox->Text = System::Convert::ToString(result);
	}
	else if (operators == "÷")
	{
		result = firstDigit / secondDigit;
		textBox->Text = System::Convert::ToString(result);
	}
	else if (operators == "×")
	{
		result = firstDigit * secondDigit;
		textBox->Text = System::Convert::ToString(result);
	}
	lblShowOp->Text = "";
}

private: System::Void PlusMinus(System::Object^ sender, System::EventArgs^ e) {
	//code for Plus Minus
	if (textBox->Text->Contains("."))
	{
		textBox->Text = textBox->Text->Remove(0, 1);
	}
	else
	{
		textBox->Text = "." + textBox->Text;
	}
}
private: System::Void BackSpace(System::Object^ sender, System::EventArgs^ e) {
	//Code for Backspace
	if(textBox->Text->Length > 0)
	{
		textBox->Text = textBox->Text->Remove(textBox->Text->Length - 1, 1);
	}

	if (textBox->Text == "")
	{
		textBox->Text = "0";
	}
}
private: System::Void Clear(System::Object^ sender, System::EventArgs^ e) {
	//code for clear
	textBox->Text = " ";
}
private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	//Code for exit
	Application::Exit();
}
private: System::Void standardToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	//Code for scientific Tab
	MyForm::Width = 410;
	MyForm::Height = 640;
	textBox->Width = 338;
}
private: System::Void scientificToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	//Code for scientific Tab
	MyForm::Width = 770;
	MyForm::Height = 640;
	textBox->Width = 708;
}
private: System::Void Pi(System::Object^ sender, System::EventArgs^ e) {
	//Pi
	textBox->Text = "3.1415";
}
private: System::Void e(System::Object^ sender, System::EventArgs^ e) {
	//e
	a = Double::Parse(textBox->Text);
	lblShowOp->Text = System::Convert::ToString("e" + "^("+ (textBox->Text) + ")");
	a = exp(a);
	textBox->Text = System::Convert::ToString(a);
}
private: System::Void root(System::Object^ sender, System::EventArgs^ e) {
	//SquareRoot
	a = Double::Parse(textBox->Text);
	a = sqrt(a);
	textBox->Text = System::Convert::ToString(a);
}
private: System::Void Logarithm(System::Object^ sender, System::EventArgs^ e) {
	//Log
	a = Double::Parse(textBox->Text);
	a = log10(a);
	textBox->Text = System::Convert::ToString(a);
}
private: System::Void sIN(System::Object^ sender, System::EventArgs^ e) {
	//Sin
	a = Double::Parse(textBox->Text);
	lblShowOp->Text = System::Convert::ToString("sin" + "(" + (textBox->Text) + ")");
	a = sin(a);
	textBox->Text = System::Convert::ToString(a);
}
private: System::Void Sinh(System::Object^ sender, System::EventArgs^ e) {
	//Sinh
	a = Double::Parse(textBox->Text);
	lblShowOp->Text = System::Convert::ToString("sinh" + "(" + (textBox->Text) + ")");
	a = sinh(a);
	textBox->Text = System::Convert::ToString(a);
}
private: System::Void Cos(System::Object^ sender, System::EventArgs^ e) {
	//Cos
	a = Double::Parse(textBox->Text);
	lblShowOp->Text = System::Convert::ToString("cos" + "(" + (textBox->Text) + ")");
	a = cos(a);
	textBox->Text = System::Convert::ToString(a);
}
private: System::Void Cosh(System::Object^ sender, System::EventArgs^ e) {
	//Cosh
	a = Double::Parse(textBox->Text);
	lblShowOp->Text = System::Convert::ToString("cosh" + "(" + (textBox->Text) + ")");
	a = cosh(a);
	textBox->Text = System::Convert::ToString(a);
}
private: System::Void Tan(System::Object^ sender, System::EventArgs^ e) {
	//Tan
	a = Double::Parse(textBox->Text);
	lblShowOp->Text = System::Convert::ToString("tan" + "(" + (textBox->Text) + ")");
	a = tan(a);
	textBox->Text = System::Convert::ToString(a);
}
private: System::Void Tanh(System::Object^ sender, System::EventArgs^ e) {
	//Tanh
	a = Double::Parse(textBox->Text);
	lblShowOp->Text = System::Convert::ToString("tanh" + "(" + (textBox->Text) + ")");
	a = tanh(a);
	textBox->Text = System::Convert::ToString(a);
}
private: System::Void square(System::Object^ sender, System::EventArgs^ e) {
	//x^2
	a = Double::Parse(textBox->Text);
	a = Math::Pow(a, 2);
	textBox->Text = System::Convert::ToString(a);
}
private: System::Void cube(System::Object^ sender, System::EventArgs^ e) {
	//x^3
	a = Double::Parse(textBox->Text);
	a = Math::Pow(a, 3);
	textBox->Text = System::Convert::ToString(a);
}
private: System::Void Bin(System::Object^ sender, System::EventArgs^ e) {
	//Binary
	int a = int::Parse(textBox->Text);
	textBox->Text = System::Convert::ToString(a, 2);
	lblShowOp->Text = "";
}
private: System::Void Octal(System::Object^ sender, System::EventArgs^ e) {
	//Octal
	int a = int::Parse(textBox->Text);
	textBox->Text = System::Convert::ToString(a, 8);
	lblShowOp->Text = "";
}
private: System::Void Hexa(System::Object^ sender, System::EventArgs^ e) {
	//hexaDecimal
	int a = int::Parse(textBox->Text);
	textBox->Text = System::Convert::ToString(a, 16);
	lblShowOp->Text = "";
}
private: System::Void e2leb(System::Object^ sender, System::EventArgs^ e) {
	//code for 1/x
	a = Double::Parse(textBox->Text);
	lblShowOp->Text = System::Convert::ToString("1/"+ "(" + (textBox->Text) + ")");
	a = 1 / a;
	textBox->Text = System::Convert::ToString(a);
}
private: System::Void lnx(System::Object^ sender, System::EventArgs^ e) {
	a = Double::Parse(textBox->Text);
	lblShowOp->Text = System::Convert::ToString("cos" + "(" + (textBox->Text) + ")");
	a = log(a);
	textBox->Text = System::Convert::ToString(a);
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	a = Double::Parse(textBox->Text);
	lblShowOp->Text = System::Convert::ToString("tan" + "(" + (textBox->Text) + ")");
	a = (a * 9 / 5) + 32;
	textBox->Text = System::Convert::ToString(a);
}

	   // By Youssef Waleed

private: System::Void button36_Click(System::Object^ sender, System::EventArgs^ e) {
	a = Double::Parse(textBox->Text);
	lblShowOp->Text = System::Convert::ToString((textBox->Text) + "" + "Meter");
	a = (a * 100);
	textBox->Text = System::Convert::ToString(a);
}
private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
	a = Double::Parse(textBox->Text);
	lblShowOp->Text = System::Convert::ToString((textBox->Text) + "" + "meter");
	a = (a * 0.01);
	textBox->Text = System::Convert::ToString(a);
}
private: System::Void button35_Click(System::Object^ sender, System::EventArgs^ e) {
	a = Double::Parse(textBox->Text);
	lblShowOp->Text = System::Convert::ToString((textBox->Text) + "" + "Meter");
	a = (a * 1000);
	textBox->Text = System::Convert::ToString(a);
}
private: System::Void button34_Click(System::Object^ sender, System::EventArgs^ e) {
	a = Double::Parse(textBox->Text);
	lblShowOp->Text = System::Convert::ToString((textBox->Text) + "" + "Meter");
	a = (a * 1000000);
	textBox->Text = System::Convert::ToString(a);
}
private: System::Void button33_Click(System::Object^ sender, System::EventArgs^ e) {
	a = Double::Parse(textBox->Text);
	lblShowOp->Text = System::Convert::ToString((textBox->Text) + "" + "Meter");
	a = (a * 1000000000);
	textBox->Text = System::Convert::ToString(a);
}
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
	a = Double::Parse(textBox->Text);
	lblShowOp->Text = System::Convert::ToString((textBox->Text) + "" + "meter");
	a = (a * 10000000000);
	textBox->Text = System::Convert::ToString(a);
}
private: System::Void button32_Click(System::Object^ sender, System::EventArgs^ e) {
	a = Double::Parse(textBox->Text);
	lblShowOp->Text = System::Convert::ToString((textBox->Text) + "" + "Meter");
	a = (a * 0.001);
	textBox->Text = System::Convert::ToString(a);
}
private: System::Void button31_Click(System::Object^ sender, System::EventArgs^ e) {
	a = Double::Parse(textBox->Text);
	lblShowOp->Text = System::Convert::ToString((textBox->Text) + "" + "Meter");
	a = (a * 0.000001);
	textBox->Text = System::Convert::ToString(a);
}
private: System::Void button30_Click(System::Object^ sender, System::EventArgs^ e) {
	a = Double::Parse(textBox->Text);
	lblShowOp->Text = System::Convert::ToString((textBox->Text) + "" + "Meter");
	a = (a * 0.000000001);
	textBox->Text = System::Convert::ToString(a);
}
private: System::Void button29_Click(System::Object^ sender, System::EventArgs^ e) {
	a = Double::Parse(textBox->Text);
	lblShowOp->Text = System::Convert::ToString((textBox->Text) + "" + "Meter");
	a = (a * 0.000000000001);
	textBox->Text = System::Convert::ToString(a);
}
private: System::Void button28_Click(System::Object^ sender, System::EventArgs^ e) {
	a = Double::Parse(textBox->Text);
	lblShowOp->Text = System::Convert::ToString((textBox->Text) + "" + "Meter");
	a = (a * 39.3701);
	textBox->Text = System::Convert::ToString(a);
}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
	a = Double::Parse(textBox->Text);
	lblShowOp->Text = System::Convert::ToString((textBox->Text) + "" + "Meter");
	a = (a * 3.280839999999);
	textBox->Text = System::Convert::ToString(a);
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
	a = Double::Parse(textBox->Text);
	lblShowOp->Text = System::Convert::ToString((textBox->Text) + "" + "Meter");
	a = (a * 0.00062137121212121003);
	textBox->Text = System::Convert::ToString(a);
}
private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e) {
	a = Double::Parse(textBox->Text);
	lblShowOp->Text = System::Convert::ToString((textBox->Text) + "" + "meter");
	a = (a * 1.09361);
	textBox->Text = System::Convert::ToString(a);
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	a = Double::Parse(textBox->Text);
	lblShowOp->Text = System::Convert::ToString((textBox->Text) + "" + "Inch");
	a = (a * 0.025400000812799913147);
	textBox->Text = System::Convert::ToString(a);
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	a = Double::Parse(textBox->Text);
	lblShowOp->Text = System::Convert::ToString((textBox->Text) + "" + "Foot");
	a = (a * 0.3048000097535989994);
	textBox->Text = System::Convert::ToString(a);
}
private: System::Void button14_Click_1(System::Object^ sender, System::EventArgs^ e) {
	a = Double::Parse(textBox->Text);
	lblShowOp->Text = System::Convert::ToString((textBox->Text) + "" + "Mile");
	a = (a * 1609.3440514990027168);
	textBox->Text = System::Convert::ToString(a);
}
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
	a = Double::Parse(textBox->Text);
	lblShowOp->Text = System::Convert::ToString((textBox->Text) + "" + "Yard");
	a = (a * 0.9144);
	textBox->Text = System::Convert::ToString(a);
}
private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) {
	a = Double::Parse(textBox->Text);
	lblShowOp->Text = System::Convert::ToString((textBox->Text) + "" + "radius(meter)");
	a = (pi * (a * a));
	textBox->Text = System::Convert::ToString(a);
}
private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
	a = Double::Parse(textBox->Text);
	lblShowOp->Text = System::Convert::ToString((textBox->Text) + "" + "Meter");
	a = ((a * a));
	textBox->Text = System::Convert::ToString(a);
}


private: System::Void lengthToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm::Width = 963;
	MyForm::Height = 640;
	textBox->Width = 896;
}
private: System::Void temprutureToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm::Width = 770;
	MyForm::Height = 732;
	textBox->Width = 708;
}

	//By Omar El-Beltagy

private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	iOperation = 'C';
}
private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	iOperation = 'F';
}
private: System::Void radioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	iOperation = 'K';
}
private: System::Void button38_Click(System::Object^ sender, System::EventArgs^ e) {
	switch (iOperation)
	{
	case'C':
		//Celsius to fahrenheit
		(float::TryParse(textBox1->Text, iCelsius));
		textBox2->Text = ((((9 * iCelsius) / 5) + 32).ToString(""));

		break;

	case'F':
		//fahrenheit to Celsius 
		(float::TryParse(textBox1->Text, iFahrenheit));
		textBox2->Text = ((((iFahrenheit - 32) * 5) / 9).ToString(""));

		break;

	case'K':
		//Convert to Kelvin
		(float::TryParse(textBox1->Text, iKelvin));
		textBox2->Text = (((((9 * iKelvin) / 5) + 32) + 273.15).ToString(""));

		break;
	}
}
private: System::Void button37_Click(System::Object^ sender, System::EventArgs^ e) {
	lblShowOp->Text = "";
	textBox1->Text = "";
	radioButton1->Checked = false;
	radioButton2->Checked = false;
	radioButton3->Checked = false;
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
