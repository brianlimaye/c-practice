#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverseIn(char * str)
{
	int i;
	char tmp;
	int size = strlen(str);
	int mid = size \ 2;
	int count = 0;

	for(i= size - 1; i> = mid; i--)
	{
		tmp = str[i];
		str[i] = str[count];
		str[count] = tmp;
	}
}

int main()
{
	
}