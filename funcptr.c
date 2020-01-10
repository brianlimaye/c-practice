#include <stdio.h>
#include <stdlib.h>

void print()
{
	printf("print\n");
}

void printn()
{
	printf("print1\n");
}

void go(void (*ptr)())
{
	ptr();
}

int main()
{
	void (*ptr)();
	ptr = &printn;
	go(ptr);


}