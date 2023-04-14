#include<stdio.h>
union employee 
{
	int employee_id;
	char name[20];
	float salary;
}
main()
{
	union employee p;
	
	printf("Enter the id = ");
	scanf("%d",&p.employee_id);
	printf("id = %d",p.employee_id);
	
	printf("\nEnter the name = ");
	scanf("%s",&p.name);
	printf("Name = %s",p.name);
	
	printf("\nEnter the Salary = ");
	scanf("%f",&p.salary);
	printf("Salary = %f",p.salary);


//structure has total bytes value is 28 and unoin is 20.



}
