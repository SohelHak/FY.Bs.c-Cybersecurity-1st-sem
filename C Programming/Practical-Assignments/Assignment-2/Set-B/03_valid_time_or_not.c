#include <stdio.h>

int main(){
	int hours, minutes, seconds;
	
	printf("Enter Hours: ");
	scanf("%d", &hours);
	printf("Enter Minutes: ");
	scanf("%d", &minutes);
	printf("Enter seconds: ");
	scanf("%d", &seconds);
	
	if(hours >= 0 && hours <= 24 && minutes >= 0 && minutes <= 60 && seconds >= 0 && seconds <= 60){
		printf("%d:%d:%d is a Valid timing\n", hours, minutes, seconds);
	}
	else{
		printf("%d:%d:%d is a Invalid timing\n", hours, minutes, seconds);	
	}
	
	return 0;
}
