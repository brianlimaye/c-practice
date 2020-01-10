#include <stdlib.h>
#include <stdio.h>
#include <string.h>


char * getSandwich(char * str)
{
	int i;
	int count = 0;

	char * s = strstr(str, "bread");
	char * test = strstr(s + 5, "");
	char * special = strstr(str, "bread");

	if((strcmp(special, "bread") == 0) || (strlen(test) < 5))
	{
		return "";
	}
	
	char result[strlen(test)];

	

	for(i=0; i<= strlen(test) - 5; i++)
	{
		if((test[i] == 'b') && (test[i + 1] == 'r') && (test[i + 2] == 'e') && (test[i + 3] == 'a') && (test[i + 4] == 'd'))
		{
			printf("Hi\n");
			result[count] = '\0';
			return strdup(result);
		}
		else
		{
			result[count++] = test[i];
		}
	}
	return "";
}

/*
char * getSandwich(char * str)
{
	char * token = NULL;
	printf("hi\n");
	token = strtok(str, "bread");
	if(token == NULL)
	{
		return "";
	}
	printf("First token is: %s\n", token);
	
	while( token != NULL ) {
     printf( " %s\n", token );
    
      token = strtok(NULL, "bread");
   }
   
	token = strtok(token, "bread");
	return token;
}
*/

int main()
{
	char s[] = "breadjambread";
	char * str = getSandwich(s);
	printf("Str is: %s\n", str);
	printf("Resulting string is: %s\n", str);
	char * str1 = getSandwich("xxbreadjambreadyy");
	printf("Resulting string is: %s\n", str1);
	char * str2 = getSandwich("xxbreadyy");
	printf("Resulting string is: %s\n", str2);

}