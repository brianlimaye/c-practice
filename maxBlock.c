#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

int maxBlock(char * str)
{
	if(strcmp(str, "") == 0)
	{
		return 0;
	}

	int i;
	int len = strlen(str);
	int score = 0;
	int highScore = 0;
	char * newStr = str;
	char curr = '\0';
	char prev = '\0';

	for(i = 0; i< len; i++)
	{
		curr = *newStr;
		if(curr != prev)
		{
			score = 0;
			prev = *newStr;
		}
		
		++score;

		if(score > highScore)
		{
			highScore = score;
		}

		newStr++;
	}

	return highScore;
}

int main()
{
	assert(maxBlock("hoopla") == 2);
	assert(maxBlock("abbCCCddBBBxx") == 3);
	assert(maxBlock("") == 0);	
	assert(maxBlock("xyz") == 1);
	assert(maxBlock("xxyz") == 2);	
	assert(maxBlock("xyzz") == 2);
	assert(maxBlock("abbbcbbbxbbbx") == 3);	
	assert(maxBlock("XXBBBbbxx") == 3);
	assert(maxBlock("XXBBBBbbxx") == 4);
	assert(maxBlock("XXBBBbbxxXXXX") == 4);
	assert(maxBlock("XX2222BBBbbXX2222") == 4);
}