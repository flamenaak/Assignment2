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
void storeToLinkList(struct Object student, struct LinkedList list);

int main()
{
	struct LinkedList list;
	struct Object s1;
	struct Object s2;
	struct Object s3;

	strcpy(s1.name, "Vlado");
	strcpy(s2.name, "Doms");
	strcpy(s3.name, "koaskdoskd");

	printf(s1.name);

	storeToLinkList(s1, list);
	storeToLinkList(s2, list);
	storeToLinkList(s3, list);

	printf(list.root.name);
	return 0;
}

void storeToLinkList(struct Object student, struct LinkedList list)
{
	if(list.root.name == 0)
	{
		list.root = student;
	}
	else
	{
		/*struct Object cur = list.root;
		while(cur.next != NULL)
			cur = *cur.next;
		cur.next = &student;*/
	}
}


