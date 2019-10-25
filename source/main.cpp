/*
 * main.cpp

 *
 *  Created on: 10-Oct-2019
 *      Author: chthp00109
 */
#include "input_log.h"
int main()
{
	const int no_of_times = 30000;
	for( unsigned int counter = 1 ; counter < no_of_times ; counter++ )
		debug_log("Hello World!");
	return 0;
}

