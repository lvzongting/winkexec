/* WinKexec: kexec for Windows
 * Copyright (C) 2008-2010 John Stumpo
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef KEXEC_DRIVER_COMPAT_H
#define KEXEC_DRIVER_COMPAT_H

#ifndef TAG
#define TAG(a, b, c, d) ((a) | (b) << 8 | (c) << 16 | (d) << 24)
#endif

#include <stdint.h>

#define WORD uint16_t
#define BYTE UCHAR
#define DDKAPI NTAPI

#endif /* KEXEC_DRIVER_COMPAT_H */
