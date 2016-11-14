/*
 * subject.c
 *
 *  Created on: 14 Nov 2016
 *      Author: vladko
 */

struct Subject{
	char ch ='C';
	char course_number[];
	char course_name[];
	int semester_number;
	struct Subject next;
};
