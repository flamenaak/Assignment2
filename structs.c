/*
 * structs.c
 *
 *  Created on: 14 Nov 2016
 *      Author: vladko
 */

typedef struct node{
	void * element;
	struct node* next;
} node_t;

typedef struct person{
	char type;
	char first_name[20];
	char number[6];

} person_t;

typedef struct course{
	char type;
	char name[10];
	char course_number[2];
	char semester_number;
}subject_t;

typedef struct enrol{
	char type;
	char person_number[6];
	char course_number[2];
}enrol_t;
