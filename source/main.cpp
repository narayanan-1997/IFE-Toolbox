/*
 * main.cpp

 *
 *  Created on: 10-Oct-2019
 *      Author: chthp00109
 */
#include "debug_log.h"
#define no_of_times 3000
int main()
{
	for( unsigned int counter = 1 ; counter < no_of_times ; counter++ )
		debug_log("Hello World!");
	return 0;
}

