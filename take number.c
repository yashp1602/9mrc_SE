#include<stdio.h>
main()
{
	int x,y;
	int ecount = 0;
	int ocount = 0;
	
	int esum = 0;
	int osum = 0;
	
	for(x=0;x<=10;x++)
	{
		printf("Enter the number : ");
		scanf("%d",&y);
		if(y%2==0)
		{
			ecount+=1;
			esum+=y;
		}
		else
		{
			ocount+=1;
			osum+=y;
		}
	}
	printf("\n ecount = %d",ecount);
	printf("\n ocount = %d",ocount);
	
	printf("\n esum = %d",esum);
	printf("\n osum = %d",osum);
}
