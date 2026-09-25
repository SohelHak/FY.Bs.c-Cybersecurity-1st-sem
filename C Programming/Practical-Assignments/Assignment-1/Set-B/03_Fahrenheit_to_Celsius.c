/*
Write a C program to accept temperatures in
Fahrenheit (F) and print it in Celsius(C) and vice versa
*/
#include <stdio.h>

int main(){
	float fahrenheit, celsius;
	
	printf("Enter temperature in Fahrenheit: ");
	scanf("%f", &fahrenheit);
	
	celsius = (fahrenheit - 32) * 5/9;
	fahrenheit = (celsius * 9/5) + 32;
	
	printf("Fahrenheit %.2f = Celsius%.2f\n", fahrenheit, celsius);
	printf("Clesius %.2f = Fahrenheit%.2f\n", celsius, fahrenheit);
	return 0;
}
