#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int catDog(char * str)
{
	int catCount = 0;
	int dogCount = 0;
	int i;

	if(strlen(str) < 3)
	{
		return 1;
	}

	for(i=0; i<= strlen(str) - 3; i++)
	{
		if((str[i] == 'c') && (str[i + 1] == 'a') && (str[i+2] == 't'))
		{
			++catCount;
		}

		if((str[i] == 'd') && (str[i + 1] == 'o') && (str[i+2] == 'g'))
		{
			++dogCount;
		}
	}

	if(catCount == dogCount)
	{
		return 1;
	}
	return 0;
}

int main()
{
	int result = catDog("catdog");
	printf("Result is: %d\n", result);
	int result1 = catDog("catcat");
	printf("Result1 is: %d\n", result1);
	int result2 = catDog("1cat1cadodog");
	printf("Result is: %d\n", result2);
}