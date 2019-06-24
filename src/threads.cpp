/*
 * treads.cpp
 *
 *  Created on: Jun 21, 2019
 *      Author: amassare
 */

#include "threads.h"
#include "various.h"

#include <iostream>
#include <unistd.h>



void* check(void* data) {

	while (true) {


		stampa(((myswap*)data)->ptr);

		sleep(3);
	}
	pthread_exit(NULL);
}
