/*
 * main2.c
 *
 *  Created on: 16 Nov 2016
 *      Author: vladko
 */

#include "model.h"

int main() {
	struct Node *head = NULL;
	head = malloc(sizeof(head));
	node_t * current;

	FILE *fp;
	fp = fopen("D:/ICTengineering/EclipseProjects3C/Assignment2/db.txt", "r");

	dbreader_t* db= newDBReader(fp);

	printf("%d\n",listSize(db->tList));

	printf("it is done");
}

