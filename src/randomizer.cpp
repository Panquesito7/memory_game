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

#include "randomizer.hpp"
#include <cstdlib>
#include <vector>
#include <string>
#include <algorithm>

bool has_been_reset = false;														///< Used to check if the `count` variables have been reset.
std::vector<std::string> letters = { "A", "E", "Z", "P", "D" };						///< Letters that are going to be used.
std::vector<int> count = { 0, 0, 0, 0, 0 };											///< Keeps track of how many times a letter has been used.
std::vector<std::string> colors = { "Green", "Fuchsia", "Black", "Aqua", "Blue" }; ///< Vector of colors that are going to be used for the specific letters.

/**
 * @brief Utility function to select a random
 * value to set for each corresponding button.
 * @param button The that's going to be updated
 * @param reset A boolean that's used to reset the `count` variables if `true`
 * @returns void
 */
void set_numbers(System::Windows::Forms::Button^ button, bool reset) {
	// Reset the `count` variables to prevent obscure errors.
	if ((reset) && (has_been_reset == false)) {
		std::fill(count.begin(), count.end(), 0);
		has_been_reset = true;
	}

	int random_number = std::rand() % letters.size(); ///< Used to store the random number.

	for (int i = 0; i < letters.size(); i++) {
		if (random_number == i) {
			if (count[i] >= 2) {
				random_number = std::rand() % letters.size();
				set_numbers(button, reset);
				break;
			}

			button->Text = gcnew System::String(letters[i].c_str());
			button->ForeColor = System::Drawing::Color::FromName(gcnew System::String(colors[i].c_str()));
			button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));

			count[i]++;
		}
	}
}
