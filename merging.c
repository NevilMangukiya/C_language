#include<stdio.h>
int main()
{
	int i,j,n1,n2,n3;
	
	printf("Enter number of element");
	scanf("%d",&n1);
	int a[n1];
	printf("Enter elements of array:");
	for(i=0;i<n1;i++)
	{
		scanf("%d",&a[i]);
	}
		
	printf("Enter number of element");
	scanf("%d",&n2);
	int b[n2];
	printf("Enter elements of array:");
	for(i=0;i<n2;i++)
	{
		scanf("%d",&b[i]);
	}
    n3=n1+n2;
    int c[n3];
    for(i=0;i<n3;i++)
    {
    	c[i]=a[i];
	}
       for(i = 0,j=n1; j < n3 && i < n2; i++,j++)
    {
  		c[j] = b[i];
  	}
 	printf("\n a[%d] Array Elements After Merging \n", n3); 
 	for(i = 0; i < n3; i++)
  	{
    	printf(" %d \t ",c[i]);
  	}

}

