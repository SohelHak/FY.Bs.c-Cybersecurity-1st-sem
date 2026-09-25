#include <stdio.h>

int main(){
	float radius, area, PI = 3.14;
	
	printf("Enter Radius of a Circle: ");
	scanf("%f", &radius);
	
	area = PI * radius * radius;
	
	printf("Area of a circle is %.2f\n", area);
	
	return 0;
}
