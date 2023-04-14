#include<stdio.h>
main()
{
	int i,num;
	int fact = 1;
	
	printf("Enter the value of num : ");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
	{
		fact = fact * i;
		printf("\nFactorial of %d is : %d ",num,fact);
	}
}
