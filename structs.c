/*
 * structs.c
 *
 *  Created on: 14 Nov 2016
 *      Author: vladko
 */

struct Object{
	char ch ;
	char name[30];
	char student_number[6];
	struct Object* next;
};

struct LinkedList{
	struct Object root;
};

