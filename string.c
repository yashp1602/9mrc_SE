#include<stdio.h>
#include<string.h>
main()
{
//	char name[25];
//	printf("Enter the name : ");
//	gets(name);
//	
//	printf("\n name = %s",name);
//	
//	printf("\n length of string : %d",strlen(name));
	
	
	
	
	
	
	char s1[20],s2[20];
	printf("Enter the string : ");
	gets(s1);
	strcpy(s2,s1);
	strrev(s2);
	if(!strcmp(s1,s2))
	{
		printf("string is palindrome");
	}
	else
	{
		printf("string is not palindrome");
	}
}
