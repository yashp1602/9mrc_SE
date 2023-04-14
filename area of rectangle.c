#include<stdio.h>
main()
{
	int length, width, area;
    printf("\nenter length :");
    scanf("%i", &length);

    printf("\nenter width :");
    scanf("%i", &width);

    area = length * width;

    printf("area of rectangle is : %i", area);
}
