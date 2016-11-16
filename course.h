/*
 * course.h
 *
 *  Created on: 16 Nov 2016
 *      Author: vladko
 */

#ifndef COURSE_H_
#define COURSE_H_

typedef struct course{
	char type;
	char name[10];
	char course_number[2];
	char semester_number;
}course_t;

//course_t* newCourse();
course_t* newCourse(char [], char [], char );

#endif /* COURSE_H_ */
