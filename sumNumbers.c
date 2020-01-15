#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <assert.h>

int sumNumbers(char * str)  
{
	int len = strlen(str);

	if(len == 0)
	{
		return 0;
	}
	char * newStr = str;
	char * tmp = (char *) malloc(2 * sizeof(char));
	int i;
	char c;
	int numStreak = 0;
	int highestStreak = 0;
	int sum = 0;
	
	for(i = 0; i < len; i++)
	{
		c = *newStr;
		if(isdigit(c))
		{
			numStreak++;
			if(numStreak > highestStreak)
			{
				tmp = (char *)realloc(tmp, (numStreak + 1) * sizeof(char));
			}
			strncat(tmp, &c, 1);

			if(i == len - 1)
			{
				strcat(tmp, "");
				sum += atoi(tmp);
				memset(tmp, '\0', numStreak);
			}
		}
		else
		{
			if(numStreak == 0)
			{
				newStr++;
				continue;
			}
			
			if(numStreak > 0)
			{
				
				if(numStreak > highestStreak)
				{
					highestStreak = numStreak;
				}
				strcat(tmp, "");
				sum += atoi(tmp);
				memset(tmp, '\0', numStreak);
			}
			numStreak = 0;
			
			if(i != len - 1)
			{
				tmp = (char *) realloc(tmp, 2 * sizeof(char));
			}
		}
		newStr++;
	}
	free(tmp);
	return sum;
}

int main()
{
	assert(sumNumbers("abc123xyz") == 123);	
	assert(sumNumbers("aa11b33") == 44);	
	assert(sumNumbers("7 11") == 18);	
	assert(sumNumbers("Chocolate") == 0);
	assert(sumNumbers("5hoco1a1e") == 7);	
	assert(sumNumbers("5$$1;;1!!") == 7);	
	assert(sumNumbers("a1234bb11") == 1245);	
	assert(sumNumbers("") == 0);
	assert(sumNumbers("a22bbb3") == 25);
}