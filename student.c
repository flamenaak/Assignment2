/*
 * student.c
 *
 *  Created on: 14 Nov 2016
 *      Author: vladko
 */

#include <stdio.h>

struct Student{
	char ch = 'S';
	char name[30];
	char student_number[6];
	struct Student next;
};
