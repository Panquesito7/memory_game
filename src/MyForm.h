#include "randomizer.hpp"
#include "button_manager.hpp"
#include <ctime>
#include <cstdlib>

#pragma once

namespace Memory_Game {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// MyForm summary
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: add construction code here.
			//
		}

	protected:
		/// <summary>
		/// Clean up the resources are being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aboutToolStripMenuItem;
private: System::Windows::Forms::ToolTip^ toolTip1;
private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;




private: System::ComponentModel::IContainer^ components;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		// Required method to support the Designer.
		// You cannot modify the content of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Location = System::Drawing::Point(51, 95);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(25, 23);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Cursor = System::Windows::Forms::Cursors::Help;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold));
			this->label1->Location = System::Drawing::Point(68, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(119, 18);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Memory Game";
			this->toolTip1->SetToolTip(this->label1, L"Click to know more about the Memory Game");
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			this->label1->MouseLeave += gcnew System::EventHandler(this, &MyForm::label1_MouseLeave);
			this->label1->MouseHover += gcnew System::EventHandler(this, &MyForm::label1_MouseHover);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label2->Location = System::Drawing::Point(48, 59);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(162, 15);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Find the pair for each button!";
			// 
			// button2
			// 
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Location = System::Drawing::Point(84, 95);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(25, 23);
			this->button2->TabIndex = 3;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button3
			// 
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->Location = System::Drawing::Point(115, 95);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(25, 23);
			this->button3->TabIndex = 4;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button4
			// 
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->Location = System::Drawing::Point(146, 95);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(25, 23);
			this->button4->TabIndex = 5;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button5
			// 
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->Location = System::Drawing::Point(177, 95);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(25, 23);
			this->button5->TabIndex = 6;
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button6
			// 
			this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button6->Location = System::Drawing::Point(51, 124);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(25, 23);
			this->button6->TabIndex = 7;
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button7
			// 
			this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button7->Location = System::Drawing::Point(84, 124);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(25, 23);
			this->button7->TabIndex = 8;
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button8
			// 
			this->button8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button8->Location = System::Drawing::Point(115, 124);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(25, 23);
			this->button8->TabIndex = 9;
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button9
			// 
			this->button9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button9->Location = System::Drawing::Point(146, 124);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(25, 23);
			this->button9->TabIndex = 10;
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button10
			// 
			this->button10->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button10->Location = System::Drawing::Point(177, 124);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(25, 23);
			this->button10->TabIndex = 11;
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(163, 178);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 13);
			this->label3->TabIndex = 12;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->helpToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(271, 24);
			this->menuStrip1->TabIndex = 13;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->aboutToolStripMenuItem });
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->helpToolStripMenuItem->Text = L"Help";
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(107, 22);
			this->aboutToolStripMenuItem->Text = L"About";
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::aboutToolStripMenuItem_Click);
			// 
			// toolTip1
			// 
			this->toolTip1->AutoPopDelay = 5000;
			this->toolTip1->InitialDelay = 500;
			this->toolTip1->ReshowDelay = 100;
			this->toolTip1->ToolTipTitle = L"Memory Game information";
			// 
			// button11
			// 
			this->button11->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button11->Location = System::Drawing::Point(166, 203);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(94, 28);
			this->button11->TabIndex = 14;
			this->button11->Text = L"Restart game";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(9, 192);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(124, 16);
			this->label4->TabIndex = 15;
			this->label4->Text = L"Available letters:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Green;
			this->label5->Location = System::Drawing::Point(9, 218);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(15, 13);
			this->label5->TabIndex = 16;
			this->label5->Text = L"A";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Fuchsia;
			this->label6->Location = System::Drawing::Point(30, 218);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(15, 13);
			this->label6->TabIndex = 17;
			this->label6->Text = L"E";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(51, 218);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(15, 13);
			this->label7->TabIndex = 18;
			this->label7->Text = L"Z";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::Aqua;
			this->label8->Location = System::Drawing::Point(70, 218);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(15, 13);
			this->label8->TabIndex = 19;
			this->label8->Text = L"P";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::Blue;
			this->label9->Location = System::Drawing::Point(91, 218);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(16, 13);
			this->label9->TabIndex = 20;
			this->label9->Text = L"D";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(271, 243);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->menuStrip1);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Memory Game";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		array<Button^>^ buttons = gcnew array<Button^>(10); ///< Array that contains all the buttons
		array<String^>^ vars = gcnew array<String^>(10);    ///< Array that contains all the values for each button

		String^ first_btn_value;    ///< Stores the first clicked button's value
		String^ button_name;        ///< Stores the first clicked button's name

	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Windows::Forms::DialogResult result = MessageBox::Show(this, "You're going to be redirected to https://en.wikipedia.org/wiki/Concentration_(card_game). Continue?", "Redirect", MessageBoxButtons::YesNo, MessageBoxIcon::Exclamation);

		if (System::Windows::Forms::DialogResult::No == result)
		{
			// "No" or "Cancel" button.
			return;
		}
		else {
			System::Diagnostics::Process::Start("https://en.wikipedia.org/wiki/Concentration_(card_game)");
		}
	}
	private: System::Void button_Click(System::Object^ sender, System::EventArgs^ e) {
		Button^ button = safe_cast<Button^>(sender);
		if (button->Text == "") { // Do NOT run if the text has a value already
			int btn_number = Convert::ToInt32(button->Name->Substring(6)); // Get the button number
			button->Text = vars[btn_number - 1]; // Here we set the random value we previously hid on form load.
			set_button_value(button, label3, buttons, button_name, first_btn_value);
		}
	}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	// This makes sure the random values are different each time the program is run.
	std::srand(std::time(0));

	for (int i = 0; i < buttons->Length; ++i)
	{
		// Fill the array with the button names.
		buttons[i] = safe_cast<Button^>(this->Controls["button" + (i + 1)]);
	}

	// Set the random values for each button and hide them.
	for (int i = 0; i < buttons->Length; i++) {
		set_numbers(buttons[i]);
		vars[i] = buttons[i]->Text;
		buttons[i]->Text = "";
	}
}
private: System::Void aboutToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show(this,
		"Memory Game, v0.2.0\n"
		"Copyright (C) 2022-2023 David Leal (halfpacho@gmail.com)\n"
		"\nLicensed under GNU Affero General Public License v3.0\n"
		"Visit https://www.gnu.org/licenses/agpl-3.0.en.html for more information about the license.", "About", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::DialogResult result = MessageBox::Show(this, "Are you sure you want to restart the game?", "Restart game", MessageBoxButtons::YesNo, MessageBoxIcon::Exclamation);

	if (System::Windows::Forms::DialogResult::No == result)
	{
		// "No" or "Cancel" button.
		return;
	}
	else {
		count = 0;
		count_button = 1;
		flag = false;

		button_name = "";
		first_btn_value = "";

		has_been_reset = false;
		label3->Text = "";
		vars->Clear(vars, 0, vars->Length);

		for (int i = 0; i < buttons->Length; i++) {
			set_numbers(buttons[i], true);
			vars[i] = buttons[i]->Text;
			buttons[i]->Text = "";
		}
	}
}
private: System::Void label1_MouseHover(System::Object^ sender, System::EventArgs^ e) {
	label1->Font = gcnew System::Drawing::Font(label1->Font, FontStyle::Underline | FontStyle::Bold);
	label1->ForeColor = System::Drawing::Color::Blue;
}
private: System::Void label1_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	label1->Font = gcnew System::Drawing::Font(label1->Font, FontStyle::Regular | FontStyle::Bold);
	label1->ForeColor = System::Drawing::Color::Black;
}
};
}
