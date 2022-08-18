#include<stdio.h>
main()
{
      int i,j;
      
      for(i=0;i<=4;i++)
      {
      	for(j=0;j<=5;j++)
      	{
      	    if(i==0 || i==2 || i==4 ||j==0) 
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

