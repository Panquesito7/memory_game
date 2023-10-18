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

#ifndef BUTTON_MANAGER_HPP
#define BUTTON_MANAGER_HPP

extern int count;
extern int count_button;

extern bool flag;
void set_button_value(System::Windows::Forms::Button^, System::Windows::Forms::Label^, array<System::Windows::Forms::Button^>^, System::String^%, System::String^%);

#endif BUTTON_MANAGER_HPP // BUTTON_MANAGER_HPP
