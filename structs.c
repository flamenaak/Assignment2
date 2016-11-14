/*
 * structs.c
 *
 *  Created on: 14 Nov 2016
 *      Author: vladko
 */

struct Student{
	char ch = 'S';
	char name[30];
	char student_number[6];
	struct Student next;
};

struct Subject{
	char ch ='C';
	char course_number[];
	char course_name[];
	int semester_number;
	struct Subject next;
};

struct Teacher{
	char ch='T';
	char name[30];
	char teacher_number[6];
	struct Teacher next;
};

struct StudList{
	struct Student root;
	struct Student next;
};

struct SubList{
	struct Subject root;
	struct Subject next;
};

struct TList{
	struct Teacher root;
	struct Teacher next;
};
