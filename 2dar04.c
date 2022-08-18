#include<stdio.h>
main()
{
	 int n,i,j;
	 
	 printf("Enter size of array");
	 scanf("%d",&n);
	 
	 int ar[n][n];
	 
	 printf("Enter elements:");
	 for(i=0;i<n;i++)
	 {
	 	for(j=0;j<n;j++)
	 	{
	 		
	 		printf("ar[%d][%d]",i,j);
	 		scanf("%d",&ar[i][j]);
		 }
	 	
	 }
	 
	 printf("array elements :");
	 {
	 	for(i=0;i<n;i++)
	 	{
	 		for(j=0;j<n;j++)
	 		{
	 			printf("\nar[%d][%d]=%d\n",i,j,ar[i][j]);
			 }
		 }
	 }
}
