//Q17: Write a program to find the roots of a quadratic equation and categorize them.

/*
Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex

*/
#include <stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	printf("Enter value for x square ");
	scanf("%d",&a);
	printf("Enter value for x");
	scanf("%d",&b);
	printf("Enter value for c");
	scanf("%d",&c);
	int d;
	d = (b*b-4*a*c);
	int root1,root2;
	root1 = (-b+sqrt(d))/2*a;
	root2 = (-b-sqrt(d))/2*a;
	
	if (d>0)
	printf("Roots are real and different %d,%d",root1,root2);
	
	else if (d<0)
	printf("Roots are imaginery and complex");
	
	else if (d==0)
	printf("Roots are Real and Same %d",root1);
	
	return 0;
}