/* program to print recrese of a number*/
#include<stdio.h>
int main()
{
	int r,n;
	printf("\n entee the n value:");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		printf("%d",r);
		n=n/10;
	}
}
