#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

int countHi ( char * str);

int countHi( char * str)
{
	int count = 0;
	int offset;
	char c;
	char * lookup = "hi";
	int len = strlen(lookup);
	char * newStr = strstr(str, lookup);

	if(newStr == NULL)
	{
		return 0;
	}

	while(newStr != NULL)
	{
		++count;
		newStr = strstr(newStr + len, lookup);
	}

	return count;
}

int main()
{
	int a = countHi("abc hi ho");
	assert(a == 1);

	int b = countHi("ABChi hi");
	assert(b == 2);

	int c = countHi("hihi");
	assert(c == 2);

}