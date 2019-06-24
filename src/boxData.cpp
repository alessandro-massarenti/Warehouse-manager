/*
 * data.cpp
 *
 *  Created on: 11 giu 2019
 *      Author: alessandro
 */

#include "boxData.h"

scatola* cercaById(std::string input, scatola* list) {
	if (!list)
		return 0;
	if (list->code == input)
		return list;
	return cercaById(input, list->next);
}

void aggiungiScatola(std::string input, scatola*& list) {
	if (!list)
		list = new scatola(input);
	else {
		scatola* temp = 0;
		temp = cercaById(input, list);
		if (temp) {
			temp->value++;
			return;
		} else
			aggiungiScatola(input, list->next);
	}
}

void deleteRecord(scatola*& list, std::string id) {
	if (list->next->code == id) {
		scatola* temp = list->next;
		list->next = temp->next;
		delete temp;
		return;
	}
	deleteRecord(list->next, id);
}

void cancellaScatola(scatola*& list, std::string id) {
	if (list) {
		scatola* temp = cercaById(id, list);
		if (temp) {
			if (temp->value > 1)
				temp->value--;
			else
				deleteRecord(list, id);
			std::cout << "Scatola" << id << "rimossa" << std::endl;
		} else
			std::cout << "Scatola non esistente" << std::endl;
	} else
		std::cout << "Non c'è nessuna scatola in lista" << std::endl;
}


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

