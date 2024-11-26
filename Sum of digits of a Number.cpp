#include<stdio.h>
int main()
{
	int i,n,rem;
	printf("Enter the the number :");
	scanf("%d",&n);
	for(i=0;n!=0;n=n/10)
	{
		rem=n%10;
		i+=rem;
	}
	printf("The Sum of all the digits of the number is : %d",i);
	return 0;
}
