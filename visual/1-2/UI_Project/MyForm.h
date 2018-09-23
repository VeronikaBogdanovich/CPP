#pragma once

namespace UI_Project {
#include"MyForm1.h"
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
			//
			//TODO: Add the constructor code here
			//
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
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  button1;

	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Button^  button2;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(264, 39);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(61, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Размер ";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(451, 37);
			this->numericUpDown1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(97, 22);
			this->numericUpDown1->TabIndex = 1;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(139, 89);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(81, 17);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Вектор №2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(577, 89);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(81, 17);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Вектор №1";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(67, 129);
			this->textBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(239, 22);
			this->textBox1->TabIndex = 4;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox_KeyPress);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(505, 129);
			this->textBox2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(239, 22);
			this->textBox2->TabIndex = 5;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox_KeyPress);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(248, 191);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(181, 17);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Произведение векторов - ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(471, 191);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(20, 17);
			this->label5->TabIndex = 7;
			this->label5->Text = L"...";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(223, 356);
			this->button1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(196, 28);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Вычислить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(427, 356);
			this->button3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(196, 28);
			this->button3->TabIndex = 10;
			this->button3->Text = L"Очистить";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(248, 226);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(170, 17);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Векторы ортогональны\?";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(248, 262);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(166, 17);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Векторы коллинеарны\?";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(471, 226);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(20, 17);
			this->label8->TabIndex = 13;
			this->label8->Text = L"...";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(471, 262);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(20, 17);
			this->label9->TabIndex = 14;
			this->label9->Text = L"...";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(13, 13);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 15;
			this->button2->Text = L"Автор";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(845, 404);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"MyForm";
			this->Text = L"Визуал. лаб №1. Вариант 2. Векторы";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void textBox_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		if (((e->KeyChar >= '0') && (e->KeyChar <= '9')) || (e->KeyChar == 8) || (e->KeyChar == ' ')) return;
		// то, что написано сверху: разрешаем вводить циферки от 0 до 9, пробел, бекспейс (чтобы удалить элемент)
		e->Handled = true; // Остальные символы запрещены, поэтому просто не даём вводить
	}

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	int size = System::Convert::ToInt32(numericUpDown1->Value); // переводим в переменную значение размера векторов;
	String^ str = ""; // вводим строку, через которую будем выводить в конце массив
	array<String^>^ as; // массив строк, в котором будут временно храниться числа
	array<Char>^ ar; // массив строк, такой же, что и выше, но побочный (перевод String^ -> array Char^ -> Array String^)
	ar = gcnew array<Char>(1); // создаём стоку в массиве char
	// Сначала работаем с вектором 1
	ar[0] = ' ';
	as = textBox1->Text->Split(ar); // переводим в массив все значения
	if (as->Length != size || as[0] == "") // сравниваем количество членов массива строк с количеством перемнной из бокса "Размер пространства"
	{
		MessageBox::Show("Не введены все данные данные для вектора №1 или количество данных превышает определённое!\nОбработка невозможна", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return; //В случае ошибки покадываем дополнительное окно с ошибкой и прекращаем дальнейшую работу кнопки
	}
	int *vector1 = new int[size]; // создаём массив
	for (int i = 0; i <size; i++) // в который вводим значения из массива строк
	{
		vector1[i] = Convert::ToInt32(as[i]);
	}

	// А теперь с вектором 2
	array<String^>^ as2;
	ar[0] = ' ';
	as2 = textBox2->Text->Split(ar); // переводим в массив все значения
	if (as2->Length != size || as2[0] == "") // сравниваем количество членов массива строк с количеством перемнной из бокса "Размер пространства"
	{
		MessageBox::Show("Введены не все данные данные для полинома №2 или количество данных превышает определённое!\nОбработка невозможна", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return; //В случае ошибки покадываем дополнительное окно с ошибкой и прекращаем дальнейшую работу кнопки
	}
	int *vector2 = new int[size]; // создаём массив
	for (int i = 0; i <size; i++) // в который вводим значения из массива строк
	{
		vector2[i] = Convert::ToInt32(as2[i]);
	}
	///////////////////////
	// Ищем скалярное произведение векторов
	int result = 0; // результат иннициализируем
	// Как мы знаем:
	// Скалярным произведением двух векторов a и b будет скаляр, величина которого равна сумме попарного произведения координат векторов a и b.
	for (int i = 0; i < size; i++)
	{
		result += vector1[i] * vector2[i]; // находим. Это же так просто -_-
	}
	label5->Text = str->Format("{0}", result); // выводим в лейбл
	//////////////////////
	// Поверка векторов на коллинеарность
	// проверяется через смешанное произведение векторов
	double mod1 = 0.0, mod2 = 0.0, abs_scal = 0.0;
	for (int i = 0; i<size; i++) {
		mod1 += vector1[i] * vector1[i];
		mod2 += vector2[i] * vector2[i];
		abs_scal += vector1[i] * vector2[i];
	}
	mod1 = Math::Sqrt(mod1);
	mod2 = Math::Sqrt(mod2);
	abs_scal = Math::Abs(abs_scal);


	if (mod1*mod2)
	{
		if (Math::Abs(abs_scal / (mod1*mod2) - 1.0) <= 0.001)
		{
			label9->ForeColor = System::Drawing::Color::Green;
			label9->Text = "ДА";
		}
		else {
			label9->ForeColor = System::Drawing::Color::Red;
			label9->Text = "НЕТ";
		}
	}
	else { label9->ForeColor = System::Drawing::Color::Red; label8->Text = "НЕТ"; }
	/////////////////////////////
	// Поверка векторов на ортогональность
	// Условие ортогональности - скалярное произведение данных векторов должно быть равно 0
	if (result == 0) { label8->ForeColor = System::Drawing::Color::Green; label8->Text = "ДА"; }
	else { label8->ForeColor = System::Drawing::Color::Red; label8->Text = "НЕТ"; }

}

private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	// Чистим все боксы от мусора. В общем, приводим к оригинальному состоянию
	textBox1->Text = "";
	textBox2->Text = "";
	numericUpDown1->Value = 1;
	label5->Text = "...";
	label8->Text = "...";
	label8->ForeColor = System::Drawing::Color::Black;
	label9->Text = "...";
	label9->ForeColor = System::Drawing::Color::Black;
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	UI_Project::MyForm1^ form2 = gcnew UI_Project::MyForm1();
	form2->ShowDialog();
}
};
}
