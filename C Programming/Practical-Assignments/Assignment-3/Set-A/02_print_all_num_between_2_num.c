#include <stdio.h>

int main(){
	int num1, num2, i;
	//  num1, num2, i, cond;
	//    1    5    0
	//    1    5    1  1<=5 T 
	//    1    5    2  2<=5 T 
	//    1    5    3  3<=5 T 
	//    1    5    4  4<=5 T 
	//    1    5    5  5<=5 T 
	//    1    5    6  6<=5 F 
	
	printf("Enter 1st number: ");
	scanf("%d", &num1);
	printf("Enter 2nd number: ");
	scanf("%d", &num2);
	
	for(i = num1; i <= num2; i++){
		printf("%d ", i);
	}
	
	return 0;
}
