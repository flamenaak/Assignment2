/*
 * DBReader.c
 *
 *  Created on: 16. 11. 2016
 *      Author: Dominik
 */

#include <stdio.h>
#include "dbreader.h"

int newDBReader(FILE *fp)
{
	char buff[255];
	char c;
	char numberP[6];
	char numberC[6];
	char name[100];
	char semNumber;
	dbreader_t *s = newDBReader();

	//fp = fopen("C:/Users/Dominik/Cworkspace/tmp/DB.txt", "r");

	while(!(fgets(buff, 255, (FILE*) fp) == NULL))
	{
		sscanf(buff, "%c ", &c);
		if(c=='S')
		{
			sscanf(buff, "%c %s %s", &c, numberP, name);
			person_t *student = newStudent(name, numberP);
			s->sList = student;
		}
		else if (c == 'T')
		{
			sscanf(buff, "%c %s %s", &c, numberP, name);
			person_t *teacher = newTeacher(name, numberP);
			s->tList = teacher;
		}
		else if(c=='C')
		{
			sscanf(buff, "%c %s %s %c", &c, numberC, name, semNumber);
			course_t *course = newCourse(name, numberC, semNumber);
			s->cList = course;
		}
		else if(c=='A')
		{
			sscanf(buff, "%c %s %s", &c, numberP, numberC);
			enrol_t *teacherE = newEnrol(numberP, numberC);
			s->aList = teacherE;
		}
		else if(c=='E')
		{
			sscanf(buff, "%c %s %s", &c, numberP, numberC);
			enrol_t *studentE = newEnrol(numberP, numberC);
			s->eList = studentE;
		}
		/*
		sscanf(buff, "%c %s %s", &c, number, name);
		printf("%c %s %s\n", c, number, name);
		*/
	}

	fclose(fp);

	return 0;

}
