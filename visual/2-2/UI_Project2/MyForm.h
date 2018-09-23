#pragma once

namespace UI_Project2 {

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
	private: System::Windows::Forms::TextBox^  textBox1;
	protected:
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label1;



	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;

	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  openFileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::ToolStripMenuItem^  SaveResultToolStripMenuItem;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown3;
	private: System::Windows::Forms::Label^  label5;







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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openFileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->SaveResultToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 65);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(227, 228);
			this->textBox1->TabIndex = 0;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(375, 65);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(227, 228);
			this->textBox2->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(262, 68);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(98, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Количество строк";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(249, 226);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(120, 23);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Совершить сдвиг";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(265, 255);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(90, 23);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Очистить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->fileToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(614, 24);
			this->menuStrip1->TabIndex = 8;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->openFileToolStripMenuItem,
					this->SaveResultToolStripMenuItem, this->toolStripSeparator1, this->exitToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->fileToolStripMenuItem->Text = L"Файл";
			// 
			// openFileToolStripMenuItem
			// 
			this->openFileToolStripMenuItem->Name = L"openFileToolStripMenuItem";
			this->openFileToolStripMenuItem->Size = System::Drawing::Size(188, 22);
			this->openFileToolStripMenuItem->Text = L"Открыть файл";
			this->openFileToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::openFileToolStripMenuItem_Click);
			// 
			// SaveResultToolStripMenuItem
			// 
			this->SaveResultToolStripMenuItem->Name = L"SaveResultToolStripMenuItem";
			this->SaveResultToolStripMenuItem->Size = System::Drawing::Size(188, 22);
			this->SaveResultToolStripMenuItem->Text = L"Сохранить результат";
			this->SaveResultToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::SaveResultToolStripMenuItem_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(185, 6);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(188, 22);
			this->exitToolStripMenuItem->Text = L"Выход";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::exitToolStripMenuItem_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(63, 40);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(126, 13);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Оригинальная матрица";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(426, 40);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(117, 13);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Изменённая матрица";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(265, 84);
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(90, 20);
			this->numericUpDown1->TabIndex = 11;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(265, 123);
			this->numericUpDown2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(90, 20);
			this->numericUpDown2->TabIndex = 12;
			this->numericUpDown2->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(253, 107);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(116, 13);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Количество столбцов";
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Location = System::Drawing::Point(265, 182);
			this->numericUpDown3->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100, 0, 0, System::Int32::MinValue });
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(90, 20);
			this->numericUpDown3->TabIndex = 14;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(246, 166);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(124, 13);
			this->label5->TabIndex = 15;
			this->label5->Text = L"Кол-во позиций сдвига";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(614, 305);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->numericUpDown3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->numericUpDown2);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"Сдвиг матрицы (Вариант 2. Визуальн. Лаб. №2)";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void textBox1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		if (((e->KeyChar >= '0') && (e->KeyChar <= '9')) || (e->KeyChar == 8) || (e->KeyChar == ' ') || (e->KeyChar == (char)Keys::Enter)) return;
		// то, что написано сверху: разрешаем вводить циферки от 0 до 9, пробел, бекспейс (чтобы удалить элемент), Энтер (новая строка)
		e->Handled = true; // Остальные символы запрещены, поэтому просто не даём вводить
	}
			 // функция сдвига на 1 столбца ВПРАВО матрицы
			 void SdvigRight(array<int, 2>^ &A, int size_strok, int size_stolb)
			 {
				 array<int, 1>^ temp;
				 temp = gcnew array<int, 1>(size_strok); // cоздаём динамическую вспомагательную матрицу temp[size_strok]
				 for (int i = 0; i < size_strok; i++)
				 {
					 temp[i] = A[i, size_stolb-1]; // в ней мы храним последний столбец, поскольку при сдвиге вправо вся матрица как бы уезжает вправо и закрывает последний столбец, который мы не сможем скопировать в первый стобик 
				 }
				 for (int j = size_stolb - 1; j > 0; j--) // собственно сдвигаем С КОНЦА, т.е. в 6 столбик копируем 5ый, в 5ый - 4ый и так далее
				 {
					 for (int i = 0; i < size_strok; i++)
					 {
						 A[i, j] = A[i, j - 1];
					 }
				 }
				 for (int i = 0; i < size_strok; i++) // а в конце из temp переносим последний столбик массива в первый столбец
				 {
					 A[i, 0] = temp[i];
				 }
			}

			 // функция сдвига на 1 столбца ВЛЕВО матрицы
			 void SdvigLeft(array<int, 2>^ &A, int size_strok, int size_stolb)
			 {
				 array<int, 1>^ temp;
				 temp = gcnew array<int, 1>(size_strok); // cоздаём динамическую вспомагательную матрицу temp[size_strok]
				 for (int i = 0; i < size_strok; i++)
				 { 
					 temp[i] = A[i, 0]; // в ней мы храним первый столбец, поскольку при сдвиге влево вся матрица как бы уезжает влево и закрывает первый столбец, который мы не сможем скопировать в последний
				 }
				 for (int j = 0 ; j < size_stolb - 1; j++) // собственно сдвигаем С НАЧАЛА, т.е. в 1 столбик копируем 2ой, во 2ой - 3ий и так далее
				 {
					 for (int i = 0; i < size_strok; i++)
					 {
						 A[i, j] = A[i, j + 1];
					 }
				 }
				 for (int i = 0; i < size_strok; i++)
				 {
					 A[i, size_stolb - 1] = temp[i]; // а в конце из temp переносим первый столбик массива в последний столбец
				 }
			 }

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		int size_strok = System::Convert::ToInt32(numericUpDown1->Value); // переводим в переменную значение бокса "Колво строк"
		int size_stolb = System::Convert::ToInt32(numericUpDown2->Value); // переводим в переменную значение бокса "Колво столбцов"
		if (textBox1->Lines->Length == 0) // проверяем введённые данные. если поле пустое, то пишем ошибку
		{
			MessageBox::Show("Матрица не введена", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return; //В случае ошибки покадываем дополнительное окно с ошибкой и прекращаем дальнейшую работу кнопки
		}
		// проверяем введённую матрицу на размерность по количеству строк в боксе
		if (textBox1->Lines->Length != size_strok)
		{
			MessageBox::Show("Размер матрицы не совпадает с введённым", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return; //В случае ошибки покадываем дополнительное окно с ошибкой и прекращаем дальнейшую работу кнопки
		}

		String^ str = ""; // вводим строку, через которую будем выводить в конце массив (потому что обычный string не работает в CLI, тут немного другой тип данных)
		array<Char>^ ar; // строка типа char (не путать со string!)
		ar = gcnew array<Char>(1); // иннициализируем массив char 1 строкой
		ar[0] = ' '; // делаем её пустой
		array<int, 2>^ A;
		A = gcnew array<int, 2>(size_strok, size_stolb); // cоздаём динамическую вспомагательную матрицу А[n][n]
		array<String^>^ as; // массив строк, в котором будут временно храниться числа
		for (int i = 0; i < size_strok; i++) //Заполняем матрицу А элементами бокса
		{
			as = textBox1->Lines[i]->Split(ar); // объединяем строку в один элемент (НА ОШИБКУ НЕ ОБРАЩАЕМ ВНИМАНИЯ - КОМПИЛЯТОР СТРАДАЕТ ФИГНЁЙ!)
			for (int j = 0; j < size_stolb; j++)
			{
				if (as->Length != size_stolb || as[0] == "") // сравниваем количество членов массива строк с количеством перемнной из бокса "Размер пространства"
				{
					MessageBox::Show("Не введены все данные матрицы или количество данных превышает определённое!\nОбработка невозможна", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return; //В случае ошибки покадываем дополнительное окно с ошибкой и прекращаем дальнейшую работу кнопки
				}
			}
			for (int j = 0; j < size_stolb; j++)
				A[i, j] = Convert::ToInt32(as[j]); // и конвертируем в циферки :)
		}

		// Проводим сдвиг матрицы
		int kol_sdvig = System::Convert::ToInt32(numericUpDown3->Value); // переводим в переменную значение бокса "Колво сдвига"
		if (kol_sdvig < 0) // проверяем значение количества сдвига. Если число отрицательное, то сдвиг происходит ВЛЕВО
		{
			for (int i = 0; i > kol_sdvig; i--) // и поэтому циклом повторым сдвиг на 1 столбик столько раз, сколько мы ввели в самом начале
			SdvigLeft(A, size_strok, size_stolb); // при этом цикл у нас работает с отрицательным количеством сдвигов (ну поскольку так ввели же). И вызываем функцию сдвига ВЛЕВО
		}
		else if(kol_sdvig > 0) // а если число положительное, то сдвиг происходит ВПРАВО
		{
			for (int i = 0; i < kol_sdvig; i++) // и таким же циклом проводим сдвиг вправо на 1 столько раз, сколько ввели
				SdvigRight(A, size_strok, size_stolb);
		}
		
		// Выводим полученную матрицу
		as = gcnew array<String^>(size_strok); // массив строк, который и будем выводить
		for (int i = 0; i< size_strok; i++)
		{
			str = ""; // делаем пустой
			for (int j = 0; j<size_stolb; j++)
				str += A[i, j].ToString() + " "; // вставляем число, а после него пробел

			as[i] = str; // и присваиваем массиву строк полученную строку
		}
		textBox2->Lines = as; // выводим
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		// Чистим все боксы от мусора. В общем, приводим к оригинальному состоянию
		textBox1->Text = "";
		textBox2->Text = "";
		numericUpDown1->Value = 1;
		numericUpDown2->Value = 1;
		numericUpDown3->Value = 0;
	}

	private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close(); // Делаем работоспособным Файл - Выход
	}

	private: System::Void openFileToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		// функция открытия файла
		System::Windows::Forms::DialogResult dr; // создаём окно выбора файла
		String^ fn; // строка, в которой будет хранится название файла
		openFileDialog1->FileName = String::Empty; // пустое название файла в диалоге открытия файла
		dr = openFileDialog1->ShowDialog(); // отображаем окно
		if (dr == System::Windows::Forms::DialogResult::OK) // когда нажимаем кнопку ОК, то выполняем
		{
			fn = openFileDialog1->FileName; // вводим название файла
			try
			{
				System::IO::StreamReader^ sr = gcnew System::IO::StreamReader(fn); // открываем файл
				textBox1->Text = sr->ReadToEnd(); // переносим все данные из файла в бокс
				sr->Close(); // закрываем файл
			}
			catch (System::IO::FileLoadException^ e) // комбинация try-catch-throw. Идеальный инструмент для отлова ошибок. Если будет хоть одна ошибка, то она отобразится в новом окне. Подробнее можно почитать тут - http://www.codenet.ru/progr/cpp/Try-Catch-Throw.php
			{
				MessageBox::Show("Ошибка ввода:\n" + e->Message, "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
	}
	private: System::Void SaveResultToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		// функция сохранения файла
		System::Windows::Forms::DialogResult dr; // создаём окно выбора файла
		String^ fn; // строка, в которой будет хранится название файла
		dr = saveFileDialog1->ShowDialog(); // отображаем окно Сохранить как
		if (dr == System::Windows::Forms::DialogResult::OK) // когда нажимаем кнопку ОК, то выполняем
		{
			fn = saveFileDialog1->FileName; // вводим название файла
			try
			{
				System::IO::FileInfo^ fi = gcnew System::IO::FileInfo(fn); // получаем информацию о (будущем) нахождении файла
				System::IO::StreamWriter^ sw = fi->CreateText(); // открываем поток для сохранения файла
				sw->Write(textBox2->Text); // копируем туда текст
				sw->Close(); // закрываем поток

			}
			catch (System::IO::IOException^ e) // та же комбинация для показа ошибок
			{
				MessageBox::Show(e->ToString(), "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
	}
	};
}
