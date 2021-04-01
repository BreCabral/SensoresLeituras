#pragma once

namespace SensoresLeituras {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Sumário para MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Adicione o código do construtor aqui
			//
		}

	protected:
		/// <summary>
		/// Limpar os recursos que estão sendo usados.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dgDadosSensores;
	protected:



	private: System::Windows::Forms::Button^ btIncluir;
	private: System::Windows::Forms::Button^ btExcluir;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ tbSensor;
	private: System::Windows::Forms::TextBox^ tbValor;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Sensor;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Valor;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Horario;

	private:
		/// <summary>
		/// Variável de designer necessária.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necessário para suporte ao Designer - não modifique 
		/// o conteúdo deste método com o editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dgDadosSensores = (gcnew System::Windows::Forms::DataGridView());
			this->Sensor = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Valor = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Horario = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btIncluir = (gcnew System::Windows::Forms::Button());
			this->btExcluir = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tbSensor = (gcnew System::Windows::Forms::TextBox());
			this->tbValor = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgDadosSensores))->BeginInit();
			this->SuspendLayout();
			// 
			// dgDadosSensores
			// 
			this->dgDadosSensores->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgDadosSensores->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Sensor,
					this->Valor, this->Horario
			});
			this->dgDadosSensores->Location = System::Drawing::Point(12, 112);
			this->dgDadosSensores->Name = L"dgDadosSensores";
			this->dgDadosSensores->Size = System::Drawing::Size(394, 185);
			this->dgDadosSensores->TabIndex = 0;
			// 
			// Sensor
			// 
			this->Sensor->HeaderText = L"Sensor";
			this->Sensor->Name = L"Sensor";
			// 
			// Valor
			// 
			this->Valor->HeaderText = L"Valor";
			this->Valor->Name = L"Valor";
			// 
			// Horario
			// 
			this->Horario->HeaderText = L"Horario";
			this->Horario->Name = L"Horario";
			this->Horario->Width = 150;
			// 
			// btIncluir
			// 
			this->btIncluir->Location = System::Drawing::Point(12, 65);
			this->btIncluir->Name = L"btIncluir";
			this->btIncluir->Size = System::Drawing::Size(75, 23);
			this->btIncluir->TabIndex = 1;
			this->btIncluir->Text = L"Incluir";
			this->btIncluir->UseVisualStyleBackColor = true;
			this->btIncluir->Click += gcnew System::EventHandler(this, &MyForm::btIncluir_Click);
			// 
			// btExcluir
			// 
			this->btExcluir->Location = System::Drawing::Point(128, 65);
			this->btExcluir->Name = L"btExcluir";
			this->btExcluir->Size = System::Drawing::Size(75, 23);
			this->btExcluir->TabIndex = 1;
			this->btExcluir->Text = L"Excluir";
			this->btExcluir->UseVisualStyleBackColor = true;
			this->btExcluir->Click += gcnew System::EventHandler(this, &MyForm::btExcluir_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(40, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Sensor";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(125, 23);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(39, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Leitura";
			// 
			// tbSensor
			// 
			this->tbSensor->Location = System::Drawing::Point(12, 39);
			this->tbSensor->Name = L"tbSensor";
			this->tbSensor->Size = System::Drawing::Size(100, 20);
			this->tbSensor->TabIndex = 3;
			// 
			// tbValor
			// 
			this->tbValor->Location = System::Drawing::Point(128, 39);
			this->tbValor->Name = L"tbValor";
			this->tbValor->Size = System::Drawing::Size(100, 20);
			this->tbValor->TabIndex = 3;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(422, 313);
			this->Controls->Add(this->tbValor);
			this->Controls->Add(this->tbSensor);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btExcluir);
			this->Controls->Add(this->btIncluir);
			this->Controls->Add(this->dgDadosSensores);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgDadosSensores))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btIncluir_Click(System::Object^ sender, System::EventArgs^ e) {
		dgDadosSensores->Rows->Add(tbSensor->Text, tbValor->Text, DateTime::Now.ToString());
	}
	private: System::Void btExcluir_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			dgDadosSensores->Rows->RemoveAt(dgDadosSensores->CurrentRow->Index);
		}
		catch (...)
		{
			MessageBox::Show("Não existe dados na linha selecionada para excluir", "ERRO");
		}
	}
	};
}
