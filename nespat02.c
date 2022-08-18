#include<stdio.h>
main()
{
      int i,j;
      
      for(i=0;i<=6;i++)
      {
      	for(j=0;j<=4;j++)
      	{
      	    if(j==0 || i+j==1 || i==0 || j==4 || i==6 || i==3) 
      	    {
      	    	printf(" *");
			  }
			else
			{
				
				printf("  ");
			}
			
			
		  }
		  printf("\n");
      	
	  }
	
}

