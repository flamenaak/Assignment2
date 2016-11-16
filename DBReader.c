/*
 * DBReader.c
 *
 *  Created on: 16. 11. 2016
 *      Author: Dominik
 */

#include <stdio.h>
#include "dbreader.h"

int newDBReader(FILE *fp)
{
	char buff[255];
	char c;
	dbreader_t *s = newDBReader();

	//fp = fopen("C:/Users/Dominik/Cworkspace/tmp/DB.txt", "r");

	while(!(fgets(buff, 255, (FILE*) fp) == NULL))
	{
		sscanf(buff, "%c ", &c);
		if(c=='S')
		{

			s->sList = buff;
		}
		else if(c=='T')
		{
			s->tList = buff;
		}
		else if(c=='C')
		{
			s->cList = buff;
		}
		else if(c=='A')
		{
			s->aList = buff;
		}
		else if(c=='E')
		{
			s->eList = buff;
		}
		/*
		sscanf(buff, "%c %s %s", &c, number, name);
		printf("%c %s %s\n", c, number, name);
		*/
	}

	fclose(fp);

	return 0;

}

person_t* findSName(char name[]){

}


