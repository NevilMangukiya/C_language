#include<stdio.h>
#include<conio.h>
void addition(int,int);
void sub(int,int);

void main()
{
	int a,b,i,choice,y,c,d;
	char ch;
	
	do
	{
     	printf("1 for addition::\n2 for subtraction::\n3 for Multiplication::\n4 for Division::\n");
	    
	    scanf("%d",&choice);
	    switch(choice)
	    {
	    	case 1:
	    			printf("Enter value of a & b");
	    			scanf("%d &d",&a,&b);
	    			addition(a,b);
	    			break;
	    		
	    	case 2:
	    			printf("Enter value of C & D");
	    			scanf("%d &d",&c,&d);
	    			sub(c,d);
	    			break;
	    
	    		
	    	default :
	    	        printf("Invalid choice");
         }
         printf("\nDo you want check another number than press y");
         fflush(stdin);
         scanf("%c",&ch);
           
     }
     while(ch=='y');
		    
}
void addition(int a,int b)
{
	int Sum;
	Sum=a+b;
	printf("Sum =%d",Sum);
}

void sub(int c,int d)
{
	int subt;
	subt=c-d;
	printf("subtract =%d",subt);
}


