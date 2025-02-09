
/*
 *      This program is free software; you can redistribute it and/or modify
 *      it under the terms of the GNU General Public License as published by
 *      the Free Software Foundation; either version 2 of the License, or
 *      (at your option) any later version.
 *      
 *      This program is distributed in the hope that it will be useful,
 *      but WITHOUT ANY WARRANTY; without even the implied warranty of
 *      MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *      GNU General Public License for more details.
 *      
 *      You should have received a copy of the GNU General Public License
 *      along with this program; if not, write to the Free Software
 *      Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 *      MA 02110-1301, USA.
 */



/*  * * * * * * * * * * * * * * * * * * * * * * * * * * * 
 Main code by Thomas O Fredericks (tof@t-o-f.info)
 Contributions by Paul Bouchier and Benjamin.soelberg
* * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#ifndef METRO_H
#define METRO_H

#include <inttypes.h>

typedef enum _res_enum {MILLIS, MICROS} res_t;

class Metro
{

public:
    Metro();
    Metro(unsigned long);
    void setInterval(unsigned long);
    void setResolution(res_t);
    uint8_t check();
    uint8_t check(unsigned long);
    unsigned long getTicks();
    void reset();
	
private:
    unsigned long previous_millis;
    unsigned long interval;
    res_t resolution;
};

#endif /* METRO_H */

