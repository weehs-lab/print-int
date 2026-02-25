/* print-int
 * Copyright (C) 2026 weehs
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <https://www.gnu.org/licenses/>.
 */

#include "utility.h"

/* Only one-digit value is permitted */
int	int_to_char(int value, char *string)
{
	if (!string)
		return (-1);
	if (value < 0 || value > 9)
		return (-1);
	*string = (char)(value + 48);
	return (0);
}
