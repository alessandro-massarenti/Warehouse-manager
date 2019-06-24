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

void* warehouseCheckup(void* data) {

	while (true) {
		scatola* box_list = ((myswap*)data)->collo;
		warning* warn_list = ((myswap*)data)->warn;
		lowStockCheckup(box_list,warn_list);

		sleep(5);
	}
	pthread_exit(NULL);
}




//Warehouse error
//Warehouse full

//shipment

//Old stuff

//Deframmentazione

//Movimentazione interna
//Box on hold
//Costo di immagazinamento

