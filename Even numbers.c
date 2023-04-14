#include<stdio.h>
main()
{
	int x,y,z;
	
	printf("Enter the value of the n : ");
	scanf("%d",&z);
	
	for(x=1;x<=10;x++){
		y = z * x;
		printf("%d * %d = %d\n",z,x,y);
	}
}
