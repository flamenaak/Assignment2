/*
 * enrol.h
 *
 *  Created on: 16 Nov 2016
 *      Author: vladko
 */

#ifndef ENROL_H_
#define ENROL_H_

#include "person.h"
#include "course.h"

typedef struct enrol{
	char type;
	char person_number[6];
	char course_number[2];
}enrol_t;
enrol_t* enrol(person_t* person, course_t* course);

#endif /* ENROL_H_ */
