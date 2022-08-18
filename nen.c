#include<stdio.h>
#include<conio.h>
void addition(int,int);
void sub(int,int);
void mul(int,int);
void div(int,int);
void main()
{
  int choice,r,l,h,a,b;
  char ch;
  
  
  do
  {
    printf("\n\n1 for Additoin\n2 for subtract\n3 for Multiplication\n4 for Division\n0 for Exit\n\n\n\n");
    scanf("%d",&choice);
    switch(choice)
    {
      case 1:
		printf("enter value of a & b");
		scanf("%d %d",&a,&b);
		addition(a,b);
		break;

      case 2:
		printf("enter l&h:");
		scanf("%i %i",&l,&h);
		sub(l,h);
		break;
		
		 case 3:
		printf("enter l&h:");
		scanf("%i %i",&l,&h);
		mul(l,h);
		break;
 case 4:
		printf("enter l&h:");
		scanf("%i %i",&l,&h);
		div(l,h);
		break;
	
 case 0:
 	     printf("  ");
 	     break;


      default:
		printf("\n\ninvalid choice\n\n");
    }
 
  }
  while(choice!=0);
}
void addition(int a,int b)
{
  int sum;
  sum=a+b;
   printf("\nsum=%i\n\n",sum);
}

void sub(int l,int h)
{
  int area;
  area=l-h;
  printf("\nsubtraction of %i-%i =%i\n",l,h,area);
}

void mul(int l,int h)
{
  int area;
  area=l*h;
  printf("\nmultiplication of %i*%i=%i\n\n\n",l,h,area);
}

void div(int l,int h)
{
  int area;
  area=l/h;
  printf("\ndivision of %i/%i =%i\n",l,h,area);
}

