#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <assert.h>
#include <time.h>
#include <sys/time.h>

int sumNumber(int n, int pos)
{

		int posVal = (n / (int) pow(10, pos - 1)) % 10;
		int count = 1;
		int val = 0;
		int tmp = posVal;
		int num = n;
		int sum = 0;

		while(num != 0)
		{
			val = num % 10;
			if(count < pos)
			{
				tmp = abs(posVal - val);
				sum += tmp * pow(10, count - 1);
			}


			if(count > pos)
			{
				tmp = posVal + val;
				if(tmp >= 10)
				{
					tmp %= 10;
				}
				sum += tmp * pow(10, count - 1);

			}

			if(count == pos)
			{
				sum += posVal * pow(10, count - 1);
			}

			count++;
			num /= 10;
		}

		return sum;
}

int main()
{
		struct timeval start, end;

		gettimeofday(&start,NULL);

		sumNumber(296351, 5);
		sumNumber(762184, 3);
		sumNumber(45873216, 7);
		sumNumber(19750418, 6);
		sumNumber(386257914, 5);

		gettimeofday(&end,NULL);

		int elapsed = ((end.tv_sec - start.tv_sec) * 1000000) + (end.tv_usec - start.tv_usec);
		printf("Execution time: %d nanoseconds\n", elapsed * 1000);

}