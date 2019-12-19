/* program to print recrese of a number*/
#include<stdio.h>
int main()
{
	int r,n,count=0;
	printf("\n entee the n value:");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
	     count=count+1;
		n=n/10;
	}
		printf("%d",count);
}
