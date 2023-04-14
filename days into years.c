#include<stdio.h>
main()
{
	
	float year,days;
	printf("enter the value of year : ");
	scanf("%f",&year);
	
	days = year * 365;
	printf("Days = %f",days);

	printf("\nenter the value of days : ");
	scanf("%f",&days);
		
	year = days / 365;
	printf("Year = %f",year);

}
