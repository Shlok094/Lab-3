#include<stdio.h>
int main()
{
	int i,n,rev,rem;
	printf("Enter the the number :");
	scanf("%d",&n);
	i=n;
	for(rev=0;n!=0;n=n/10)
	{
		rem=n%10;
		rev=rev*10+rem;
	}
	if(i==rev)
	printf("%d is a palindrome number",i);
	else
	printf("%d is not a palindrome number",i);
	return 0;
}
