#include <stdio.h>
main()
{
	
    int n,a;
    int sum = 0;
 
    printf("Enter the value of n :");    
    scanf("%d",&n); 
 
    while(n>0)    
    {    
        a = n % 10;    
        sum += a;   
        n = n / 10;    
    }   
    printf("Sum of digits is = %d",sum);
	   
}
