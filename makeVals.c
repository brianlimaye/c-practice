#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char * makeVals(char * val, char *val1);


char * makeVals(char *val, char *val1)
{
	int size = (2 * strlen(val)) + (2 * strlen(val1)) + 1;

	char newVal[size];

	snprintf(newVal, sizeof(newVal), "%s%s%s%s", val, val1, val1, val);
	
	return strdup(newVal);
}

int main(int argc, char ** argv)
{
	
	char * a = makeVals("Hi", "Bye");
	char * b = makeVals("Yo", "Alice");
	char * c = makeVals("What", "Up");

	int result = strcmp(a, "HiByeByeHi");

	if(result == 0)
	{
		fprintf(stdout, "codingcat--- test case #1 is: %s\n", a);
	}
	else
	{
		fprintf(stdout, "codingcat--- Incorrect, expected output for test case #1 is: %s\n", a);
	}

	result = strcmp(b, "YoAliceAliceYo");
	if(result == 0)
	{
		fprintf(stdout, "codintcat--- test case #2 is: %s\n", b);
	}
	else
	{
		fprintf(stdout, "codingcat--- Incorrect, expected output for test case #2 is: %s\n", b);
	}

	result = strcmp(c, "WhatUpUpWhat");
	if(result == 0)
	{
		fprintf(stdout, "codintcat--- test case #3 is: %s\n", c);
	}
	else
	{
		fprintf(stdout, "codingcat--- Incorrect, expected output for test case #3 is: %s\n", c);
	}

	free(a);
	free(b);
	free(c);

}