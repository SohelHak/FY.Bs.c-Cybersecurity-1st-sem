#include <stdio.h>

int main(){
	float side, area;
	
	printf("Enter Side of a Square: ");
	scanf("%f", &side);
	
	area = side * side;
	
	printf("Area of a Square is %.2f\n", area);
	
	return 0;
}
