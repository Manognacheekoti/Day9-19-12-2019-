#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("enter the value");
	scanf("%d",&n);
	i=1;
	while(i<n)
	{
		if(n%i==0)
	
		sum=sum+i;
		i++;
	}
	if(sum==n)
	printf("%d it is perfect",sum);
	else
	printf("no");
	
}
