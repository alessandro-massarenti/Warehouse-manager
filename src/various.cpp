/*
 * misc.cpp
 *
 *  Created on: Jun 21, 2019
 *      Author: amassare
 */

#include "various.h"


void leggi(scatola*& list) {
	std::string input;
	std::cin >> input;
	if (input != "-1") {
		aggiungiScatola(input, list);
		leggi(list);

	} else {
		std::cout << std::endl;
		return;
	}
}

void stampa(scatola*list) {
	if (!list)
		std::cout << std::endl;
	else {
		std::cout << list->code << " " << list->value << std::endl;
		stampa(list->next);
	}
}

void attentionListAdd(scatola*list, attention*& attention_list, int type){
	if(!list)
		attention_list = new attention(list,type);
	else
		attentionListAdd(list,attention_list->next,type);
}
