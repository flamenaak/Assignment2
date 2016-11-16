/*
 * DBReader.c
 *
 *  Created on: 16. 11. 2016
 *      Author: Dominik
 */

#include "dbreader.h"

void enrolStudent(person_t*person, course_t*course, dbreader_t* db);

dbreader_t* newDBReader(FILE *fp) {

	dbreader_t* db = (dbreader_t*)malloc(sizeof(dbreader_t));
	char buff[255];
	char c;
	char numberP[6];
	char numberC[6];
	char name[100];
	char semNumber;

	db->sList = newNode();
	db->tList = newNode();
	db->cList = newNode();
	db->eList = newNode();
	db->aList = newNode();

	//fp = fopen("C:/Users/Dominik/Cworkspace/tmp/DB.txt", "r");

	while (!(fgets(buff, 255, (FILE*) fp) == 0)) {
		sscanf(buff, "%c ", &c);
		if (c == 'S') {
			sscanf(buff, "%c %s %s", &c, numberP, name);
			person_t *student = newStudent(name, numberP);
			addToList(db->sList, student);
		} else if (c == 'T') {
			sscanf(buff, "%c %s %s", &c, numberP, name);
			person_t *teacher = newTeacher(name, numberP);
			addToList(db->tList, teacher);
		} else if (c == 'C') {
			sscanf(buff, "%c %s %s %c", &c, numberC, name, semNumber);
			course_t *course = newCourse(name, numberC, semNumber);
			addToList(db->cList, course);
		} else if (c == 'A') {
			sscanf(buff, "%c %s %s", &c, numberP, numberC);
			enrol_t *teacherE = enrol(numberP, numberC);
			addToList(db->aList, teacherE);
		} else if (c == 'E') {
			sscanf(buff, "%c %s %s", &c, numberP, numberC);
			enrol_t *studentE = enrol(numberP, numberC);
			addToList(db->eList, studentE);
		}
		/*
		 sscanf(buff, "%c %s %s", &c, number, name);
		 printf("%c %s %s\n", c, number, name);
		 */
	}

	fclose(fp);

	return db;

}

node_t* findSbyName(char name[], dbreader_t* db) {
	node_t*cur = db->sList;
	while (cur != 0) {
		if (cur->element != 0) {
			person_t *p = (person_t*) cur->element;
			if (p->first_name == name)
				return cur;
		}
	}
	return 0;
}

node_t* findCbySNum(char stNum[], dbreader_t* db) {
	node_t*cur = db->eList;
	enrol_t *p;
	node_t* list = newNode();

	while (cur != 0) {
		if (cur->element != 0) {
			p = (enrol_t*) cur->element;
			if (p->person_number == stNum && p->type == 'E')
				addToList(list, findCbyNum(p->course_number, db));
		}
	}
	return list;
}

node_t* findCbyTNum(char stNum[], dbreader_t* db) {
	node_t* list = newNode();

	node_t*cur = db->eList;
	enrol_t *p;

	while (cur != 0) {
		if (cur->element != 0) {
			p = (enrol_t*) cur->element;
			if (p->person_number == stNum && p->type == 'A')
				addToList(list,findCbyNum(p->course_number, db));
		}
	}
	return list;
}

node_t* findCbyNum(char cNum[], dbreader_t* db) {
	node_t*cur = db->cList;
	course_t*c;

	while (cur != 0) {
		if (cur->element != 0) {
			c = (course_t*) cur->element;
			if (c->course_number == cNum)
				return cur;
		}
	}
	return 0;
}

int removeStudent(char snum[], dbreader_t*db) {
	node_t*cur = db->sList;
	int i = 0;
	while (cur != 0) {
		if (cur->element != 0) {
			person_t*p = (person_t*) cur->element;
			if (p->number == snum) {
				removeFromList(i, db->sList);
				return 1;
			}
		}
		i++;
	}
	return 0;
}

void enrolStudent(person_t*person, course_t*course, dbreader_t* db)
{
	enrol_t*e = enrol(person, course);
	if(person->number!= 0 && course->course_number != 0)
	addToList((node_t*)db->eList,e);
}

node_t* findStudentsByCourse(char Cnum[], dbreader_t* db)
{
  course_t*cour = findCbyNum(Cnum, db);
  node_t* cur = db->eList;
  node_t* tempList = newNode();

  if(cour == 0)
  {
    return 0;
  }
  else
  {
    while(cur != 0)
    {
      //compare student with our course
      if(cur->element != 0)
      {
        //compare and add to the tempList
        enrol_t* e = (enrol_t*)cur->element;
        if(cour->course_number == e->course_number)
        {
          addToList(tempList, findSbyNum(e->person_number));
        }

      }
    }
    return tempList;
  }
  return 0;
}

node_t* findTeachersByCourse(char Cnum[], dbreader_t* db)
{
  course_t*cour = findCbyNum(Cnum, db);
  node_t* cur = db->aList;
  node_t* tempList = newNode();

  if(cour == 0)
  {
    return 0;
  }
  else
  {
    while(cur != 0)
    {
      //compare student with our course
      if(cur->element != 0)
      {
        //compare and add to the tempList
        enrol_t* a = (enrol_t*)cur->element;
        if(cour->course_number == a->course_number)
        {
          addToList(tempList, findSbyNum(a->person_number));
        }

      }
    }
    return tempList;
  }
  return 0;
}
