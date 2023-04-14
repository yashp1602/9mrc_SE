#include <stdio.h>

int main() 
{
int i,n,x;

printf("Enter n : ");
scanf("%d",&n);
	
int max=0;
	
for(i=1;i<=n;i++)
{
	printf("Enter x - %d : ",i);
	scanf("%d",&x);

	if(max < x){
		max = x;
	}
}
	
printf("\n max = %d",max);

}
