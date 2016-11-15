/*
 * main.c
 *
 *  Created on: 14 Nov 2016
 *      Author: vladko
 */

#include <stdio.h>
#include <stdlib.h>
#include "structs.c"
#include "methods.h"
#include <string.h>

void addToList(node_t * head, void * val);
person_t* newStudent();
person_t* newSubject();
person_t* newTeacher();
node_t* newNode();

int main() {
	struct Node *head = NULL;
	head = malloc(sizeof(head));

	person_t *s1 = newStudent();
	person_t *s2 = newStudent();

	node_t *head1 = newNode();

	strcpy(s1->first_name, "Vlado");
	strcpy(s2->first_name, "Doms");

	if(head1->next == 0)
		printf("this is correct \n");


	addToList(head1, s1);
	addToList(head1, s2);

	if(head1->element == 0)
				printf("this is correct \n");

	node_t * current;
	current = head1;
	if(current->element == 0)
					printf("this is correct \n");

	while(current != 0)
	{
		if(current->element != 0){
		person_t * p = (person_t*)current->element;
		printf("Name :%s\n", p->first_name);
		}
		else
			printf("skipped\n");

		current = current->next;
	}


	printf("it is done");
	}


void addToList(node_t * head, void * item) {
	node_t * current = head;
	while (current->next != NULL) {
		current = current->next;
	}

	node_t * n = newNode();
	n->element = item;
	current->next = n;
}

person_t* newStudent() {
	person_t *student;
	student = (person_t*) malloc(sizeof(person_t));
	student->type = 'S';
	return student;
}

person_t* newTeacher() {
	person_t *teacher;
	teacher = (person_t*) malloc(sizeof(person_t));
	teacher->type = 'T';
	return teacher;
}

person_t* newSubject() {
	person_t *subject;
	subject = (person_t*) malloc(sizeof(person_t));
	subject->type = 'C';
	return subject;
}

node_t* newNode() {
	node_t * node;
	node = (node_t*) malloc(sizeof(node_t));
	node->next = 0;
	node->element =0;
	return node;
}

