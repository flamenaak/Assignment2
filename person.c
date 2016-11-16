/*
 * person.c

 *
 *  Created on: 16 Nov 2016
 *      Author: vladko
 */
#include "person.h"
#include <stdlib.h>
#include <stdio.h>

person_t* newStudent(char name[], char number[]) {
	person_t *student;
	student = (person_t*) malloc(sizeof(person_t));
	student->type = 'S';
	strcpy(student->first_name, name);
	strcpy(student->number, number);
	return student;
}

person_t* newTeacher(char name[], char number[]) {
	person_t *student;
	student = (person_t*) malloc(sizeof(person_t));
	student->type = 'T';
	strcpy(student->first_name, name);
	strcpy(student->number, number);
	return student;
}
