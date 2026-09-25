#include <stdio.h>

int main(){
	int num1, num2, addition, multiply, substract, oprator;
	float division;
	
	printf("Enter 1st number: ");
	scanf("%d", &num1);
	printf("Enter 2nd number: ");
	scanf("%d", &num2);
	printf("1. Plus(+)\n2. Minus(-)\n3. Multiply(*)\n4. Division(/)\nSelect Oprator(1/2/3/4): ");
	scanf("%d", &oprator);
	
	switch(oprator){
		case 1:
			addition = num1 + num2;
			printf("%d + %d  = %d\n", num1, num2, addition);
			break;
		case 2:
			substract = num1 - num2;
			printf("%d - %d  = %d\n", num1, num2, substract);
			break;
		case 3:
			multiply = num1 * num2;
			printf("%d * %d  = %d\n", num1, num2, multiply);
			break;
		case 4:
			division = num1 / num2;
			printf("%d / %d  = %.2f\n", num1, num2, division);
			break;
			
		default:
			printf("Invalid Oprator!\n Please select Oprator using number(1/2/3/4)");
	}
	
	return 0;
}

