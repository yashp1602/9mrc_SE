#include<stdio.h>
main()
{
	int number;
	printf("Enter the value of number : ");
	scanf("%d",&number);
	
	(number%2==0) ? printf("This is even number") : printf("This is odd number");
}
