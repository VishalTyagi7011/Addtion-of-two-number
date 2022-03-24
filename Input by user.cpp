#include<stdio.h>
int main()
{
	int x , y, Add, Subtract , Multiply , Division;
	printf("Enter the number:");
	scanf("%d",&x);
	printf("Enter the other number:");
	scanf("%d",&y);
	Add=x+y;
	Subtract=x-y;
	Multiply=x*y;
	Division = x/y;
	printf("Addition of two number = %d",Add);
	printf("Substraction of two number=%d",Subtract);
	printf("Multiply of both number = %d", Multiply);
	printf("Division of both number = %d", Division);
	return 0;
	
	
	
}