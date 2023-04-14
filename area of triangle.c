#include<stdio.h>
main()
{
	float base, height, area;
    printf("\nenter base :");
    scanf("%f", &base);

    printf("\nenter height :");
    scanf("%f", &height);

    area = 0.5 * base * height;

    printf("area of triangle is : %f", area);
}
