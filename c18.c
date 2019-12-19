/* program to print recrese of a number*/
#include<stdio.h>
int main()
{
	int i,n,r,fact,sum=0;
	int temp;

	printf("\n enter the n value:");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
	r=n%10;
	fact=1;
	for(i=1;i<=r;i++)
	{
		fact=fact*i;
	
	}
	sum=sum+fact;
	n=n/10;
}
	if(sum==temp)
		printf("strong");
	else
	    printf("no");
	

}
