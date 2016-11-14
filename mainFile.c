/*
 * mainFile.c
 *
 *  Created on: 14 Nov 2016
 *      Author: vladko
 */
#include <structs.c>

int Main()
{
	return 0;
}

void storeToLinkList(struct Student student, struct StudList list)
{
	if(list.root == 0)
	{
		list.root = student;
		list.next = student;
	}
	else
	{
		list.next.next = student;
		list.next = student;
	}
}

void storeToLinkList(struct Subject subject, struct SubList list)
{
	if(list.root == 0)
	{
		list.root = subject;
		list.next = subject;
	}
	else
	{
		list.next.next = subject;
		list.next = subject;
	}
}

void storeToLinkList(struct Teacher teacher, struct TList list)
{
	if(list.root == 0)
	{
		list.root = teacher;
		list.next = teacher;
	}
	else
	{
		list.next.next = teacher;
		list.next = teacher;
	}
}
