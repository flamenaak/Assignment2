/*
 * DBReader.h
 *
 *  Created on: 16. 11. 2016
 *      Author: Dominik
 */

#ifndef DBREADER_H_
#define DBREADER_H_

#include "model.h"
#include "course.h"

typedef struct dbreader
{
	node_t *sList;
	node_t *tList;
	node_t *cList;
	node_t *aList;
	node_t *eList;
} dbreader_t;

dbreader_t* newDBReader(FILE*);
node_t* findCbyNum(char cNum[], dbreader_t* db);
node_t* findCbySNum(char sNum[], dbreader_t* db);
node_t* findCbyTNum(char tNum[], dbreader_t* db);
int removeStudent(char snum[], dbreader_t*db);
node_t* findTeachersByCourse(char Cnum[], dbreader_t* db);
node_t* findStudentsByCourse(char Cnum[], dbreader_t* db);
node_t* findSbyName(char name[], dbreader_t* db);
person_t* findSbyNum(char num[], dbreader_t* db);

#endif /* DBREADER_H_ */


