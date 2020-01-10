#include <stdio.h>
#include <stdlib.h>

void changeInts(int * i, int * k)
{
	*i = *i + 1;
	*k = *k + 1;
}

int main()
{
	int i = 9;
	int k = 8;
	changeInts(&i, &k);
	printf("i is %d\n", i);
	printf("k is %d\n", k);
}