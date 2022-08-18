#include<stdio.h>
main()
{
	int first,i,j,r,c,sum=0,total;
    char choice;	
	printf("Enter number of rows:");
	scanf("%d",&r);
	
	printf("Enter cols:");
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
		  printf("%d\t",ar[i][j]);	
		}
		printf("\n");
	}
	for(i=0;i<r;i++)
	{
	    sum=sum+ar[i][i];
    }
 
  printf("\n the sum of diagonal elements  is %d",sum);
    
	
}


