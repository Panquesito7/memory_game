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

#ifndef RANDOMIZER_HPP
#define RANDOMIZER_HPP

extern bool has_been_reset;
void set_numbers(System::Windows::Forms::Button^, bool = false);

#endif // RANDOMIZER_HPP
