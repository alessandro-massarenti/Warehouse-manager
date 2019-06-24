/*
 * various.h
 *
 *  Created on: Jun 21, 2019
 *      Author: amassare
 */

#ifndef VARIOUS_H_
#define VARIOUS_H_

#include "boxData.h"

struct warning {
	scatola* box_ptr;
	int type;
	warning* next;
	warning(scatola* a = 0, int b = 0, warning* c = 0) {
		box_ptr = a;
		type = b;
		next = c;
	}
};

class myswap {
public:
	scatola*& collo;
	warning*& warn;

	myswap(scatola*& p, warning*& q) :
		collo(p),warn(q) {
	}
};

void lowStockCheckup(scatola*, warning*&);
void warningListAdd(scatola*,warning*&,int);

#endif /* VARIOUS_H_ */
