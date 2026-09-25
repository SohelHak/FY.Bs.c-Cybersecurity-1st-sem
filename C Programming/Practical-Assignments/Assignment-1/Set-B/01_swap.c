// Write a C program to accept two number and swap without
// using third variable.
#include <stdio.h>

int main(){
	int num1, num2;
	
	printf("Enter Number 1: ");
	scanf("%d", &num1);
	printf("Enter Number 2: ");
	scanf("%d", &num2);
	
	num1 = num1 + num2; 
	num2 = num1 - num2; 
	num1 = num1 - num2; 
	
	printf("num1 is %d\nnum2 is %d", num1, num2);
	
	return 0;
}
