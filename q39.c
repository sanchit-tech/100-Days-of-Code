//Q39: Write a program to find the product of odd digits of a number.

/*
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/
#include<stdio.h>
int main()
{
	int i,n,product=1;
	printf("Enter a Number:");
	scanf("%d",&i);
	while(i>0)
	{
		n=i%10;
		if(n%2!=0)
		{
		product=product*n;
		
		}
		i=i/10;	
	}
	printf("Product of Odd Digits= %d\n",product);
	return 0;	
}