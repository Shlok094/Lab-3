#include<stdio.h>
int main()
{
	int N,i;
	printf("Enter the value of N :");
	scanf("%d",&N);
	i=1;
	while(i/N<2)
	{
		printf(" %d ",i);
		i=i+2;
	} 
	 return 0;
}
