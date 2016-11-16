/*
 * person.h
 *
 *  Created on: 16 Nov 2016
 *      Author: vladko
 */

#ifndef PERSON_H_
#define PERSON_H_

typedef struct person{
	char type;
	char first_name[20];
	char number[6];

} person_t;
person_t* newStudent(char name[], char number[]);
person_t* newTeacher(char name[], char number[]);

#endif /* PERSON_H_ */
