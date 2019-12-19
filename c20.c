#include<stdio.h>
int main()
{
	
int bal=7000,min=5000,ch,avlbal,temp;


while(1)
{
	printf("\n 1.depoist");
	printf("\n  2.withdraw");
	printf("\n show balance");
	printf("\nexit");
	printf("\n enter you choice");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: printf("enter the amount to depoistt");
				scanf("%d",&temp);
				bal=bal+temp;
				printf("\n Rs.%d is depoist successfully",temp);
				break;
		case 2:avlbal=bal-minbal;
		       printf("\n enter amount to draw");
		       scanf("%d",&temp);
		       if(temp<=avbal)
		       {
		       	bal=bal-temp;
		       	printf("\n plz collect your cash...");
			   }
			   else
			   printf("\n in sufficient funds...");
			   break;
		case 3: avlbal=bal-minbal;
				printf("\n availble balance :%d",avlbal);
				printf("\n ledger balance :%d",bal);
				break;
		case 4:exit(0);
		default:printf"\n invalid choice....!");
		
	
	}
}
}
