#include<stdio.h>
main()
{
	int a[100],i,num,length;
	
	printf("Enter array size");
	scanf("%d",&num);
	
	for(i=0;i<num;i++)
	{
	   printf("a[%d]",i);
	   scanf("%d",&a[i]);
	}		
		
	length =sizeof(a)/sizeof(a[num]);
	printf("array length is %d\n",length);
     
	 printf("\n\n Array Elements are:\n");	
	for(i=0;i<num;i++)
	{
		printf("a[%d]",i);
		printf("%d\n",a[i]);
	}	
	
}

