/**
 * Memory Game, implemented in C++/CLI/CLR using Windows forms.
 * Copyright (C) 2022 David Leal (halfpacho@gmail.com)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#include <ctime>
#include <random>
#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// MyForm resume
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: add constructor code here.
			//
			repeat_numbers(button1);

			var1 = button1->Text;
			button1->Text = "";

			repeat_numbers(button2);

			var2 = button2->Text;
			button2->Text = "";

			repeat_numbers(button3);

			var3 = button3->Text;
			button3->Text = "";

			repeat_numbers(button4);

			var4 = button4->Text;
			button4->Text = "";

			repeat_numbers(button5);

			var5 = button5->Text;
			button5->Text = "";

			repeat_numbers(button6);

			var6 = button6->Text;
			button6->Text = "";

			repeat_numbers(button7);

			var7 = button7->Text;
			button7->Text = "";

			repeat_numbers(button8);

			var8 = button8->Text;
			button8->Text = "";

			repeat_numbers(button9);

			var9 = button9->Text;
			button9->Text = "";
			
			repeat_numbers(button10);

			var10 = button10->Text;
			button10->Text = "";
		}

	protected:
		/// <summary>
		/// Clean up the resources that are being used.
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
	private: String^ var1;  ///< Used to store the random value for the 1st button
	private: String^ var2;  ///< Used to store the random value for the 2nd button
	private: String^ var3;  ///< Used to store the random value for the 3rd button
	private: String^ var4;  ///< Used to store the random value for the 4th button
	private: String^ var5;  ///< Used to store the random value for the 5th button
	private: String^ var6;  ///< Used to store the random value for the 6th button
	private: String^ var7;  ///< Used to store the random value for the 7th button
	private: String^ var8;  ///< Used to store the random value for the 8th button
	private: String^ var9;  ///< Used to store the random value for the 9th button
	private: String^ var10; ///< Used to store the random value for the 10th button
	private: int count1;    ///< Used to count how many times has the `A` been added
	private: int count2;    ///< Used to count how many times has the `E` been added
	private: int count3;    ///< Used to count how many times has the `Z` been added
	private: int count4;    ///< Used to count how many times has the `P` been added
	private: int count5;    ///< Used to count how many times has the `D` been added
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aboutToolStripMenuItem;
private: System::Windows::Forms::ToolTip^ toolTip1;

private: System::ComponentModel::IContainer^ components;


	private:
		/// <summary>
		/// Variable of the needed designer.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		// Required method to support the Designer.
		// The content of this method cannot be modified with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
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
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->button1, L"button1");
			this->button1->Name = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			resources->ApplyResources(this->label1, L"label1");
			this->label1->Cursor = System::Windows::Forms::Cursors::Help;
			this->label1->Name = L"label1";
			this->toolTip1->SetToolTip(this->label1, resources->GetString(L"label1.ToolTip"));
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			resources->ApplyResources(this->label2, L"label2");
			this->label2->Name = L"label2";
			// 
			// button2
			// 
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->button2, L"button2");
			this->button2->Name = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->button3, L"button3");
			this->button3->Name = L"button3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->button4, L"button4");
			this->button4->Name = L"button4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click_1);
			// 
			// button5
			// 
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->button5, L"button5");
			this->button5->Name = L"button5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->button6, L"button6");
			this->button6->Name = L"button6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->button7, L"button7");
			this->button7->Name = L"button7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->button8, L"button8");
			this->button8->Name = L"button8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->button9, L"button9");
			this->button9->Name = L"button9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->button10, L"button10");
			this->button10->Name = L"button10";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// label3
			// 
			resources->ApplyResources(this->label3, L"label3");
			this->label3->Name = L"label3";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->helpToolStripMenuItem });
			resources->ApplyResources(this->menuStrip1, L"menuStrip1");
			this->menuStrip1->Name = L"menuStrip1";
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->aboutToolStripMenuItem });
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			resources->ApplyResources(this->helpToolStripMenuItem, L"helpToolStripMenuItem");
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			resources->ApplyResources(this->aboutToolStripMenuItem, L"aboutToolStripMenuItem");
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::aboutToolStripMenuItem_Click);
			// 
			// toolTip1
			// 
			this->toolTip1->AutoPopDelay = 5000;
			this->toolTip1->InitialDelay = 500;
			this->toolTip1->ReshowDelay = 100;
			this->toolTip1->ToolTipTitle = L"Memory Game information";
			// 
			// MyForm
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
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
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int random_number = 0;        ///< Used to select the random card choice.
		bool already_srand = false; ///< Makes sure `srand` was already ran or not.
		int count = 0;              ///< Card count.

		bool flag = false;          ///< Used for the card comparation.
		int count_button = 1;       ///< Used to count how many times a button has been clicked

		String ^ first_btn_value;    ///< Used to store the first clicked button's value
		String ^ button_name;        ///< Used to store the first clicked button's name

		// A: First card
		// E: Second card
		// Z: Third card
		// P: Fourth card
		// D: Fifth card

		/**
		 * @brief Utility function to select a random
		 * value to set to each corresponding button
		 * @param button The button to be used
		 * @returns void
		 */
		void repeat_numbers(Button^ button) {
			if (already_srand == false) {
				srand(time(NULL));
				already_srand = true;
			}
			random_number = rand() % 5 + 1;
			switch (random_number) {
				case 1:
					if (count1 == 2) {
						random_number = rand() % 5 + 1;
						repeat_numbers(button);
						break;
					}
					button->Text = L"A";
					button->ForeColor = System::Drawing::Color::Green;
					button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(0)));
					count1++;
					break;
				case 2:
					if (count2 == 2) {
						random_number = rand() % 5 + 1;
						repeat_numbers(button);
						break;
					}
					button->Text = L"E";
					button->ForeColor = System::Drawing::Color::Fuchsia;
					button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(0)));
					count2++;
					break;
				case 3:
					if (count3 == 2) {
						random_number = rand() % 5 + 1;
						repeat_numbers(button);
						break;
					}
					button->Text = L"Z";
					button->ForeColor = System::Drawing::Color::Black;
					button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(0)));
					count3++;
					break;
				case 4:
					if (count4 == 2) {
						random_number = rand() % 5 + 1;
						repeat_numbers(button);
						break;
					}
					button->Text = L"P";
					button->ForeColor = System::Drawing::Color::Aqua;
					button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(0)));
					count4++;
					break;
				case 5:
					if (count5 == 2) {
						random_number = rand() % 5 + 1;
						repeat_numbers(button);
						break;
					}
					button->Text = L"D";
					button->ForeColor = System::Drawing::Color::Blue;
					button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(0)));
					count5++;
					break;
			}
		}

		/**
		 * @brief Utility function used to verify if the
		 * given button name matches one of the button names.
		 * Used to remove the text from the two clicked buttons if there's no match.
		 * @param button_name The string variable to be used
		 * @returns void
		 */
		void check_names(String^ button_name) {
			if (button_name == "") { // Don't check anything if there's no value given
				return;
			}

			if (button_name == button1->Name) {
				button1->Text = "";
			}
			if (button_name == button2->Name) {
				button2->Text = "";
			}
			if (button_name == button3->Name) {
				button3->Text = "";
			}
			if (button_name == button4->Name) {
				button4->Text = "";
			}
			if (button_name == button5->Name) {
				button5->Text = "";
			}
			if (button_name == button6->Name) {
				button6->Text = "";
			}
			if (button_name == button7->Name) {
				button7->Text = "";
			}
			if (button_name == button8->Name) {
				button8->Text = "";
			}
			if (button_name == button9->Name) {
				button9->Text = "";
			}
			if (button_name == button10->Name) {
				button10->Text = "";
			}
		}

		/**
		 * @brief Function that runs on each button click
		 * to avoid/prevent repeated code.
		 * @details
		 * The function will check if there's a match on the given two buttons.
		 * At the first button click, it won't do any checks and will skip.
		 * At the second button click, it will verify the two clicked buttons match.
		 *
		 * How do we check the two clicked buttons?
		 * (1) We have to store the first button's value and name on two variables.
		 * (2) We check the current clicked button matches the other button's value (in this case our variable).
		 *
		 * @param sender Used to verify the clicked button and for other use-cases
		 * @returns void
		 */
		void button_click(System::Object^ sender) {
			Button^ Numbers = safe_cast<Button^>(sender);

			if (flag == false) {
				first_btn_value = Numbers->Text;
				button_name = Numbers->Name;

				flag = true;
			}

			if ((Numbers->Text == first_btn_value) && (count_button != 1)) {
				count += 1;
				label3->Text = L"Card/button count: " + count;

				count_button = 0;
				flag = false;
			}
			else if ((Numbers->Text != first_btn_value) && (count_button == 2)) {
				System::Windows::Forms::DialogResult result = MessageBox::Show(this, "Wrong match. Please try again.", "Wrong match.", MessageBoxButtons::OK, MessageBoxIcon::Information);
				count_button = 0;

				Numbers->Text = "";
				check_names(button_name);

				flag = false;
			}
			count_button++;
		}
		// Generated Windows Forms code, tweaked and modified.
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Diagnostics::Process::Start("https://en.wikipedia.org/wiki/Concentration_(card_game)");
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		button1->Text = var1; // Here we set the random value we did previously (line 46-92)
		button_click(sender);
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		button2->Text = var2; // Here we set the random value we did previously (line 46-92)
		button_click(sender);
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		button3->Text = var3; // Here we set the random value we did previously (line 46-92)
		button_click(sender);
	}
private: System::Void button4_Click_1(System::Object^ sender, System::EventArgs^ e) {
	button4->Text = var4; // Here we set the random value we did previously (line 46-92)
	button_click(sender);
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	button5->Text = var5; // Here we set the random value we did previously (line 46-92)
	button_click(sender);
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	button6->Text = var6; // Here we set the random value we did previously (line 46-92)
	button_click(sender);
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	button7->Text = var7; // Here we set the random value we did previously (line 46-92)
	button_click(sender);
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	button8->Text = var8; // Here we set the random value we did previously (line 46-92)
	button_click(sender);
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	button9->Text = var9; // Here we set the random value we did previously (line 46-92)
	button_click(sender);
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	button10->Text = var10; // Here we set the random value we did previously (line 46-92)
	button_click(sender);
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void aboutToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		// MessageBox to show when the `About` button is being clicked
		MessageBox::Show(this,
		"Memory Game, v0.1 (initial release)\n"
		"Copyright (C) 2022 David Leal (halfpacho@gmail.com)\n"
		"\nLicensed under GNU Affero General Public License v3.0\n"
		"Visit https://www.gnu.org/licenses/agpl-3.0.en.html for more information about the license.", "About", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
};
}
