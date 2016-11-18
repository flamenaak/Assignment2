/*
 * enrol.c
 *
 *  Created on: 16 Nov 2016
 *      Author: vladko
 */

#include "enrol.h"

enrol_t* enrol(person_t* person, course_t* course);

enrol_t* enrol(person_t* person, course_t* course) {
	if(person == 0 || course == 0)
		return 0;
	enrol_t *enrol;
	enrol = (enrol_t*) malloc(sizeof(enrol_t));
	if(person->type == 'T')
		enrol->type = 'A';
	else if(person->type == 'S')
		enrol->type = 'E';
	return enrol;
}

enrol_t* newEnrol(char *t, char person[], char course[]){
	enrol_t* enrol = (enrol_t*)malloc(sizeof(enrol_t));
	enrol->type = t;
	strcpy(enrol->course_number, course);
	strcpy(enrol->person_number, person);
	return enrol;
}
