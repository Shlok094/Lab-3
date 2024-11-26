#include<stdio.h>
int main()
{
	int l,f,n,rev,rem;
	printf("Enter the number :");
	scanf("%d",&n);
	l=n%10;
	for(rev=0;n!=0;n=n/10)
	{
		rem=n%10;
		rev=rev*10+rem;
	}
	f=rev%10;
	printf("The sum of the first and last digits of the number is : %d",l+f);
	return 0;
}
