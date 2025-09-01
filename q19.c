//Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

/*
Sample Test Cases:
Input 1:
3 3 3
Output 1:
Equilateral

Input 2:
3 3 4
Output 2:
Isosceles

Input 3:
2 3 4
Output 3:
Scalene

*/
#include<stdio.h>
int main(){
	int a,b,c;
	printf("Enter length of first side=");
	scanf("%d",&a);
	printf("Enter length of second side=");
	scanf("%d",&b);
	printf("Enter length of third side=");
	scanf("%d",&c);
	if (a==b && b==c)
	printf("Equilateral Triangle");
	else if (a==!b && b==!c)
	printf("Scalene Triangle");
	else 
	printf("Isosceles Triangle");
	
	return 0;
	
}