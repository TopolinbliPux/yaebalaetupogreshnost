#pragma once
#include "Functions_names.h"
#include <Windows.h>

namespace MPI {

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
	private: System::Windows::Forms::Label^ label2;
	protected:
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::GroupBox^ groupBox1;


	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox7;

	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox5;









	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::TextBox^ textBox18;
	private: System::Windows::Forms::TextBox^ textBox17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::TextBox^ textBox16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Button^ button2;



	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(8, 23);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(170, 16);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Число разбиений по x: n=";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(8, 48);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(175, 16);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Число разбиений по y: m=";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(8, 73);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(130, 16);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Точность метода ε";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(209, 20);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 8;
			this->textBox1->Text = L"12";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(209, 46);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 9;
			this->textBox2->Text = L"12";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(169, 73);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(142, 22);
			this->textBox3->TabIndex = 10;
			this->textBox3->Text = L"0.0000005";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(8, 108);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(212, 16);
			this->label10->TabIndex = 12;
			this->label10->Text = L"Максимальное число итераций";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(226, 102);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 22);
			this->textBox4->TabIndex = 13;
			this->textBox4->Text = L"10000";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox8);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->textBox7);
			this->groupBox1->Controls->Add(this->textBox6);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(12, 153);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(596, 147);
			this->groupBox1->TabIndex = 14;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Собственные числа и параметр метода";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(387, 108);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(179, 25);
			this->textBox8->TabIndex = 18;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(3, 55);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(354, 17);
			this->label7->TabIndex = 11;
			this->label7->Text = L"Оценка максимального собственного числа M_max=";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(4, 27);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(346, 17);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Оценка минимального собственного числа M_min=";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(387, 80);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(179, 25);
			this->textBox7->TabIndex = 17;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(387, 52);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(179, 25);
			this->textBox6->TabIndex = 16;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(3, 83);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(276, 17);
			this->label8->TabIndex = 12;
			this->label8->Text = L"Оптимальный параметр метода tau_opt=";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(3, 111);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(216, 17);
			this->label9->TabIndex = 13;
			this->label9->Text = L"Число обусловленности mu_A=";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(387, 24);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(179, 25);
			this->textBox5->TabIndex = 15;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(12, 343);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(175, 16);
			this->label12->TabIndex = 25;
			this->label12->Text = L"Метод простой итерации ";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(617, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(1363, 535);
			this->dataGridView1->TabIndex = 34;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 306);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(111, 23);
			this->button1->TabIndex = 35;
			this->button1->Text = L"Рассчитать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(451, 528);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(17, 16);
			this->label19->TabIndex = 49;
			this->label19->Text = L"j=";
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(474, 525);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(100, 22);
			this->textBox18->TabIndex = 48;
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(474, 497);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(100, 22);
			this->textBox17->TabIndex = 47;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(310, 500);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(158, 16);
			this->label18->TabIndex = 46;
			this->label18->Text = L"и достигается в узле i=";
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(123, 497);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(181, 22);
			this->textBox16->TabIndex = 45;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(13, 500);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(104, 16);
			this->label17->TabIndex = 44;
			this->label17->Text = L"max|u*-v| равен";
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(339, 399);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(205, 22);
			this->textBox15->TabIndex = 43;
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(339, 433);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(205, 22);
			this->textBox14->TabIndex = 42;
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(219, 463);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(222, 22);
			this->textBox13->TabIndex = 41;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(142, 371);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(100, 22);
			this->textBox12->TabIndex = 40;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(12, 402);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(294, 16);
			this->label16->TabIndex = 39;
			this->label16->Text = L"Невязка на первом шаге (евклидова норма)";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(13, 433);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(317, 16);
			this->label15->TabIndex = 38;
			this->label15->Text = L"Невязка на последнем шаге (евклидова норма)";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(12, 466);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(197, 16);
			this->label14->TabIndex = 37;
			this->label14->Text = L"Точность на последнем шаге";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(13, 374);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(123, 16);
			this->label13->TabIndex = 36;
			this->label13->Text = L"Выполнено шагов";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->textBox2);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->textBox1);
			this->groupBox2->Controls->Add(this->textBox3);
			this->groupBox2->Controls->Add(this->label10);
			this->groupBox2->Controls->Add(this->textBox4);
			this->groupBox2->Location = System::Drawing::Point(12, 12);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(357, 135);
			this->groupBox2->TabIndex = 50;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Ввод данных";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->radioButton3);
			this->groupBox3->Controls->Add(this->radioButton2);
			this->groupBox3->Controls->Add(this->radioButton1);
			this->groupBox3->Location = System::Drawing::Point(370, 12);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(238, 135);
			this->groupBox3->TabIndex = 51;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Выбор таблицы";
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(6, 77);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(140, 20);
			this->radioButton3->TabIndex = 2;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Погрешность u*-v";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(6, 50);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(152, 20);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Точное решение u*";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(7, 23);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(170, 20);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Численное решение v";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 556);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(126, 16);
			this->label1->TabIndex = 52;
			this->label1->Text = L"Задача считается";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(145, 553);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(278, 22);
			this->textBox9->TabIndex = 53;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(15, 597);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(150, 23);
			this->button2->TabIndex = 54;
			this->button2->Text = L"Построить графики";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click_1);
			//// 
			//// pictureBox1
			//// 
			//this->pictureBox1->Location = System::Drawing::Point(15, 626);
			//this->pictureBox1->Name = L"pictureBox1";
			//this->pictureBox1->Size = System::Drawing::Size(378, 341);
			//this->pictureBox1->TabIndex = 55;
			//this->pictureBox1->TabStop = false;
			//// 
			//// pictureBox2
			//// 
			//this->pictureBox2->Location = System::Drawing::Point(252, 847);
			//this->pictureBox2->Name = L"pictureBox2";
			//this->pictureBox2->Size = System::Drawing::Size(378, 341);
			//this->pictureBox2->TabIndex = 56;
			//this->pictureBox2->TabStop = false;
			//// 
			//// pictureBox3
			//// 
			//this->pictureBox3->Location = System::Drawing::Point(474, 626);
			//this->pictureBox3->Name = L"pictureBox3";
			//this->pictureBox3->Size = System::Drawing::Size(378, 341);
			//this->pictureBox3->TabIndex = 57;
			//this->pictureBox3->TabStop = false;
			//// 
			//// pictureBox4
			//// 
			//this->pictureBox4->Location = System::Drawing::Point(799, 755);
			//this->pictureBox4->Name = L"pictureBox4";
			//this->pictureBox4->Size = System::Drawing::Size(378, 341);
			//this->pictureBox4->TabIndex = 58;
			//this->pictureBox4->TabStop = false;
			//// 
			//// pictureBox5
			//// 
			//this->pictureBox5->Location = System::Drawing::Point(1111, 615);
			//this->pictureBox5->Name = L"pictureBox5";
			//this->pictureBox5->Size = System::Drawing::Size(378, 341);
			//this->pictureBox5->TabIndex = 59;
			//this->pictureBox5->TabStop = false;
			//// 
			//// pictureBox6
			//// 
			//this->pictureBox6->Location = System::Drawing::Point(1436, 767);
			//this->pictureBox6->Name = L"pictureBox6";
			//this->pictureBox6->Size = System::Drawing::Size(378, 341);
			//this->pictureBox6->TabIndex = 60;
			//this->pictureBox6->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1922, 1400);
			/*this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);*/
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->textBox18);
			this->Controls->Add(this->textBox17);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->textBox16);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->textBox15);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			/*(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();*/
			this->ResumeLayout(false);
			this->PerformLayout();

			this->pictureBoxes = gcnew cli::array<PictureBox^>(6);
			// Параметры расположения
			int startY = 450;       // Стартовая позиция Y первого ряда
			int itemWidth = 283;    // Ширина PictureBox
			int itemHeight = 256;   // Высота PictureBox
			int horizontalSpacing = 20; // Горизонтальный отступ между элементами
			int verticalSpacing = 30;   // Вертикальный отступ между рядами

			for (int i = 0; i < 6; ++i) {
				this->pictureBoxes[i] = gcnew PictureBox();
				this->pictureBoxes[i]->Size = System::Drawing::Size(itemWidth, itemHeight);
				this->pictureBoxes[i]->SizeMode = PictureBoxSizeMode::Zoom;

				// Расчет позиции
				int row = i / 3;    // 0 - первый ряд, 1 - второй ряд
				int col = i % 3;    // 0, 1, 2 - позиция в ряду

				// Формула расчета координат
				int x = 15 + col * (itemWidth + horizontalSpacing);
				int y = startY + row * (itemHeight + verticalSpacing);

				this->pictureBoxes[i]->Location = System::Drawing::Point(x, y);
				this->Controls->Add(this->pictureBoxes[i]);
			}


		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//Ввод данных
		int n = Int32::Parse(textBox1->Text);
		int m = Int32::Parse(textBox2->Text);
		double epsilon_method = Double::Parse(textBox3->Text->Replace(',', '.'),System::Globalization::CultureInfo::InvariantCulture);
		int Nmax = Int32::Parse(textBox4->Text);
		System::Diagnostics::Stopwatch^ stopwatch = gcnew System::Diagnostics::Stopwatch();
		stopwatch->Start();

		Results result = MyMPI(m, n, Nmax, epsilon_method);
		stopwatch->Stop();
		textBox9->Text = String::Format("{0} мс", stopwatch->ElapsedMilliseconds);
		result.max_error = compute_max_error(result.v, n, m, result.max_i, result.max_j);

		textBox5->Text = result.m_min.ToString("F4");
		textBox6->Text = result.m_max.ToString("F4");
		textBox7->Text = result.tau_opt.ToString("F12");
		textBox8->Text = result.mu_A.ToString("F12");

		textBox12->Text = result.iterations.ToString();
		textBox13->Text = result.final_epsilon.ToString("F12");
		textBox14->Text = result.final_residual.ToString("F12");
		textBox15->Text = result.initial_residual.ToString("F12");

		textBox16->Text = result.max_error.ToString("F12");
		textBox17->Text = result.max_i.ToString();
		textBox18->Text = result.max_j.ToString();


		if (radioButton1->Checked)
		{
			// [9] Заполнение DataGridView с проверкой границ
			dataGridView1->Rows->Clear();
			dataGridView1->RowHeadersVisible = false;
			dataGridView1->Columns->Clear();

			// Добавление столбцов
			dataGridView1->Columns->Add("y_col", "y_j \\ x_i");
			dataGridView1->Columns->Add("j_i_col", "");
			double a_val = 0.0;
			double b_val = 2.0;
			double h_val = (b_val - a_val) / n;
			for (int i = 0; i <= n; ++i) {
				dataGridView1->Columns->Add("x_" + i.ToString(), (a_val + i * h_val).ToString("F4"));
			}

			// Заполнение заголовков
			dataGridView1->Rows->Add();
			dataGridView1->Rows[0]->Cells[1]->Value = "j/i";
			for (int i = 0; i <= n; ++i) {
				dataGridView1->Rows[0]->Cells[i + 2]->Value = i.ToString();
			}
			const double c_val = 0.0; // Замените на актуальные значения
			const double d_val = 1.0;
			for (int j = 0; j <= m; j++)
			{
				int rowIdx = dataGridView1->Rows->Add();
				dataGridView1->Rows[rowIdx]->Cells[0]->Value = (c_val + j * (d_val - c_val) / m).ToString("F4");
				dataGridView1->Rows[rowIdx]->Cells[1]->Value = j.ToString();
				for (int i = 0; i <= n; ++i)
				{
					if (is_inner_point(i, j, n, m) || (border(i, j, n, m)))
					{
						dataGridView1->Rows[rowIdx]->Cells[i + 2]->Value = result.v[i][j].ToString("F12");
					}
					else
					{
						dataGridView1->Rows[rowIdx]->Cells[i + 2]->Value = nullptr;// std::numeric_limits<double>::quiet_NaN();
					}
				}
			}
		}//if radioButton
		else if (radioButton2->Checked)
		{
			// [9] Заполнение DataGridView с проверкой границ
			dataGridView1->Rows->Clear();
			dataGridView1->RowHeadersVisible = false;
			dataGridView1->Columns->Clear();

			// Добавление столбцов
			dataGridView1->Columns->Add("y_col", "y_j \\ x_i");
			dataGridView1->Columns->Add("j_i_col", "");
			double a_val = 0.0;
			double b_val = 2.0;
			double h_val = (b_val - a_val) / n;
			for (int i = 0; i <= n; ++i) {
				dataGridView1->Columns->Add("x_" + i.ToString(), (a_val + i * h_val).ToString("F4"));
			}

			// Заполнение заголовков
			dataGridView1->Rows->Add();
			dataGridView1->Rows[0]->Cells[1]->Value = "j/i";
			for (int i = 0; i <= n; ++i) {
				dataGridView1->Rows[0]->Cells[i + 2]->Value = i.ToString();
			}
			const double c_val = 0.0; // Замените на актуальные значения
			const double d_val = 1.0;
			const double k_val = (d_val - c_val) / m;
			for (int j = 0; j <= m; j++)
			{
				int rowIdx = dataGridView1->Rows->Add();
				dataGridView1->Rows[rowIdx]->Cells[0]->Value = (c_val + j * (d_val - c_val) / m).ToString("F4");
				dataGridView1->Rows[rowIdx]->Cells[1]->Value = j.ToString();
				for (int i = 0; i <= n; ++i)
				{
					double x = a + i * h_val;
					double y = c + j * k_val;
					if (is_inner_point(i, j, n, m) || border(i, j, n, m))
					{
						double u_val = u(x, y);
						dataGridView1->Rows[rowIdx]->Cells[i + 2]->Value = u_val.ToString("F12");
					}
					else
					{
						dataGridView1->Rows[rowIdx]->Cells[i + 2]->Value = nullptr;// std::numeric_limits<double>::quiet_NaN();
					}
				}
			}
		}
		else if (radioButton3->Checked)
		{
			// [9] Заполнение DataGridView с проверкой границ
			dataGridView1->Rows->Clear();
			dataGridView1->RowHeadersVisible = false;
			dataGridView1->Columns->Clear();

			// Добавление столбцов
			dataGridView1->Columns->Add("y_col", "y_j \\ x_i");
			dataGridView1->Columns->Add("j_i_col", "");
			double a_val = 0.0;
			double b_val = 2.0;
			double h_val = (b_val - a_val) / n;
			for (int i = 0; i <= n; ++i) {
				dataGridView1->Columns->Add("x_" + i.ToString(), (a_val + i * h_val).ToString("F4"));
			}

			// Заполнение заголовков
			dataGridView1->Rows->Add();
			dataGridView1->Rows[0]->Cells[1]->Value = "j/i";
			for (int i = 0; i <= n; ++i) {
				dataGridView1->Rows[0]->Cells[i + 2]->Value = i.ToString();
			}
			const double c_val = 0.0; // Замените на актуальные значения
			const double d_val = 1.0;
			const double k_val = (d_val - c_val) / m;
			for (int j = 0; j <= m; j++)
			{
				int rowIdx = dataGridView1->Rows->Add();
				dataGridView1->Rows[rowIdx]->Cells[0]->Value = (c_val + j * (d_val - c_val) / m).ToString("F4");
				dataGridView1->Rows[rowIdx]->Cells[1]->Value = j.ToString();
				for (int i = 0; i <= n; ++i)
				{
					double x = a + i * h_val;
					double y = c + j * k_val;
					if (is_inner_point(i, j, n, m)||border(i,j,n,m))
					{
						double u_val = u(x, y);
						double error = u_val - result.v[i][j];
						dataGridView1->Rows[rowIdx]->Cells[i + 2]->Value = error.ToString("F12");
					}
					else
					{
						dataGridView1->Rows[rowIdx]->Cells[i + 2]->Value = nullptr;// std::numeric_limits<double>::quiet_NaN();
					}
				}
			}
		}
	}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

}
	   private:
		   cli::array<System::Windows::Forms::PictureBox^>^ pictureBoxes;
private:
	System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
		// Запуск Python скрипта
		system("python graphic.py");

		// 5. Используем управляемый массив
		cli::array<String^>^ filenames = {
			"solution1.png", "u_exact1.png", "error1.png",
			"solution2.png", "u_exact2.png", "error2.png"
		};

		// 6. Загрузка изображений
		for (int i = 0; i < 6; ++i) {
			try {
				if (pictureBoxes[i]->Image != nullptr) {
					delete pictureBoxes[i]->Image;
				}

				// 7. Исправление кодировки символов
				String^ path = filenames[i]->Replace(L'\\', L'/');

				Image^ img = Image::FromFile(path);
				pictureBoxes[i]->Image = img;
			}
			catch (Exception^ ex) {
				MessageBox::Show("Ошибка загрузки: " + filenames[i] + "\n" + ex->Message);
			}
		}
	}
};
}
