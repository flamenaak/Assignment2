/*
 * person.c

 *
 *  Created on: 16 Nov 2016
 *      Author: vladko
 */
#include "person.h";



person_t* newStudent() {
	person_t *student;
	student = (person_t*) malloc(sizeof(person_t));
	student->type = 'S';
	return student;
}

person_t* newTeacher() {
	person_t *teacher;
	teacher = (person_t*) malloc(sizeof(person_t));
	teacher->type = 'T';
	return teacher;
}
