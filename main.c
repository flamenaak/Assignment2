/*
 * main.c
 *
 *  Created on: 14 Nov 2016
 *      Author: vladko
 */

#include "model.h"

/*int main() {
	struct Node *head = NULL;
	head = malloc(sizeof(head));
	node_t * current;

	FILE *fp;
	fp = fopen("C:/Users/Dominik/Cworkspace/tmp/DB.txt", "r");

	dbreader_t *reader = newDBReader(fp);

	/person_t *s1 = newStudent("Vlado", "123456");
	 person_t *s2 = newStudent("Doms", "123654");
	 person_t *s3 = newStudent("Kubo" , "987654");
	 person_t *s4 = newStudent("Another", "6946");

	 node_t *head1 = newNode();

	 if(head1->next == 0)
	 printf("this is correct \n");

	 addToList(head1, s1);
	 addToList(head1, s2);
	 addToList(head1, s3);
	 addToList(head1, s4);

	 current = get(2, head1);
	 person_t * p = (person_t*)current->element;
	 printf("Name :%s\n", p->first_name);

	 removeFromList(1, head1);
	 removeFromList(1, head1);
	 removeFromList(1, head1);

	 if(head1->element == 0)
	 printf("this is correct \n");


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

}*/

