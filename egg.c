#include<stdio.h>
main()
{
 int i,j,a[10][10],row,col,even,odd,sum=0,sum1=0;
printf("how many row:-");
 scanf("%i",&row);
 printf("how many colounm:-");
 scanf("%i",&col);
 for(i=0;i<row;i++)
 {
     for(j=0;j<col;j++)
     {
	printf("a[%i][%i]=",i,j);
	scanf("%i",&a[i][j]);
	if(a[i][j]%2==1)
	{
	    sum=sum+a[i][j];
	}
	else
	{
	   sum1=sum1+a[i][j];
	}

    }
 }
 for(i=0;i<row;i++)
 {
    for(j=0;j<col;j++)
    {
       printf("%i\t",a[i][j]);
    }
      printf("\n");
 }

 printf("\n\n2d array odd number total:-%i",sum);
 printf("\n\n2d array even number total:-%i",sum1);
 }


