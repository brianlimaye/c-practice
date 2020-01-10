#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void String_append(char ** original, char * appended_str)
{
	*original = (char *) realloc(*original, strlen(*original) + strlen(appended_str) + 1);

	strcat(*original, appended_str);
}

int main()
{
	/*
	char * str = strdup("Brian");

	String_append(&str, "Bahar");
	printf("New x is: %s\n", str);
	*/

	char * c = "Brian";

	if(strcmp(c, "Brian"))
	{
		printf("Congrats");
	}

}