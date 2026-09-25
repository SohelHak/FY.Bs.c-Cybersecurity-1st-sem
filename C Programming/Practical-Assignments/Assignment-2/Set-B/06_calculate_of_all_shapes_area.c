#include <stdio.h>

int main(){
	int option;
	float width, length, base, height, area;
	
	printf("1. Area of Square\n2. Area of Rectangle\n3. Area of Triangle\nSelect option(1/2/3): ");
	scanf("%d", &option);
	
	switch(option){
		case 1:
			printf("Enter Width: ");
			scanf("%f", &width);
			
			area = width * width;
			
			printf("Area of Square is %.2f\n", area);
			break;
		case 2:
			printf("Enter Length: ");
			scanf("%f", &length);
			printf("Enter Width: ");
			scanf("%f", &width);
			
			area = length * width;
			
			printf("Area of Rectangle is %.2f\n", area);
			break;
		case 3:
			printf("Enter Base: ");
			scanf("%f", &base);
			printf("Enter Height: ");
			scanf("%f", &height);
			
			area = (base * height) / 2;
			
			printf("Area of Triangle is %.2f\n", area);
			break;
		
		default:
			printf("Invalid number! Please Enter Digit between(1/2/3)\n");
	}
	
	return 0;
}

