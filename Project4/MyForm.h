#pragma once
int x = 0;

namespace Project4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			timer1->Start();

			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox2;



	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->label1->Location = System::Drawing::Point(23, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(73, 29);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Time";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			this->label1->DoubleClick += gcnew System::EventHandler(this, &MyForm::label1_DoubleClick);
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(289, 152);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(43, 29);
			this->label2->TabIndex = 1;
			this->label2->Text = L">>";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(149, 152);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(43, 29);
			this->label4->TabIndex = 3;
			this->label4->Text = L"<<";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(58, 200);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(737, 310);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(44, 535);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(21, 24);
			this->label6->TabIndex = 6;
			this->label6->Text = L"1";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(137, 535);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(27, 29);
			this->label7->TabIndex = 7;
			this->label7->Text = L"2";
			this->label7->Click += gcnew System::EventHandler(this, &MyForm::label7_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(237, 535);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(27, 29);
			this->label8->TabIndex = 8;
			this->label8->Text = L"3";
			this->label8->Click += gcnew System::EventHandler(this, &MyForm::label8_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(328, 535);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(27, 29);
			this->label9->TabIndex = 9;
			this->label9->Text = L"4";
			this->label9->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(419, 535);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(27, 29);
			this->label10->TabIndex = 10;
			this->label10->Text = L"5";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(524, 535);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(27, 29);
			this->label11->TabIndex = 11;
			this->label11->Text = L"6";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(629, 535);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(27, 29);
			this->label12->TabIndex = 12;
			this->label12->Text = L"7";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(735, 535);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(27, 29);
			this->label13->TabIndex = 13;
			this->label13->Text = L"8";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(424, 35);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 35);
			this->textBox1->TabIndex = 15;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(603, 35);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(138, 42);
			this->button1->TabIndex = 16;
			this->button1->Text = L"Перейти";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(198, 152);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(55, 29);
			this->label3->TabIndex = 17;
			this->label3->Text = L"    5";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click_1);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(8) { L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8" });
			this->comboBox1->Location = System::Drawing::Point(454, 144);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 37);
			this->comboBox1->TabIndex = 19;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(653, 135);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(109, 46);
			this->button2->TabIndex = 20;
			this->button2->Text = L"OK";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click_1);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(12, 53);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(343, 89);
			this->textBox2->TabIndex = 21;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(15, 29);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(828, 623);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->Name = L"MyForm";
			this->Text = L"MyProgram";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->label1->BackColor = System::Drawing::SystemColors::Highlight;
	timer1->Start(); 	}
private: System::Void label1_DoubleClick(System::Object^ sender, System::EventArgs^ e) {timer1->Stop();	}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) 
{
DateTime now = DateTime::Now; // получаем текущее время 
label1->Text = String::Format("{0:HH:mm:ss}", now); // Обновляем текст в Label 

}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) 
{ this->label3->Text = L"Выкл"; }
private: System::Void label3_DoubleClick(System::Object^ sender, System::EventArgs^ e) 
{ this->label3->Text = L"Вкл"; }



private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (x % 2 == 0) { this->label3->Text = L" " + x; x++; }
	else { this->label3->Text = L" " + x; x++; }}

private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
if (x % 2 == 0) { this->label3->Text = L" " + x; x--; }
else { 	this->label3->Text = L" " + x; x--; } }



private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox2->Text = L"Квадрат";
	pictureBox1->Image = System::Drawing::Bitmap::FromFile("collageClip.jpg");
}




private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "1") 
	{textBox2->Text = L"Квадрат";
	pictureBox1->Image = System::Drawing::Bitmap::FromFile("collageClip.jpg");	}
	if (textBox1->Text == "2")
	{this->textBox2->Text = L"Прямоугольник";
	pictureBox1->Image = System::Drawing::Bitmap::FromFile("pryam.jpg"); }
	if (textBox1->Text == "3")
	{ 	this->textBox2->Text = L"Eyes";
		pictureBox1->Image = System::Drawing::Bitmap::FromFile("eye1.jpg"); }
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) { }
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox2->Text = L"Прямоугольник";
	pictureBox1->Image = System::Drawing::Bitmap::FromFile("pryam.jpg");}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	if (comboBox1->Text == "1") 
	{	this->textBox2->Text = L"Квадрат";
		pictureBox1->Image = System::Drawing::Bitmap::FromFile("collageClip.jpg");}
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void label3_Click_1(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox2->Text =  L"Квадрат";
	pictureBox1->Image = System::Drawing::Bitmap::FromFile("collageClip.jpg");}
private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox2->Text = L"Квадрат";
	pictureBox1->Image = System::Drawing::Bitmap::FromFile("collageClip.jpg");}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {}
};
}
