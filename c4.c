#include<stdio.h>
int main()
{
	int i,n;
	printf("enter the value");
	scanf("%d",&n);
	i=1;
	while(i<n)
	{
		if(n%i==0)
		printf("\n %d",i);
		i++;
	}
}
