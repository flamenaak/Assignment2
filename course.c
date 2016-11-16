/*
 * course.c
 *
 *  Created on: 16 Nov 2016
 *      Author: vladko
 */

#include "course.h"
#include <stdlib.h>

course_t* newCourse() {
	course_t *subject;
	subject = (course_t*) malloc(sizeof(course_t));
	subject->type = 'C';
	return subject;
}
