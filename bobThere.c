#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

int bobThere(char * str)
{
	char * newStr = str;
	
	do
	{
		newStr = strstr(newStr, "b");

		if(newStr == NULL)
		{
			return 0;
		}

		int len = strlen(newStr);

		if(len < 3)
		{
			return 0;
		}

		newStr += 2;
		
		if(*newStr == 'b')
		{
			return 1;
		}
	}
	while(newStr != NULL);

	return 0;

}

int main()
{
	assert(bobThere("abcbob") == 1);
	assert(bobThere("b9b") == 1);
	assert(bobThere("bac") == 0);	
	assert(bobThere("bbb") == 1);	
	assert(bobThere("abcdefb") == 0);	
	assert(bobThere("123abcbcdbabxyz") == 1);	
	assert(bobThere("b12") == 0);	
	assert(bobThere("b1b") == 1);
	assert(bobThere("b12b1b") == 1);
	assert(bobThere("bbc") == 0);
	assert(bobThere("bbb") == 1);
	assert(bobThere("bb") == 0);
	assert(bobThere("b") == 0);
	assert(bobThere("baabob") == 1);
}