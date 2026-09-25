/*
Write a C program to read marks from keyboard and
your program should display equivalent grade.
(Distinction, First Class, Second Class, Pass Class and Fail)
*/

#include <stdio.h>

int main(){
	int sub1, sub2, sub3;
	
	printf("Enter sub1 marks: ");
	scanf("%d", &sub1);
	printf("Enter sub2 marks: ");
	scanf("%d", &sub2);
	printf("Enter sub3 marks: ");
	scanf("%d", &sub3);
	
	float percentage = (sub1 + sub2 + sub3) / 3;
	printf("Your total marks is %.2f\n", percentage);
	
	if(percentage >= 70){
		printf("Distinction Class!\n");
	}
	else if(percentage >= 60){
		printf("First Class!\n");
	}
	else if(percentage >= 50){
		printf("Second Class!\n");
	}
	else if(percentage >= 40){
		printf("Pass!\n");
	}
	else{
		printf("Fail!\n");
	}
	return 0;
}
