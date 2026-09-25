#include <stdio.h>

int main(){
	int num, sum = 0, reminder;
	//  num,  sum, reminder    exp,         cond,    O/P
	//  253    0       0     253%10=3,    253!=0 T
	//                       0+3=3      
	//						 253/10=25       
	
	//  25     3       3     25%10=5,     25!=0 T
	//                       3+5=8      
	//						 25/10=2       	
	
	//  2     8       5      2%10=2,      2!=0 T
	//                       8+2=10      
	//						 2/10=0       
	
	//  0     10      2      2%10=2,      0!=0 F      10
	//                       8+2=10     (STOP LOOP)
	//						 2/10=0       
	
	printf("Enter a Number: ");
	scanf("%d", &num);
	int originalNum = num;
	
	while(num != 0){
		reminder = num % 10;
		sum = sum + reminder;
		num = num / 10;
	}
	printf("Sum digit %d is %d\n", originalNum, sum);
	
	
	return 0;
}
