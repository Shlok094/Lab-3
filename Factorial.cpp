#include<stdio.h>
int main()
{
	int N,i,S;
	printf("Enter the value of N :");
	scanf("%d",&N);
	S=1,i=1;
	while(i<=N)
	{
	    S=S*i;
	    i++;
	}
	printf("%d",S);
	return 0;
}
