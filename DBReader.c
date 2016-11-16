/*
 * DBReader.c
 *
 *  Created on: 16. 11. 2016
 *      Author: Dominik
 */

#include <stdio.h>
#include "dbreader.h"

int main()
{
	FILE *fp;
	char buff[255];
	dbreader_t *s = newDBReader();
	dbreader_t *t = newDBReader();
	dbreader_t *c = newDBReader();
	dbreader_t *a = newDBReader();
	dbreader_t *e = newDBReader();

	fp = fopen("C:/Users/Dominik/Cworkspace/tmp/DB.txt", "r");

	while(!(fgets(buff, 255, (FILE*) fp) == NULL))
	{



		/*
		sscanf(buff, "%c %s %s", &c, number, name);
		printf("%c %s %s\n", c, number, name);
		*/
	}

	fclose(fp);

	return 0;

}
