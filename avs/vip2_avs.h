#ifndef _VIP2_AVS_
#define _VIP2_AVS_

/*
 *   vip2_avs.h - audio/video switch driver
 *
 *   This program is free software; you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation; either version 2 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program; if not, write to the Free Software
 *   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 *
 */

int vip2_avs_init(void);
int vip2_avs_command(unsigned int cmd, void *arg);
int vip2_avs_command_kernel(unsigned int cmd, void *arg);
#endif  // _VIP2_AVS_
// vim:ts=4

