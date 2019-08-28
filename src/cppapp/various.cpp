/*
 * various.cpp
 *
 *  Created on: Jun 21, 2019
 *      Author: amassare
 */

#include "various.h"

void warningListAdd(scatola*box_list, warning*& warning_list, int type){
	if(!box_list)
		warning_list = new warning(*box_list,type);
	else
		warningListAdd(box_list,warning_list->next,type);
}

//Low stock warehouseCheckup
//Deve scorrere tutta la box_list e se trova scatole con un valore troppo basso di oggetti al suo interno;
//deve aggiungere un elemento warning(puntatore a scatola) che dica warning resources too low

void lowStockCheckup(scatola* box_list, warning*& warning_list){

	if(!box_list)
		return;
	if(box_list->value <= box_list->low_warn){
		warningListAdd(box_list,warning_list,1);
	}
	lowStockCheckup(box_list->next, warning_list);
}


// warn should be unloaded on a database periodically
