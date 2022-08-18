#include<stdio.h>
#include<conio.h>
void addition(int,int);
void sub(int,int);
void mul(int,int);
void div(int,int);
void main()
{
	int a,b,i,choice,y,c,d;
	char ch;
	
	do
	{
     	printf("1 for addition::\n");
	    printf("2 for subtraction::\n");
        printf("3 for Multiplication::\n");
	    printf("4 for Division::\n");
	    
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
	    	case 3:
	    			printf("Enter value of A & B");
	    			scanf("%d &d",&a,&b);
	    			mul(a,b);
	    			break;
	    	case 4:
	    			printf("Enter value of A & B");
	    			scanf("%d &d",&a,&b);
	    			div(a,b);
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
	int sum;
	sum=a+b;
	printf("Sum =%d",sum);
}

void sub(int c,int d)
{
	int subt;
	subt=c-d;
	printf("subtract =%d",subt);
}

void mul(int a,int b)
{
	int multi;
	multi=a*b;
	printf("multipil =%d",multi);
}

void div(int a,int b)
{
	int divi;
	divi=a/b;
	printf("division =%d",divi);
}
