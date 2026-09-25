#include <stdio.h>

int main(){
	int num, reverse = 0, digit;
	// num = 532
	printf("Enter a Number: ");
	scanf("%d", &num);
	
	while(num != 0){
		digit = num % 10;
		// digit = 532 % 10 = 2
		// digit = 53 % 10 = 3
		// digit = 5 % 10 = 5
		
		reverse = reverse * 10 + digit;
		// reverse = 0 * 10 + 2 = 2;
		// reverse = 2 * 10 + 3 = 23;
		// reverse = 23 * 10 + 5 = 235;
		
		num = num / 10;
		// num = 532 / 10 = 53 T
		// num = 53 / 10 = 5 T
		// num = 5 / 10 = 0 F
		
	}
	
	printf("Reverse number is %d", reverse);
	return 0;
}
