#include<stdio.h>
int main()
{
	int a,b,i,N,s;
	printf("Enter the value of N :");
	scanf("%d",&N);
	a=0,b=1,s=0,i=0;
	while(N>i)
	{
	    printf("%d  ",s);
	    s=a+b;
		a=b;
	    b=s;
	    i++;
	}
	return 0;
}
