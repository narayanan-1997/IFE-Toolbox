/*
 * main.cpp

 *
 *  Created on: 10-Oct-2019
 *      Author: chthp00109
 */
#include "debug_log.h"
int main()
{
	for( unsigned int no_of_times = 1 ; no_of_times < 3000 ; no_of_times++ )
		debug_log("Hello World!");
	return 0;
}

