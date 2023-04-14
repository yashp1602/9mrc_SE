# include <stdio.h>
main(){

    int row,col;
	int num;
	
	printf("Enter the value of num : ");
	scanf("%d",&num);
	
	for(row=1;row<=num;row++)
	{
		for(col=1;col<=row;col++)
		if(col%2==0)
		{
			printf("0");
		}
		else
		{
			printf("1");
		}
		printf("\n");
	}
	
	
	
	
	
	
	
    int row,col;
	int num;
	
	printf("Enter the value of num : ");
	scanf("%d",&num);
	
	for(row=1;row<=num;row++)
	{
		for(col=1;col<=row;col++)
		if(col%2==0)
		{
			printf("0");
		}
		else
		{
			printf("1");
		}
		printf("\n");
	}
	
	
	
	
	
	
	
	int row,col;
	int num;
	int n=1;
	
	printf("Enter the value of num : ");
	scanf("%d",&num);
	
	for(row=1;row<=num;row++){
		for(col=1;col<=row;col++){
			printf("%d",n);
			n++;
		}
		printf("\n");
	}
	
	
	
	
	
	
	
	
	
	
	int row,col;
	int num;
	int n=1;
	
	printf("Enter the value of num : ");
	scanf("%d",&num);
	
	for(row=1;row<=num;row++){
		for(col=1;col<=row;col++){
			printf("%d",n);
			n++;
		}
		printf("\n");
	}
	
	
	
	
	
	
	int a[6]={23,56,12,5,32,78};
	int i,j,temp;
	
	printf("\n normal array\n");
	for(i=0;i<6;i++)
	{
		printf("%d,",a[i]);
	}
	for(i=0;i<6;i++)
	{
		for(j=i+1;j<6;j++)
		{
			if(a[i] > a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\n sorted array\n");
	for(i=0;i<6;i++)
	{
		printf("%d,",a[i]);
	}
	
	
	
	
	
	
	
	
	
	int a[6]={23,56,12,5,32,78};
	int i,j,temp;
	
	printf("\n normal array\n");
	for(i=0;i<6;i++)
	{
		printf("%d,",a[i]);
	}
	for(i=0;i<6;i++)
	{
		for(j=i+1;j<6;j++)
		{
			if(a[i] < a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\n sorted array\n");
	for(i=0;i<6;i++)
	{
		printf("%d,",a[i]);
	}
	
	
	
	
	
	
	
	
	
	int a[2][3] = {1,2,3,4,5,6};
	int b[2][3] = {3,4,8,9,1,5};
	int c[2][3];
	
	int row,col;
	
	printf("\n First matrix :- \n");
	for(row=0;row<2;row++)
	{
		for(col=0;col<3;col++)
		{
			printf(" %d ",a[row][col]);
		}
		printf("\n");
	}
	
	printf("\n Second matrix :- \n");
	for(row=0;row<2;row++)
	{
		for(col=0;col<3;col++)
		{
			printf(" %d ",b[row][col]);
		}
		printf("\n");
	}
	
	printf("\n Addition of matrix :- \n");
	for(row=0;row<2;row++)
	{
		for(col=0;col<3;col++)
		{
			c[row][col] = a[row][col] + b[row][col];
			printf(" %d ",c[row][col]);
		}
		printf("\n");
	}

}
