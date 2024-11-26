#include<stdio.h>
int main()
{
	int n,rev,rem;
	printf("Enter the number :");
	scanf("%d",&n);
	for(rev=0;n!=0;n=n/10)
	{
		rem=n%10;
		rev=rev*10+rem;
	}
	printf("The reversed number is : %d",rev);
	return 0;
}
