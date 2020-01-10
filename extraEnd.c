#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>

char * extraEnd(char * str);

char * extraEnd(char * str)
{
	char lastTwo[3];
	char newStr[9];
	strncpy(lastTwo, str + strlen(str) - 2, 2);
	lastTwo[2] = '\0';

	snprintf(newStr, 9, "%s%s%s", lastTwo, lastTwo, lastTwo);

	return strdup(newStr);
}

int main()
{
	char * a = extraEnd("Hello");
	assert(strcmp(a, "lololo") == 0);
	char * b = extraEnd("Ab");
	assert(strcmp(b, "AbAbAb") == 0);
	char * c = extraEnd("Hi");
	assert(strcmp(c, "HiHiHi") == 0);

	free(a);
	free(b);
	free(c);
}