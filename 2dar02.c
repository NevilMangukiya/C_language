#include<stdio.h>

main()
{
	int n,size;
	float average,total=0;
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
average=total/n;
printf("\n\naverage is %2.f",average);
}

