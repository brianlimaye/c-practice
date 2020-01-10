#include <stdio.h>
#include <stdlib.h>

int main()
{
	char s[] = "Hello";
	char * tmp;

	tmp = s;

	tmp = "Byeby";

	printf("s is: %s\n", s);

	printf("tmp is: %s\n", tmp);



}