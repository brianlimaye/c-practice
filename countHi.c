#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>

int countHi(char * str);

int countHi(char * str)
{
	char * hi = "hi";
	int count = 0;
	int i;
	
	for(i=0; i< strlen(str); i++)
	{
		if(i == strlen(str) - 1)
		{
			continue;
		}
		if((str[i] == 'h') && (str[i+1] == 'i'))
		{
			++count;
		}
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