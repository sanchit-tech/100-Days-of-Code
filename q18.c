//Q18: Write a program to assign grades based on a percentage input.

/*
Sample Test Cases:
Input 1:
95
Output 1:
Grade A

Input 2:
82
Output 2:
Grade B

Input 3:
68
Output 3:
Grade D

Input 4:
50
Output 4:
Grade F

*/
#include <stdio.h>
int main(){
	int per;
	printf("Enter your percentage=");
	scanf("%d",&per);
	if (per>=95 && per<=100)
	printf("GRADE A");
	if (per>=80 && per<=94)
	printf("GRADE B");
	if (per>=70 && per<=79)
	printf("GRADE C");
	if (per>=51 && per<=69)
	printf("GRADE D");
	if (per<=50)
	printf("GRADE F");
	return 0;
	
}