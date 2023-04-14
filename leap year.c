#include<stdio.h>
main()
{
	int y;
    printf("enter any year : ");
    scanf("%i", &y);
    
    if(y%400 == 0 || y%4==0 && y%100!=0)
    {
	    printf("year is leapyear");
    }else
    {
	    printf("year is not leapyear");
    }
    
}
