#include<stdio.h>
main()
{
	float amount, rate, time, intrest;
    printf("\nenter the amount : ");
    scanf("%f", &amount);

    printf("\nenter the rate : ");
    scanf("%f", &rate);

    printf("\nenter the time : ");
    scanf("%f", &time);

    intrest = (amount * rate * time) / 100;

    printf("simple intrest is : %f", intrest);
}
