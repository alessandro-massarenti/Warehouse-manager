/*
 * treads.cpp
 *
 *  Created on: Jun 21, 2019
 *      Author: amassare
 */

#include "threads.h"



void* low_stock_check(void* data) {

	while (true) {


		sleep(3);
	}
	pthread_exit(NULL);
}
