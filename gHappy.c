#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

int gHappy(char * str)
{
	char * newStr = str;
	int i;
	char c;
	int gStreak = 0;
	int len = strlen(str);

	for(i = 0; i< len; i++)
	{
		c = *newStr;
		if(c == 'g')
		{
			++gStreak;
			newStr++;
			if(i == len - 1)
			{
				if(gStreak == 1)
				{
					return 0;
				}
			}
			continue;
		}

		if(gStreak == 1 && c != 'g')
		{
			return 0;
		}

		gStreak = 0;
		newStr++;
	}
	return 1;	
}

int main()
{
	assert(gHappy("xxggxx") == 1);	
	assert(gHappy("xxgxx") == 0);
	assert(gHappy("xxggyygxx") == 0);	
	assert(gHappy("g") == 0);
	assert(gHappy("gg") == 1);
	assert(gHappy("") == 1);
	assert(gHappy("xxgggxyz") == 1);
	assert(gHappy("xxgggxyg") == 0);	
	assert(gHappy("xxgggxygg") == 1);	
	assert(gHappy("mgm") == 0);
	assert(gHappy("mggm") == 1);
	assert(gHappy("yyygggxyy") == 1);
}