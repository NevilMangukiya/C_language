#include<stdio.h>
#include<string.h>
main()
{
	char email[100],password[100];
		
	puts("Enter any password:");
	gets(password);
	
	
	if(strcmp(password,">=65") && strcmp(password,"<=90"))
	{
		puts("login success");
	}
	else
	{
		puts("failed");
	}
	
}
