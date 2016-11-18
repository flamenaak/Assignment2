/*
 * enrol.h
 *
 *  Created on: 16 Nov 2016
 *      Author: vladko
 */

#ifndef ENROL_H_
#define ENROL_H_

#include "model.h"
#include "course.h"

typedef struct enrol{
	char type;
	char person_number[7];
	char course_number[3];
}enrol_t;

enrol_t* newEnrol(char *, char [], char[]);
#endif /* ENROL_H_ */
