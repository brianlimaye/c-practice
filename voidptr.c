
#include <stdio.h>
#include <stdlib.h>

void printstraight()
{
	printf("straight\n");
}

void printleft()
{
	printf("left\n");
}

void printright()
{
	printf("right\n");
}



int main()
{
	int i;

	void (*v[3])();
	v[0] = printstraight;
	v[1] = printleft;
	v[2] = printright;
	
	for(i=0; i< 3; i++)
	{
		(v[i])();
	}

	
}