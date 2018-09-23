#pragma once
#include <cmath>
#define M_PI 3.14159265358979323846

namespace UI_Project3 {

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
	private: System::Windows::Forms::PictureBox^  pictureBox1;
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
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(484, 367);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pictureBox1_Paint);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(522, 391);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Визуал. Лаб №3. Вариант 2. Графики";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	private:
		int l, b, h, w;

	private: System::Void pictureBox1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {

		h = pictureBox1->Height;            // Вычисляем ширину окна
		w = pictureBox1->Width;             // и высоту

		// Рисуем оси
		e->Graphics->DrawLine(Pens::Black, 0, h / 2, w, h / 2);
		e->Graphics->DrawLine(Pens::Black, w / 2, 0, w / 2, h);

		// и стрелочки
		e->Graphics->DrawLine(Pens::Black, w - 25, h / 2 + 8, w, h / 2);
		e->Graphics->DrawLine(Pens::Black, w - 25, h / 2 - 8, w, h / 2);
		e->Graphics->DrawLine(Pens::Black, w / 2 - 8, 25, w / 2, 0);
		e->Graphics->DrawLine(Pens::Black, w / 2 + 8, 25, w / 2, 0);

		// И подписываем оси
		e->Graphics->DrawString("X", this->Font, Brushes::Black, (float)w - 15, (float)h / 2 - 25); // Тут компилятор будет жаловаться на possible loss of data изза того, что в функции надо использовать float. Костыль. Костьль эвривеар
		e->Graphics->DrawString("Y", this->Font, Brushes::Black, (float)w / 2 - 25, 5);

		double x1, x2, y1, y2, x, y, mx, my, dx, dt, r;

		//////////////////////////////////////////
		// График №1

		x1 = -10; // Начальная кордината отрисовки 
		x2 = 2; // конечная координата отрисовки
		dx = 0.1; // шаг просчёта координат

		////////////////////

		y1 = (x1 + 2) / (x1 - 3); // считаем значение в самом начале функции (начале интервала)
		y2 = (x2 + 2) / (x2 - 3); // и в самом конце
		for (x = x1; x<=x2; x += dx) // и проходим циклом весь интервал
		{
			if (abs(x) < abs(dx)) continue; // Минутка пояснений, что это за проверка
			// double/float - это величины с плавающей точкой. Они хранят данные в виде дроби а потом дают результат. У них при сложении/вычитании и теде НИКОГДА не получится 0. Только при инициализации. Можешь попробовать сама просто так к -0.1 прибавить 0.1 и ты НИКОГДА не увидишь 0
			// когда число будет = 0 там будет хранится число МАКСИМАЛЬНО приближенное к 0, а нам надо вычислить 0, поэтому мы берём и сравниваем с чемто минимальным - шагом!
			// но при этом в числе может быть знак + или -, поэтому сравниваем по модулю. если оно меньше, то значит оно ближе к 0
			else // в противном случае
				{
					y = (x + 2) / (x - 3); // находим значение функции в данной точке
					if (y < y1) y1 = y; // если она меньше начальной, то присваиваем новое значение (т.е. в y1 будет величина самой низкорасположенной точки функции)
					if (y > y2) y2 = y; // если она меньше конечной, то присваиваем новое значение (т.е. в y2 будет величина самой высокорасположенной точки функции)
				}				
		}

		my = h / (y2 - y1); // переменная, в которой будет храниться масштаб отрисовки функции (относительно размеров окна) - ПО ОСИ У
		mx = w / (x2 - x1); // и по оси Х

		// Рисуем график
		y1 = (x1 + 2) / (x1 - 3); // находим значение функции в начале интервала
		for (x = x1+dx; x <= x2; x += dx) // проходим циклом весь интервал
		{
			if (abs(x) < abs(dx)) continue;
			else
			{
				y = (x + 2) / (x - 3); // находим значение....
				// и рисуем отрезок между двумя точками: прошлой и свеженайденной
				// в скобках (Цвет, первая точка х1, первая точка y1, вторая точка x, вторая точка y)
				// одновременно с этим мы "масштабируем" график относительно размеров экрана, т.е. считаем размер от края окна и до нашей точки
				e->Graphics->DrawLine(Pens::Red, (int)(x1*mx + w / 2), (int)(h / 2 - y1*my), (int)(x*mx + w / 2), (int)(h / 2 - y*my));
				x1 = x; // присвиваем значения свеженайденной точки переменной, в которой находится прошлая точка
				y1 = y;
			}
		}
		
		//////////////////////////////////////////
		// График №2
		
		x1 = -40;    // Границы отрисовки. Интервал [x1,x2]
		x2 = 40;     
		y1 = -40;	// Интервал [y1, y2]
		y2 = 40;
		dt = 0.001;     // шаг просчёта координат
		r = 1;	// радиус круга, которым рисуем кардиоиду

		////////////////////

		my = h / (y2 - y1);    // перемасштабируем рисунок
		mx = w / (x2 - x1);  

		// Рисуем график

		double t = 0; // временная переменная
		// Минутка воспоминаний пар по геометрии
		// У нас даны координаты в полярной системе. Нам надо их перевести в декартовую. Для этого надо функцию в полярной системе умножить на соотв. каждой оси тригонометрическую функцию
		x1 = r*M_PI*t * Math::Cos(t); // находим значение функции при угле = 0
		y1 = r*M_PI*t * Math::Sin(t);

		for (t = dx; t <= 4 * M_PI; t += dt) // и церез цикл начинаем рисовать линии. Если что M_PI - это число Пи, которое объявлено в саааааааамом начале файла через define
		{
			x = r*M_PI*t*Math::Cos(t); // находим значения
			y = r*M_PI*t*Math::Sin(t);
			// рисуем
			e->Graphics->DrawLine(Pens::Blue, (int)(x1*mx + w / 2), (int)(h / 2 - y1*my), (int)(x*mx + w / 2), (int)(h / 2 - y*my));
			x1 = x; // присвиваем значения свеженайденной точки переменной, в которой находится прошлая точка
			y1 = y;
		}
		
	}
	};
}
