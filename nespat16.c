#include<stdio.h>
main()
{
      int i,j;
      
      for(i=0;i<=5;i++)
      {
      	for(j=0;j<=5;j++)
      	{
      	    if(j==0 || i==0 || i==2 || i*j==5) 
      	    
       	    {
      	    	printf("* ");
			  }
			else
			{
				
				printf("  ");
			}
			
			
		  }
		  printf("\n");
      	
	  }
	
}

