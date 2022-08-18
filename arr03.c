#include<stdio.h>

main()
{
	int n,lenghth,size;
	float average,total=0;
	printf("Enter value ");
	scanf("%d",&n);
	int ar[n];
	int i;
	
	printf("Enter elements\n");
	for(i=0;i<n;i++)
	{
		printf("ar[%d]=",i);
		scanf("%d",&ar[i]);
	}
	

	printf("\n\nArray elements are: \n");
	
	for(i=0;i<n;i++)
	{
		printf("\nar[%d]=%d\n",i,ar[i]);
	}

    for(i=0;i<n;i++)
{
      total+=ar[i];
	  	
}
average=total/n;
printf("average is %2.f",average);
}
