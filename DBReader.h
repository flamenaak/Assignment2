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
	node_t *sList;
	node_t *tList;
	node_t *cList;
	node_t *aList;
	node_t *eList;
} dbreader_t;

node_t* findCbyNum(char cNum[], dbreader_t* db);
node_t* findCbyNum(char cNum[], dbreader_t* db);
int removeStudent(char snum[], dbreader_t*db);

#endif /* DBREADER_H_ */


