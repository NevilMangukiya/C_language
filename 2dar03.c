#include<stdio.h>

main()
{
	int n,size,sum=0;
	float total=0;
	printf("Enter value ");
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
		
		printf("ar[%d][%d]=%d\n",i,j,ar[i][j]);
        }
	}

    for(i=0;i<n;i++)
      {
         for(j=0;j<n;j++)
		{
	
     		 total+=ar[i][j];
    	}
}
	sum=total;
	printf("\n\sum  is %d",sum);
}

