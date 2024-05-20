#pragma once

namespace lab41 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для win
	/// </summary>
	public ref class win : public System::Windows::Forms::Form
	{
	public:
		win(void)
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
		~win()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	protected:

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
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->SuspendLayout();
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox1->Location = System::Drawing::Point(864, 12);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(338, 29);
			this->checkBox1->TabIndex = 0;
			this->checkBox1->Text = L"Выделить несколько объектов";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &win::checkBox1_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox2->Location = System::Drawing::Point(864, 82);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(180, 29);
			this->checkBox2->TabIndex = 1;
			this->checkBox2->Text = L"удержание Ctrl";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// win
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1214, 722);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->KeyPreview = true;
			this->Name = L"win";
			this->Text = L"win";
			this->Load += gcnew System::EventHandler(this, &win::win_Load);
			this->Click += gcnew System::EventHandler(this, &win::win_Click);
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &win::win_Paint);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &win::win_KeyDown);
			this->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &win::win_KeyUp);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &win::win_MouseDown);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void win_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void win_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void win_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
	private: System::Void win_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e);
	private: System::Void PaintWin();
	private: System::Void win_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e);
	private: System::Void win_KeyUp(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e);
	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
	
	};

	
}



