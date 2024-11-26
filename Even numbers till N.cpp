#include<stdio.h>
int main()
{
	int N,i;
	printf("Enter the value of N :");
	scanf("%d",&N);
	i=0;
	while(i<2*N+1)
	{
		printf("%d  ",i);
		i=i+2;
	}
	return 0;
}
