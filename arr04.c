#include<stdio.h>

main()
{
    int i,n;
	printf("Enter value");
	scanf("%d",&n);
	int a[100],b[100],sum[100];
	

	printf("Enter value of A\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}	
	
	printf("Enter value of B\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}	


	for(i=0;i<n;i++)
	{
		sum[i]=a[i]+b[i];
	}	
         printf("sum of two elements is\n");
	for(i=0;i<n;i++)
	{
	   printf("\n\nsum of a & b is  %d\n",sum[i]); 
	}
}
