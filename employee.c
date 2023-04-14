#include<stdio.h>
struct employee
{
	int empno;
	char empname[25];
	char address[25];
	int age;
}
main()
{
	struct employee p;
	
	printf("\nEnter the empno = ");
	scanf("%d",&p.empno);
	printf("empno = %d",p.empno);
	
	printf("\nEnter the empname = ");
	scanf("%s",&p.empname);
	printf("empname = %s",p.empname);
	
	printf("\nEnter the address = ");
	scanf("%s",&p.address);
	printf("address = %s",p.address);
	
	printf("\nEnter the age = ");
	scanf("%d",&p.age);
	printf("age = %d",p.age);
}
