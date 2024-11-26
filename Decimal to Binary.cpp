#include<stdio.h>
int main()
{
	int i,n,s,rem,rev;
	printf("Enter the decimal number :");
	scanf("%d",&n);
	s=0;
	for(i=1;n!=0;n=n/2)
	{
		rem=n%2;
		s+=i*rem;
        i=i*10;
	}
	for(rev=0;s!=0;s=s/10)
	{
		rem=s%10;
		rev=rev*10+rem;
	}
	printf("The binary number is : %d",rev);
	return 0;
}
