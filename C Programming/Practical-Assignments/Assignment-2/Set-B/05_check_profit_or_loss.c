#include <stdio.h>

int main(){
	float cost_price, selling_price, PL;
	
	printf("Enter cost price: ");
	scanf("%f", &cost_price);	
	printf("Enter selling price: ");
	scanf("%f", &selling_price);	
	
	PL = selling_price - cost_price;
	
	if(PL > 0){
		printf("You made an Profit of %.2f ruppes!\n", PL);
	}
	else if(PL == 0){
		printf("You didn't made an profit or loss, neither a profit!\n");
	}
	else{
		printf("You are in loss for %.2f ruppes\n", PL);
	}
	
	return 0;
}
