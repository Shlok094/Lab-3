#include<stdio.h>
#include<math.h>
int main()
{
	int i,e,s,n;
	printf("Enter the the binary number :");
	scanf("%d",&n);
	e=0;
	s=0;
	for(i=0;n!=0;n=n/10)
	{
		i=n%10;
		s+=i*pow(2,e++);
	}
	printf("The decimal number is : %d",s);
	return 0;
}
