#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

char * buildTags(char * tag, char * word);
char * myStrDup(char * val);

char * myStrDup(char * val)
{
	char * copy = (char *)(malloc(strlen(val) + 1));
	if(copy == NULL)
	{
		return NULL;
	}
	strcpy(copy, val);
	return copy;
}

char * buildTags(char * tag, char * word)
{
	int size = strlen(tag + 6) + strlen(word) + 1;

	char newStr[size];
	char firstAngle[strlen(tag) + 2];

	snprintf(newStr, size, "%s%s%s%s%s%s%s", "<", tag, ">", word, "</", tag, ">");

	return myStrDup(newStr);
}

int main()
{
	char * a = buildTags("i", "Yay");
	assert(strcmp(a, "<i>Yay</i>") == 0);
	
	char * b = buildTags("i", "Hello");
	assert(strcmp(b, "<i>Hello</i>") == 0);

	char * c = buildTags("cite", "Yay");
	assert(strcmp(c, "<cite>Yay</cite>") == 0);
	
	free(a);
	free(b);
	free(c);

}