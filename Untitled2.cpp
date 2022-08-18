#include<stdio.h>

main()
{
	int n,lenghth,size;
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
	
//size=sizeof(ar)/sizeof(ar[0]);
//printf("Len of array is %d",i);
	printf("\n\nArray elements are: \n");
	
	for(i=0;i<n;i++)
	{
		printf("\nar[%d]=%d\n",i,ar[i]);
	}
	size=sizeof(ar)/sizeof(ar[0]);
    printf("\n\nLength of array is %d",i);

}
