#include<stdio.h>
main()
{
      int i,j;
      
      for(i=0;i<=4;i++)
      {
      	for(j=0;j<=5;j++)
      	{
      	    if(j==0 || i-j==1 || i+j==3 )
      	    
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

