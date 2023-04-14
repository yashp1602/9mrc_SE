#include<stdio.h>
main()
{
	
	int i,number;
	
	printf("Enter the value of number : ");
	scanf("%d",&number);
	
	int a = 0, b = 1;
	
	int next = a + b;
	printf("Fibonaci number is : %d, %d,",a,b);
	
	for(i=3;i<=number;++i)
	{
		printf(" %d,",next);
		a = b;
		b = next;
		next = a + b;
	}
	
}
