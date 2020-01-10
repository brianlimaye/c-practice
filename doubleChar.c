#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>

char * doubleChar(char * word);

char * doubleChar(char * word)
{
	int len = (2 * strlen(word)) + 1; 
	char c;
	int count = 0;
	char newWord[len];
	char * temp = newWord;
	
	while((c = *word++) != '\0')
	{
		*temp++ = c;
		*temp++ = c;
		//newWord[count] = c;
		//count++;
		//newWord[count] = c;
		//count++;
	}
	newWord[len - 1] = '\0';

	return strdup(newWord);
}

int main()
{
	char * a = doubleChar("The");
	printf("A is: %s\n", a);
	assert(strcmp(a, "TThhee") == 0);
	
	char * b = doubleChar("AAbb");
	printf("B is: %s\n", b);
	assert(strcmp(b, "AAAAbbbb") == 0);
	
	char * c = doubleChar("Hi-There");
	printf("C is: %s\n", c);
	assert(strcmp(c, "HHii--TThheerree") == 0);
	
	free(a);
	free(b);
	free(c);
}