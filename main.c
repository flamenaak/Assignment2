/*
 * main.c
 *
 *  Created on: 14 Nov 2016
 *      Author: vladko
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "person.h"
#include "course.h"
#include "enrol.h"
#include "node.h"


int main() {
	struct Node *head = NULL;
	head = malloc(sizeof(head));

	person_t *s1 = newStudent();
	person_t *s2 = newStudent();
	person_t *s3 = newStudent();
	person_t *s4 = newStudent();

	node_t *head1 = newNode();

	strcpy(s1->first_name, "Vlado");
	strcpy(s2->first_name, "Doms");
	strcpy(s3->first_name, "Andrej");
	strcpy(s4->first_name, "Kubo");

	if(head1->next == 0)
		printf("this is correct \n");

	addToList(head1, s1);
	addToList(head1, s2);
	addToList(head1, s3);
	addToList(head1, s4);

	removeFromList(1, head1);
	removeFromList(1, head1);
	removeFromList(1, head1);

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


course_t* newSubject() {
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

