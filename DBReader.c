/*
 * DBReader.c
 *
 *  Created on: 16. 11. 2016
 *      Author: Dominik
 */

#include "dbreader.h"

node_t* findSbyName(char name[], dbreader_t* db ){
	node_t*cur = db->sList;
	while(cur != 0)
	{
		if(cur->element != 0){
			person_t *p = (person_t*)cur->element;
			if(p->first_name == name)
				return cur;
		}
	}
	return 0;
}

node_t* findCbyPerNum(char stNum[], dbreader_t* db){
	node_t*cur = db->eList;
	enrol_t *p;

	while(cur != 0)
	{
		if(cur->element != 0){
			p = (enrol_t*)cur->element;
			if(p->person_number == stNum)
				break;
			}
	}

	return findCbyNum(p->course_number, db);
}

node_t* findCbyNum(char cNum[], dbreader_t* db){
	node_t*cur = db->cList;
	course_t*c;

	while(cur != 0)
		{
			if(cur->element != 0){
				c = (course_t*)cur->element;
				if(c->course_number == cNum)
					return cur;
			}
		}
		return 0;
}



