#include<stdio.h>

main()
{
	int n,lenghth,size;
	

	printf("Enter number of array: ");
	scanf("%d",&n);
	int ar[n][n];
	int i,j;
	
	
	printf("Enter elements\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		
		printf("ar[%d][%d]=",i,j);
		scanf("%d",&ar[i][j]);
	   }
	}
	

	printf("\n\nArray elements are: \n");
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		
		printf("\nar[%d][%d]=%d %d\n",i,j,ar[i][j]);
	 }
	}
	
	size=sizeof(ar)/sizeof(ar[0][0]);
    printf("\n\nLength of array is %d %d",i,j);

}
