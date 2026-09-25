#include <stdio.h>

int main(){
	float breath, height, area;
	
	printf("Enter Breath of a Triangle: ");
	scanf("%f", &breath);
	printf("Enter Height of a Triangle: ");
	scanf("%f", &height);
	
	area = (breath * height) / 2;
	
	printf("Area of a Triangle is %.2f\n", area);
	
	return 0;
}
