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
			this->Text = L"������. ��� �3. ������� 2. �������";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	private:
		int l, b, h, w;

	private: System::Void pictureBox1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {

		h = pictureBox1->Height;            // ��������� ������ ����
		w = pictureBox1->Width;             // � ������

		// ������ ���
		e->Graphics->DrawLine(Pens::Black, 0, h / 2, w, h / 2);
		e->Graphics->DrawLine(Pens::Black, w / 2, 0, w / 2, h);

		// � ���������
		e->Graphics->DrawLine(Pens::Black, w - 25, h / 2 + 8, w, h / 2);
		e->Graphics->DrawLine(Pens::Black, w - 25, h / 2 - 8, w, h / 2);
		e->Graphics->DrawLine(Pens::Black, w / 2 - 8, 25, w / 2, 0);
		e->Graphics->DrawLine(Pens::Black, w / 2 + 8, 25, w / 2, 0);

		// � ����������� ���
		e->Graphics->DrawString("X", this->Font, Brushes::Black, (float)w - 15, (float)h / 2 - 25); // ��� ���������� ����� ���������� �� possible loss of data ���� ����, ��� � ������� ���� ������������ float. �������. ������� ��������
		e->Graphics->DrawString("Y", this->Font, Brushes::Black, (float)w / 2 - 25, 5);

		double x1, x2, y1, y2, x, y, mx, my, dx, dt, r;

		//////////////////////////////////////////
		// ������ �1

		x1 = -10; // ��������� ��������� ��������� 
		x2 = 2; // �������� ���������� ���������
		dx = 0.1; // ��� �������� ���������

		////////////////////

		y1 = (x1 + 2) / (x1 - 3); // ������� �������� � ����� ������ ������� (������ ���������)
		y2 = (x2 + 2) / (x2 - 3); // � � ����� �����
		for (x = x1; x<=x2; x += dx) // � �������� ������ ���� ��������
		{
			if (abs(x) < abs(dx)) continue; // ������� ���������, ��� ��� �� ��������
			// double/float - ��� �������� � ��������� ������. ��� ������ ������ � ���� ����� � ����� ���� ���������. � ��� ��� ��������/��������� � ���� ������� �� ��������� 0. ������ ��� �������������. ������ ����������� ���� ������ ��� � -0.1 ��������� 0.1 � �� ������� �� ������� 0
			// ����� ����� ����� = 0 ��� ����� �������� ����� ����������� ������������ � 0, � ��� ���� ��������� 0, ������� �� ���� � ���������� � ����� ����������� - �����!
			// �� ��� ���� � ����� ����� ���� ���� + ��� -, ������� ���������� �� ������. ���� ��� ������, �� ������ ��� ����� � 0
			else // � ��������� ������
				{
					y = (x + 2) / (x - 3); // ������� �������� ������� � ������ �����
					if (y < y1) y1 = y; // ���� ��� ������ ���������, �� ����������� ����� �������� (�.�. � y1 ����� �������� ����� ������������������ ����� �������)
					if (y > y2) y2 = y; // ���� ��� ������ ��������, �� ����������� ����� �������� (�.�. � y2 ����� �������� ����� ������������������� ����� �������)
				}				
		}

		my = h / (y2 - y1); // ����������, � ������� ����� ��������� ������� ��������� ������� (������������ �������� ����) - �� ��� �
		mx = w / (x2 - x1); // � �� ��� �

		// ������ ������
		y1 = (x1 + 2) / (x1 - 3); // ������� �������� ������� � ������ ���������
		for (x = x1+dx; x <= x2; x += dx) // �������� ������ ���� ��������
		{
			if (abs(x) < abs(dx)) continue;
			else
			{
				y = (x + 2) / (x - 3); // ������� ��������....
				// � ������ ������� ����� ����� �������: ������� � ��������������
				// � ������� (����, ������ ����� �1, ������ ����� y1, ������ ����� x, ������ ����� y)
				// ������������ � ���� �� "������������" ������ ������������ �������� ������, �.�. ������� ������ �� ���� ���� � �� ����� �����
				e->Graphics->DrawLine(Pens::Red, (int)(x1*mx + w / 2), (int)(h / 2 - y1*my), (int)(x*mx + w / 2), (int)(h / 2 - y*my));
				x1 = x; // ���������� �������� �������������� ����� ����������, � ������� ��������� ������� �����
				y1 = y;
			}
		}
		
		//////////////////////////////////////////
		// ������ �2
		
		x1 = -40;    // ������� ���������. �������� [x1,x2]
		x2 = 40;     
		y1 = -40;	// �������� [y1, y2]
		y2 = 40;
		dt = 0.001;     // ��� �������� ���������
		r = 1;	// ������ �����, ������� ������ ���������

		////////////////////

		my = h / (y2 - y1);    // ���������������� �������
		mx = w / (x2 - x1);  

		// ������ ������

		double t = 0; // ��������� ����������
		// ������� ������������ ��� �� ���������
		// � ��� ���� ���������� � �������� �������. ��� ���� �� ��������� � ����������. ��� ����� ���� ������� � �������� ������� �������� �� �����. ������ ��� ������������������ �������
		x1 = r*M_PI*t * Math::Cos(t); // ������� �������� ������� ��� ���� = 0
		y1 = r*M_PI*t * Math::Sin(t);

		for (t = dx; t <= 4 * M_PI; t += dt) // � ����� ���� �������� �������� �����. ���� ��� M_PI - ��� ����� ��, ������� ��������� � ������������ ������ ����� ����� define
		{
			x = r*M_PI*t*Math::Cos(t); // ������� ��������
			y = r*M_PI*t*Math::Sin(t);
			// ������
			e->Graphics->DrawLine(Pens::Blue, (int)(x1*mx + w / 2), (int)(h / 2 - y1*my), (int)(x*mx + w / 2), (int)(h / 2 - y*my));
			x1 = x; // ���������� �������� �������������� ����� ����������, � ������� ��������� ������� �����
			y1 = y;
		}
		
	}
	};
}
