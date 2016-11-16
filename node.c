/*
 * node.c
 *
 *  Created on: 16 Nov 2016
 *      Author: vladko
 */
#include "node.h"
#include <stdio.h>



void addToList(node_t * head, void * item) {
	node_t * current = head;
	while (current->next != NULL) {
		current = current->next;
	}

	node_t * n = newNode();
	n->element = item;
	current->next = n;
}

void removeFromList(int i, node_t* head)
{
	if(i == 0){
		printf("do not remove head");
		return;
	}
	int count= 0;
	node_t * cur = head;
	while(count < i-1 && cur!=0)
	{
		cur = cur->next;
		count++;
	}
	node_t* tmp = cur->next->next;
	free(cur->next);
	cur->next = tmp ;
}

int listSize(node_t* head)
{
	int size = 0;
	node_t*cur = head;
	while(cur != 0)
	{
		cur = cur->next;
		size++;
	}
	return size;
}
