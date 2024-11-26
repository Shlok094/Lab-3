#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the value of b :");
	scanf("%d",&b);
	a=1;
	while(a<11)
	{
	    c=a*b;
	    printf("%d X %d = %d\n",a,b,c);
	    a++;
	}
	return 0;
}
