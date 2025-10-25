/*Q24: Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit

*/
#include <stdio.h>
int main()
{
	float units;
	printf("Enter Number of Units Used:");
	scanf("%f",&units);
	
	float cost=0;
	
	if (units==0)
	{
	printf("No Bill!");
}

	else if (units>0 && units<=100)
{
	cost=units*5.0;
	printf("Your Total Bill is: rs%f",cost);
}

	else if (units>100 && units<=200)
{
	cost=units*6.333333333333333;
	printf("Your Total Bill is: rs%f",cost);
}

	else if (units>200)
{
	cost=units*8.8;
	printf("Your Total Bill is: rs%f",cost);
}

return 0;
}
