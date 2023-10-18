/**
 * Memory Game with buttons, implemented in C++/CLR using Windows forms.
 * Copyright (C) 2022-2023 David Leal (halfpacho@gmail.com)
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

#include "button_manager.hpp"
#include <vector>
#include <string>
#include <msclr/marshal_cppstd.h>

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

int count = 0;              ///< Card count.
int count_button = 1;       ///< Used to count how many times a button has been clicked
bool flag = false;          ///< Used for the card comparison.

/**
 * @brief Utility function used to verify if the
 * given button name matches one of the button names.
 * Used to remove the text from the two clicked buttons if there's no match.
 * @param button_name The string variable to be used
 * @param buttons An array that contains a list of all the buttons
 * @returns void
 */
void check_names(String^ button_name, array<Button^>^ buttons) {
	if (button_name == "") { // Don't check anything if there's no value given
		return;
	}

	for (int i = 0; i < buttons->Length; i++) {
		if (button_name == buttons[i]->Name) {
			buttons[i]->Text = "";
		}
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
 * @param button The button that's being clicked
 * @param label3 The label that contains the card count
 * @param buttons An array that contains a list of all the buttons
 * @param button_name A string that stores the second-last clicked button's name
 * @param first_btn_value A string that stores the first clicked button's value
 * @returns void
 */
void set_button_value(Button^ button, Label^ label3, array<Button^>^ buttons, String^% button_name, String^% first_btn_value) {
	if (flag == false) {
		first_btn_value = button->Text;
		button_name = button->Name;

		flag = true;
	}

	if ((button->Text == first_btn_value) && (count_button != 1)) {
		count += 1;
		label3->Text = L"Card/button count: " + count;

		count_button = 0;
		flag = false;
	}
	else if ((button->Text != first_btn_value) && (count_button == 2)) {
		MessageBox::Show("Wrong match. Please try again.", "Wrong match.", MessageBoxButtons::OK, MessageBoxIcon::Information);
		count_button = 0;

		button->Text = "";
		check_names(button_name, buttons);

		flag = false;
	}
	count_button++;
}
