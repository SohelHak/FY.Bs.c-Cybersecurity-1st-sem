#include <stdio.h>

int main(){
	int p, r, t;
	float interest;
	
	printf("Enter Principle AMT: ");
	scanf("%d", &p);
	printf("Enter Rate: ");
	scanf("%d", &r);
	printf("Enter Time: ");
	scanf("%d", &t);
	
	interest = (p * r * t) / 100;
	
	printf("Simple interest is %.2f\n", interest);
	
	return 0;
}
