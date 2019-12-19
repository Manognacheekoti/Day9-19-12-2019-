#include<stdio.h>
int main()
{
	int i,n;
	printf("enter the n vlue");
	scanf("%d",&n);
	if(n%2==1)
	n-=1;
	while(n>=2)
	{
		printf("\n \n %d",n);
		n-=2;
	}

}

	

