/*
 * node.h
 *
 *  Created on: 16 Nov 2016
 *      Author: vladko
 */


#ifndef NODE_H_
#define NODE_H_
typedef struct node{
	void * element;
	struct node* next;
} node_t;
node_t* newNode();
void addToList(node_t * head, void * val);
void removeFromList(int i, node_t* head);
int listSize(node_t* head);
node_t* get(int i, node_t* head);

#endif /* NODE_H_ */
