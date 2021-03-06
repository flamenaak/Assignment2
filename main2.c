/*
 * main2.c
 *
 *  Created on: 16 Nov 2016
 *      Author: vladko
 */

#include "model.h"
#include "DBReader.h"
#include <stdio.h>

int main() {
	FILE *fp;
	printf("Loading file\n");
	fp = fopen("db.txt", "r");

	dbreader_t* db = newDBReader(fp);

	printf("%d\n", listSize(db->aList));
//--------------------------------------------------------//
	// findSbyName works
	node_t* s = findSbyName("Nudla", db);
	if (s == 0)
		printf("err name not exist\n");

	person_t * p;
	if (s != 0) {
		p = s->element;
		printf("%c %s %s \n", p->type, p->number, p->first_name);
	}

	s = findSbyName("Georgi", db);
	if (s == 0)
		printf("err name not exist\n");

	if (p != 0) {
		p = s->element;
		printf("%c %s %s \n", p->type, p->number, p->first_name);
	}
	//----------------------------------------------------------------------//
	//findSbyNum works
	node_t* st = findSbyNum("123456",db);
	if(st!=0)
	{
		person_t* stud = (person_t*)st->element;
		if(stud != 0)
			printf("found student %s %s\n", stud->first_name, stud->number);
	}

//-----------------------------------------------------------------------------//
	//	findCbyNum works
		node_t* cnode = findCbyNum("31", db);
		if(cnode != 0){
		course_t*course1 = cnode->element;
		if(course1 == 0)
			printf("fail findCbyNum");
		else
		{
			printf(" findCbyNum course I found is %c %s %s %c\n", course1->type, course1->name, course1->course_number, course1->semester_number);
		}}
		else
			printf("no course found");

//------------------------------------------------------------------------//
	//	findCbySNum works
	node_t* list = findCbySNum("654321", db);
	node_t* h = (node_t*)get(1,list);
	course_t* c = (
			course_t*) h->element;
	if(c != 0){
	if(c != 0)
		printf("course I found is %c %s %s %c\n", c->type, c->name, c->course_number, c->semester_number);
	else
		printf("no course");}
	else
		printf("no list item h");

//----------------------------------------------------------------------//
	//	findCbyTNum works
	node_t* list2 = findCbyTNum("123457", db);
	node_t* h2 = (node_t*)get(1,list2);
	course_t* c2 = (
			course_t*) h2->element;
	if(c2 != 0){
	if(c2 != 0)
		printf("course I found is %c %s %s %c\n", c2->type, c2->name, c2->course_number, c2->semester_number);
	else
		printf("no course");}
	else
		printf("no list item h");
//-----------------------------------------------------------------------//

	//findSbyCourse works
	node_t* sList1 = (node_t*)findStudentsByCourse("11", db);
	printf("found %d students one of them is head\n", listSize(sList1));

//--------------------------------------------------------------------//
	//findTbyCourse works
	node_t* sList2 = (node_t*)findTeachersByCourse("31", db);
	printf("found %d teachers one of them is head\n", listSize(sList2));


//--------------------------------------------------------------------//

	//removeStudent works
	node_t* sl = db->sList;
	node_t* el = db->eList;
	printf("students: %d (one is head)\n", listSize(sl));
	printf("student enrols: %d (one is head)\n", listSize(el));
	removeStudent("123456", db);
	printf("students after removing: %d (one is head)\n", listSize(sl));
	printf("student enrols after removing: %d (one is head)\n", listSize(el));

//--------------------------------------------------------------------//
	//enrol


}
