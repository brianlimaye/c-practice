#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverseIn(char str[])
{
	int i;
	char tmp;
	char tmp1;
	int size = strlen(str);
	int mid = size / 2;
	printf("Mid is %d\n", mid);
	int count = 0;
	printf("Len is: %zu\n", strlen(str));

	
	
	for(i= size - 1; i>= mid; i--)
	{
		
		tmp = str[i];
		printf("Temp is: %c\n", tmp);
		tmp1 = str[count];
		printf("Temp1 is: %c\n", tmp1);

		str[count] = tmp;
		printf("Here\n");
		str[i] = tmp1;

		count++;	
	}


	printf("Str is: %s\n", str);
}

int main()
{
	char * c = "Brian";
	char a[] = "Brian";


	reverseIn(a);
}