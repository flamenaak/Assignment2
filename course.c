/*
 * course.c
 *
 *  Created on: 16 Nov 2016
 *      Author: vladko
 */

#include "course.h"
#include <stdlib.h>
#include <stdio.h>

course_t* newCourse(char name[], char number[], char semNum) {
	course_t *subject;
	subject = (course_t*) malloc(sizeof(course_t));
	subject->type = 'C';
	strcpy(subject->name, name);
	strcpy(subject->course_number, number);
	subject->semester_number = semNum;
	return subject;
}
