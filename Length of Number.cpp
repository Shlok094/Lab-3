#include<stdio.h>
int main()
{
	int N,i;
	printf("Enter the Number :");
	scanf("%d",&N);
	i=1;
	while(N/10>0)
	{
	    i++;
	    N=N/10;
	}
	printf("%d",i);
	return 0;
}
