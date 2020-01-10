#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int prefixAgain(char * str, int n)
{
	char sub[n+1];
	strncpy(str, sub, n);
	sub[n] = '\0';
	char * tmp = str;
	tmp = strstr(tmp, sub);
	tmp = strstr(tmp + n, sub);

	if(tmp == NULL)
	{
		return 0;
	}
	return 1;
}


int main()
{
	int i = prefixAgain("abXYabc", 1);
	int i1 = prefixAgain("abXYabc", 2);
	int i2 = prefixAgain("abXYabc", 3);

	printf("i is: %d\n i1 is: %d\n i2 is: %d\n", i, i1, i2);
}



/*int prefixAgain(char * str, int n)
{
	char sub[n+1];
	char * tmp = str;
	strncpy(sub, str, n);
	sub[n] = '\0';
	tmp = strstr(tmp, sub);
	tmp = strstr(tmp + n, sub);

	if(tmp == NULL)
	{
		return 0;
	}
	return 1;
}
*/
