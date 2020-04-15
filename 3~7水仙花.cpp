#include<stdio.h>
int main()
{
	int N = 0 , a = 1 , b = 1 , c = 0;
	scanf_s("%d", &N);
	if (N < 10) 
	{
		while (a <= N && b <= N) 
		{
			c = a * b;
			while (a <= b) 
			{
				printf("%d*%d=%d ", a, b, c);
				a++;
			}
			printf("\n");
			a = 1;
			b++;
		}
	}
	else 
	{
		printf("´íÎó\n");
	}
	return 0;
}