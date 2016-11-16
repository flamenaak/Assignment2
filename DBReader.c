/*
 * DBReader.c
 *
 *  Created on: 16. 11. 2016
 *      Author: Dominik
 */

#include <stdio.h>

int main()
{
	FILE *fp;
	char buff[255];
	char c;
	char number[6];
	char name[20];


	fp = fopen("C:/Users/Dominik/Cworkspace/tmp/DB.txt", "r");

	while(!(fgets(buff, 255, (FILE*) fp) == NULL))
	{
		sscanf(buff, "%c %s %s", &c, number, name);
		printf("%c %s %s\n", c, number, name);
	}

	fclose(fp);

	return 0;

}
