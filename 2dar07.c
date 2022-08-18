#include<stdio.h>
main()
{
	int first,i,j,r,c,sum=0,total;
    char choice;	
	printf("Enter number of rows:");
	scanf("%d",&r);
	
	printf("Enter cols:e");
	scanf("%d",&c);
	int ar[r][c];
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			
			printf("ar[%d][%d]",i,j);
			scanf("%d",&ar[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		   sum= sum+ar[i][j];
             printf("%d\t",ar[i][j]);		
		}
		printf("\n");
	}
	
    printf("\n the sum of rows is %d",sum);
    
	
}


