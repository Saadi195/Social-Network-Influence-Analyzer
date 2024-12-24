#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <fstream>
#include <limits>
#include <iomanip>
#include <algorithm>
#include "Graph.h"
#include <msclr/marshal_cppstd.h>

namespace socialneworkinfluncer {

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
			graph = new Graph();
			setupDataGridView();
		}
	

	public:



	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::TextBox^ textBoxSimulationStart;

	private: System::Windows::Forms::Button^ buttonSimulateSpread;
	private: System::Windows::Forms::Panel^ panel7;


		

	private:
		Graph* graph;



	public:

	private: void EndResponsive() {
		if (this->Width < 450) {
			tableLayoutPanel2->ColumnStyles[1]->Width = 350;

		}
		else if (this->Width < 1100) {
			tableLayoutPanel2->ColumnStyles[1]->Width = tableLayoutPanel2->Width - (chart1->Width + chart1->Margin.Right);
		}
		else {
			tableLayoutPanel2->ColumnStyles[1]->Width = tableLayoutPanel2->Width -
				(chart1->Width + chart2->Width + chart1->Margin.Right + chart2->Margin.Right);
		}
		if (this->Height <= 775) {
			panel6->Height = 290;
		}
		else {
			panel6->Height = panel5->Height;
		}

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
			if (graph) delete graph; // Clean up memory
		}

	protected:




	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart2;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart4;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart3;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label4;

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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea17 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend17 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series17 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea18 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend18 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series18 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea19 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend19 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series19 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea20 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend20 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series20 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->textBoxSimulationStart = (gcnew System::Windows::Forms::TextBox());
			this->buttonSimulateSpread = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->chart4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart4))->BeginInit();
			this->tableLayoutPanel2->SuspendLayout();
			this->flowLayoutPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->BeginInit();
			this->tableLayoutPanel1->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel7->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->AutoScroll = true;
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->Controls->Add(this->label1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1118, 60);
			this->panel1->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(352, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(430, 29);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Social Network Influence Analyzer";
			// 
			// panel2
			// 
			this->panel2->AutoScroll = true;
			this->panel2->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->panel2->Controls->Add(this->panel6);
			this->panel2->Controls->Add(this->panel5);
			this->panel2->Controls->Add(this->tableLayoutPanel2);
			this->panel2->Controls->Add(this->tableLayoutPanel1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Location = System::Drawing::Point(0, 60);
			this->panel2->Name = L"panel2";
			this->panel2->Padding = System::Windows::Forms::Padding(10);
			this->panel2->Size = System::Drawing::Size(1118, 690);
			this->panel2->TabIndex = 6;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::White;
			this->panel6->Controls->Add(this->panel7);
			this->panel6->Controls->Add(this->label4);
			this->panel6->Controls->Add(this->dataGridView1);
			this->panel6->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel6->Location = System::Drawing::Point(10, 456);
			this->panel6->MinimumSize = System::Drawing::Size(0, 250);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(568, 290);
			this->panel6->TabIndex = 3;
			// 
			// textBoxSimulationStart
			// 
			this->textBoxSimulationStart->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBoxSimulationStart->Location = System::Drawing::Point(138, 13);
			this->textBoxSimulationStart->Name = L"textBoxSimulationStart";
			this->textBoxSimulationStart->Size = System::Drawing::Size(168, 22);
			this->textBoxSimulationStart->TabIndex = 3;
			// 
			// buttonSimulateSpread
			// 
			this->buttonSimulateSpread->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->buttonSimulateSpread->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonSimulateSpread->Location = System::Drawing::Point(307, 11);
			this->buttonSimulateSpread->Name = L"buttonSimulateSpread";
			this->buttonSimulateSpread->Size = System::Drawing::Size(127, 29);
			this->buttonSimulateSpread->TabIndex = 2;
			this->buttonSimulateSpread->Text = L"SIMULATION";
			this->buttonSimulateSpread->UseVisualStyleBackColor = true;
			this->buttonSimulateSpread->Click += gcnew System::EventHandler(this, &MyForm::buttonSimulateSpread_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(3, 4);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(142, 20);
			this->label4->TabIndex = 1;
			this->label4->Text = L"CONNECTIONS";
			// 
			// dataGridView1
			// 
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ActiveCaption;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle5->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle5->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle5->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle5;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Column1,
					this->Column2, this->Column3
			});
			this->dataGridView1->Location = System::Drawing::Point(3, 27);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(559, 260);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellValueChanged += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellValueChanged);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Serial Number";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Width = 125;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"User";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->Width = 125;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Connected User";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			this->Column3->Width = 125;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::White;
			this->panel5->Controls->Add(this->chart4);
			this->panel5->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel5->Location = System::Drawing::Point(578, 456);
			this->panel5->Name = L"panel5";
			this->panel5->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
			this->panel5->Size = System::Drawing::Size(509, 280);
			this->panel5->TabIndex = 2;
			// 
			// chart4
			// 
			chartArea17->Name = L"ChartArea1";
			this->chart4->ChartAreas->Add(chartArea17);
			this->chart4->Dock = System::Windows::Forms::DockStyle::Fill;
			legend17->Name = L"Legend1";
			this->chart4->Legends->Add(legend17);
			this->chart4->Location = System::Drawing::Point(10, 0);
			this->chart4->Margin = System::Windows::Forms::Padding(0);
			this->chart4->Name = L"chart4";
			series17->ChartArea = L"ChartArea1";
			series17->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Doughnut;
			series17->Legend = L"Legend1";
			series17->Name = L"InformationSpread";
			this->chart4->Series->Add(series17);
			this->chart4->Size = System::Drawing::Size(499, 280);
			this->chart4->TabIndex = 2;
			this->chart4->Text = L"chart4";
			this->chart4->Click += gcnew System::EventHandler(this, &MyForm::chart4_Click);
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->AutoSize = true;
			this->tableLayoutPanel2->BackColor = System::Drawing::Color::White;
			this->tableLayoutPanel2->ColumnCount = 2;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				350)));
			this->tableLayoutPanel2->Controls->Add(this->flowLayoutPanel1, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->chart3, 1, 0);
			this->tableLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->tableLayoutPanel2->Location = System::Drawing::Point(10, 157);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 1;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(1077, 299);
			this->tableLayoutPanel2->TabIndex = 1;
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->AutoSize = true;
			this->flowLayoutPanel1->BackColor = System::Drawing::Color::White;
			this->flowLayoutPanel1->Controls->Add(this->chart1);
			this->flowLayoutPanel1->Controls->Add(this->chart2);
			this->flowLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->flowLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->flowLayoutPanel1->Margin = System::Windows::Forms::Padding(0);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(727, 299);
			this->flowLayoutPanel1->TabIndex = 0;
			// 
			// chart1
			// 
			chartArea18->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea18);
			legend18->Name = L"Legend1";
			this->chart1->Legends->Add(legend18);
			this->chart1->Location = System::Drawing::Point(0, 0);
			this->chart1->Margin = System::Windows::Forms::Padding(0, 0, 10, 10);
			this->chart1->Name = L"chart1";
			this->chart1->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::SeaGreen;
			series18->ChartArea = L"ChartArea1";
			series18->Legend = L"Legend1";
			series18->Name = L"BetweennessCentrality";
			this->chart1->Series->Add(series18);
			this->chart1->Size = System::Drawing::Size(366, 276);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			// 
			// chart2
			// 
			chartArea19->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea19);
			legend19->Name = L"Legend1";
			this->chart2->Legends->Add(legend19);
			this->chart2->Location = System::Drawing::Point(376, 0);
			this->chart2->Margin = System::Windows::Forms::Padding(0);
			this->chart2->Name = L"chart2";
			this->chart2->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Berry;
			series19->ChartArea = L"ChartArea1";
			series19->Legend = L"Legend1";
			series19->Name = L"DegreeCentrality";
			this->chart2->Series->Add(series19);
			this->chart2->Size = System::Drawing::Size(343, 276);
			this->chart2->TabIndex = 1;
			this->chart2->Text = L"chart2";
			// 
			// chart3
			// 
			chartArea20->Name = L"ChartArea1";
			this->chart3->ChartAreas->Add(chartArea20);
			this->chart3->Dock = System::Windows::Forms::DockStyle::Fill;
			legend20->Name = L"Legend1";
			this->chart3->Legends->Add(legend20);
			this->chart3->Location = System::Drawing::Point(737, 0);
			this->chart3->Margin = System::Windows::Forms::Padding(10, 0, 0, 10);
			this->chart3->Name = L"chart3";
			this->chart3->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::SemiTransparent;
			series20->ChartArea = L"ChartArea1";
			series20->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series20->Legend = L"Legend1";
			series20->Name = L"ClosenessCentrality";
			this->chart3->Series->Add(series20);
			this->chart3->Size = System::Drawing::Size(340, 289);
			this->chart3->TabIndex = 1;
			this->chart3->Text = L"chart3";
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel1->Controls->Add(this->panel4, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->panel3, 0, 0);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->tableLayoutPanel1->Location = System::Drawing::Point(10, 10);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(1077, 147);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Tomato;
			this->panel4->Controls->Add(this->label3);
			this->panel4->Controls->Add(this->button2);
			this->panel4->Controls->Add(this->textBox3);
			this->panel4->Controls->Add(this->textBox4);
			this->panel4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel4->Location = System::Drawing::Point(538, 0);
			this->panel4->Margin = System::Windows::Forms::Padding(0, 0, 0, 10);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(539, 137);
			this->panel4->TabIndex = 1;
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(-46, 12);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(623, 23);
			this->label3->TabIndex = 3;
			this->label3->Text = L"DELETE CONNECTION";
			this->label3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Location = System::Drawing::Point(210, 78);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(112, 33);
			this->button2->TabIndex = 2;
			this->button2->Text = L"DELETE";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox3
			// 
			this->textBox3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox3->Location = System::Drawing::Point(268, 40);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(164, 22);
			this->textBox3->TabIndex = 1;
			// 
			// textBox4
			// 
			this->textBox4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox4->Location = System::Drawing::Point(100, 40);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(161, 22);
			this->textBox4->TabIndex = 0;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->panel3->Controls->Add(this->label2);
			this->panel3->Controls->Add(this->button1);
			this->panel3->Controls->Add(this->textBox2);
			this->panel3->Controls->Add(this->textBox1);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel3->Location = System::Drawing::Point(0, 0);
			this->panel3->Margin = System::Windows::Forms::Padding(0, 0, 0, 10);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(538, 137);
			this->panel3->TabIndex = 0;
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(-46, 12);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(623, 23);
			this->label2->TabIndex = 3;
			this->label2->Text = L"ADD CONNECTION";
			this->label2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Location = System::Drawing::Point(210, 78);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(112, 33);
			this->button1->TabIndex = 2;
			this->button1->Text = L"ADD";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// textBox2
			// 
			this->textBox2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox2->Location = System::Drawing::Point(268, 40);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(161, 22);
			this->textBox2->TabIndex = 1;
			// 
			// textBox1
			// 
			this->textBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox1->Location = System::Drawing::Point(106, 40);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(158, 22);
			this->textBox1->TabIndex = 0;
			// 
			// panel7
			// 
			this->panel7->Controls->Add(this->buttonSimulateSpread);
			this->panel7->Controls->Add(this->textBoxSimulationStart);
			this->panel7->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel7->Location = System::Drawing::Point(0, 242);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(568, 48);
			this->panel7->TabIndex = 4;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1118, 750);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->MinimumSize = System::Drawing::Size(450, 650);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResizeEnd += gcnew System::EventHandler(this, &MyForm::MyForm_ResizeEnd);
			this->Resize += gcnew System::EventHandler(this, &MyForm::MyForm_Resize);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel5->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart4))->EndInit();
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel2->PerformLayout();
			this->flowLayoutPanel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->EndInit();
			this->tableLayoutPanel1->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		private: void UpdateBetweennessCentralityChart() {
			if (graph->isEmpty()) {
				MessageBox::Show("The graph is empty. No data to display betweenness centrality.", "Info", MessageBoxButtons::OK, MessageBoxIcon::Information);
				return;
			}

			// Clear the existing data in the chart
			chart1->Series["BetweennessCentrality"]->Points->Clear();

			// Get betweenness centrality values from the graph
			auto centrality = graph->calculateBetweennessCentrality();

			// Add data to the chart
			for (const auto& entry : centrality) {
				String^ user = gcnew String(entry.first.c_str());
				chart1->Series["BetweennessCentrality"]->Points->AddXY(user, entry.second);
			}

			// Update chart axis
			chart1->ChartAreas[0]->RecalculateAxesScale();
		}

private: void UpdateClosenessCentralityChart() {
	if (graph->isEmpty()) {
		MessageBox::Show("The graph is empty. No data to display closeness centrality.", "Info", MessageBoxButtons::OK, MessageBoxIcon::Information);
		return;
	}

	// Clear existing data in the chart
	chart3->Series["ClosenessCentrality"]->Points->Clear();

	// Calculate closeness centrality for each user
	for (const auto& node : graph->getAdjacencyList()) {
		std::string user = node.first;

		// Get shortest paths from this user to all others
		std::unordered_map<std::string, int> distances = graph->bfsShortestPaths(user);

		double totalDistance = 0.0;
		int reachableNodes = 0;

		// Calculate total distance to all reachable nodes
		for (const auto& dist : distances) {
			// Check if the node is reachable (distance > 0)
			if (dist.second > 0) {
				totalDistance += dist.second; // Add the distance to total
				reachableNodes++;            // Increment reachable nodes
			}
		}

		// Avoid division by zero for isolated nodes
		double closeness = 0;
		if (reachableNodes > 1) { // At least one reachable neighbor
			closeness = (reachableNodes - 1) / totalDistance;
		}

		// Add data to chart
		chart3->Series["ClosenessCentrality"]->Points->AddXY(gcnew String(user.c_str()), closeness);
	}

	// Update chart axis
	chart3->ChartAreas[0]->RecalculateAxesScale();
}

private: void UpdateDegreeCentralityChart() {
	if (graph->isEmpty()) {
		MessageBox::Show("The graph is empty. No data to display degree centrality.", "Info", MessageBoxButtons::OK, MessageBoxIcon::Information);
		return;
	}

	// Clear the existing data in the chart
	chart2->Series["DegreeCentrality"]->Points->Clear();

	// Calculate degree centrality and update the chart
	for (const auto& node : graph->getAdjacencyList()) {
		std::string user = node.first;
		int degree = node.second.size(); // Degree centrality = number of connections

		// Add data to chart (bar graph)
		chart2->Series["DegreeCentrality"]->Points->AddXY(gcnew String(user.c_str()), degree);
	}

	// Recalculate axis scale for the chart after adding data
	chart2->ChartAreas[0]->RecalculateAxesScale();
}

// Method to update the Pie Chart based on DataGridView data
private: void UpdatePieChart() {
	// Clear existing chart data
	chart4->Series["Connections"]->Points->Clear();

	// Loop through DataGridView rows to fetch connections
	for (int i = 0; i < dataGridView1->Rows->Count - 1; i++) {
		String^ user1 = dataGridView1->Rows[i]->Cells[1]->Value->ToString();
		String^ user2 = dataGridView1->Rows[i]->Cells[2]->Value->ToString();

		// Create a label for the connection
		String^ connectionLabel = user1 + " - " + user2;

		// Add the connection to the pie chart
		chart4->Series["Connections"]->Points->AddXY(connectionLabel, 1);
	}
}

		private: System::Void setupDataGridView() {
			// Clear existing columns
			dataGridView1->Columns->Clear();

			// Add columns to DataGridView
			dataGridView1->Columns->Add("SrNo", "SERIAL NUMBER");
			dataGridView1->Columns->Add("User1", "USER");
			dataGridView1->Columns->Add("User2", "CONNECTED USER");

			// Set column widths
			dataGridView1->Columns[0]->Width = 220;
			dataGridView1->Columns[1]->Width = 220;
			dataGridView1->Columns[2]->Width = 220;
		}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void chart1_Click(System::Object^ sender, System::EventArgs^ e) {

	}
private: System::Void chart3_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void MyForm_ResizeEnd(System::Object^ sender, System::EventArgs^ e) {
	//EndResponsive();
}
private: System::Void MyForm_Resize(System::Object^ sender, System::EventArgs^ e) {
	//if (this->WindowState == FormWindowState::Maximized)
		EndResponsive();
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {

	chart4->Series->Clear();
	chart4->Series->Add("Connections");
	chart4->Series["Connections"]->ChartType = 
		System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;

}
	  
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {

	try {
		// Get input from text boxes
		System::String^ user1 = textBox1->Text;
		System::String^ user2 = textBox2->Text;

		// Validate input
		if (String::IsNullOrWhiteSpace(user1) || String::IsNullOrWhiteSpace(user2)) {
			MessageBox::Show("Please enter valid usernames in both fields.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		if (user1 == user2) {
			MessageBox::Show("A user cannot connect to themselves!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		// Convert System::String^ to std::string
		std::string user1_std = msclr::interop::marshal_as<std::string>(user1);
		std::string user2_std = msclr::interop::marshal_as<std::string>(user2);

		// Add the connection to the graph
		graph->addConnection(user1_std, user2_std);

		// Update the DataGridView
		dataGridView1->Rows->Clear(); // Clear existing rows
		auto connections = graph->getConnections();
		int srNo = 1; // Serial number for rows

		for (const auto& connection : connections) {
			std::string user1 = std::get<0>(connection);
			std::string user2 = std::get<1>(connection);

			// Add a new row to the DataGridView
			dataGridView1->Rows->Add(srNo++, gcnew System::String(user1.c_str()), gcnew System::String(user2.c_str()));
		}

		// Clear the textboxes
		textBox1->Text = "";
		textBox2->Text = "";
		UpdatePieChart();
		UpdateClosenessCentralityChart();
		// Inform the user
		MessageBox::Show("Connection added successfully!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	catch (const std::exception& ex) {
		MessageBox::Show(gcnew System::String(ex.what()), "Exception", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	catch (...) {
		MessageBox::Show("An unknown error occurred.", "Exception", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	UpdateDegreeCentralityChart();
	UpdateBetweennessCentralityChart();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		// Get input from textboxes
		System::String^ user1 = textBox3->Text;
		System::String^ user2 = textBox4->Text;

		// Validate input
		if (String::IsNullOrWhiteSpace(user1) || String::IsNullOrWhiteSpace(user2)) {
			MessageBox::Show("Please enter valid usernames in both fields.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		// Convert System::String^ to std::string
		std::string user1_std = msclr::interop::marshal_as<std::string>(user1);
		std::string user2_std = msclr::interop::marshal_as<std::string>(user2);

		// Check if the connection exists bidirectionally
		if (graph->isConnectionExist(user1_std, user2_std)) {
			// Delete the connection bidirectionally
			graph->removeConnection(user1_std, user2_std);

			// Update the DataGridView
			dataGridView1->Rows->Clear(); // Clear existing rows
			auto connections = graph->getConnections();
			int srNo = 1; // Serial number for rows

			for (const auto& connection : connections) {
				std::string user1 = std::get<0>(connection);
				std::string user2 = std::get<1>(connection);

				// Add a new row to the DataGridView
				dataGridView1->Rows->Add(srNo++, gcnew System::String(user1.c_str()), gcnew System::String(user2.c_str()));
			}

			// Clear textboxes
			textBox3->Text = "";
			textBox4->Text = "";
			UpdatePieChart();
			UpdateClosenessCentralityChart();
			// Inform the user
			MessageBox::Show("Connection deleted successfully!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else {
			// Inform the user that the connection does not exist
			MessageBox::Show("The connection does not exist!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

			// Clear textboxes
			textBox3->Text = "";
			textBox4->Text = "";
		}
	}
	catch (const std::exception& ex) {
		MessageBox::Show(gcnew System::String(ex.what()), "Exception", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	catch (...) {
		MessageBox::Show("An unknown error occurred.", "Exception", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	UpdateDegreeCentralityChart();
	UpdateBetweennessCentralityChart();
}
private: System::Void chart4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
}
//private: void UpdateGraphFromDataGridView() {
//	// Clear the graph before updating
//	graph->clear();
//
//	// Iterate through DataGridView rows to add connections
//	for (int i = 0; i < dataGridView1->Rows->Count - 1; i++) {
//		String^ user1 = dataGridView1->Rows[i]->Cells[1]->Value != nullptr ? dataGridView1->Rows[i]->Cells[1]->Value->ToString() : nullptr;
//		String^ user2 = dataGridView1->Rows[i]->Cells[2]->Value != nullptr ? dataGridView1->Rows[i]->Cells[2]->Value->ToString() : nullptr;
//
//		if (!String::IsNullOrEmpty(user1) && !String::IsNullOrEmpty(user2)) {
//			// Add connection to the graph
//			graph->addConnection(msclr::interop::marshal_as<std::string>(user1),
//				msclr::interop::marshal_as<std::string>(user2));
//		}
//	}
//}

private: System::Void dataGridView1_CellValueChanged(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	
	

}
private: System::Void buttonSimulateSpread_Click(System::Object^ sender, System::EventArgs^ e) {
	if (String::IsNullOrEmpty(textBoxSimulationStart->Text)) {
		MessageBox::Show(
			"Please specify a starting node to simulate the information spread.",
			"Simulation Error",
			MessageBoxButtons::OK,
			MessageBoxIcon::Warning
		);
		return;
	}

	std::string startNode = msclr::interop::marshal_as<std::string>(textBoxSimulationStart->Text);

	// Perform the simulation
	std::vector<std::string> spreadOrder = graph->simulateInformationSpread(startNode);

	if (spreadOrder.empty()) {
		MessageBox::Show(
			"The starting node \"" + gcnew String(startNode.c_str()) + "\" does not exist in the graph. "
			"Please ensure the node is added before simulating the spread.",
			"Node Not Found",
			MessageBoxButtons::OK,
			MessageBoxIcon::Error
		);
		return;
	}

	// Construct a professional result message
	String^ result = "Information Spread Simulation\n";
	result += "----------------------------------\n";
	result += "Starting Node: " + textBoxSimulationStart->Text + "\n\n";
	result += "Order of Information Spread:\n";

	int step = 1;
	for (const auto& user : spreadOrder) {
		result += step.ToString() + ". " + gcnew String(user.c_str()) + "\n";
		step++;
	}

	// Show the result
	MessageBox::Show(
		result,
		"Simulation Result",
		MessageBoxButtons::OK,
		MessageBoxIcon::Information
	);


}
};
}
