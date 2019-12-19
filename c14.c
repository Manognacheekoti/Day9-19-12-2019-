/* program to print recrese of a number*/
#include<stdio.h>
int main()
{
	int i,fact=0, n,sum=0,temp;
	printf("\n entee the n value:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
		printf("%d",fact);
	}

}
