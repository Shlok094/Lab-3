#include<stdio.h>
int main()
{
	int N,i,S;
	printf("Enter the value of N :");
	scanf("%d",&N);
	i=1,S=0;
	while(i<=N)
	{
	    S+=i ;
	    i++;
	}
	printf("%d",S);
	return 0;
}
