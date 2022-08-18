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
    printf("1 for Additoin\n2 for subtract\n3 for Multiplication\n 4 for Division");
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


      default:
		printf("invalid choice");
    }
    printf("check another number then press y:\n\n");
    fflush(stdin);
    scanf("%c",&ch);
  }
  while(ch=='y');
}
void addition(int a,int b)
{
  int sum;
  sum=a+b;
   printf("sum=%i\n",sum);
}
void sub(int l,int h)
{
  int area;
  area=l-h;
  printf("area=%i\n",area);
}

void mul(int l,int h)
{
  int area;
  area=l*h;
  printf("area=%i\n",area);
}

void div(int l,int h)
{
  int area;
  area=l/h;
  printf("area=%i\n",area);
}
