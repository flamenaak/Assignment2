/*
 * DBReader.h
 *
 *  Created on: 16. 11. 2016
 *      Author: Dominik
 */

#ifndef DBREADER_H_
#define DBREADER_H_

#include "model.h"

typedef struct dbreader
{
	node_t *sList = newNode();
	node_t *tList = newNode();
	node_t *cList = newNode();
	node_t *aList = newNode();
	node_t *eList = newNode();
} dbreader_t;


#endif /* DBREADER_H_ */


