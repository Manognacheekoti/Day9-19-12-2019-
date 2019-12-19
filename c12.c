/* program to print recrese of a number*/
#include<stdio.h>
int main()
{
	int r,n,sum=0,temp;
	printf("\n entee the n value:");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		r=n%10;
	     sum=sum+r*r*r;
		n=n/10;
		
		
	}
	if(sum==temp)
		printf("amstrong");
		else
		printf("no ");
}
