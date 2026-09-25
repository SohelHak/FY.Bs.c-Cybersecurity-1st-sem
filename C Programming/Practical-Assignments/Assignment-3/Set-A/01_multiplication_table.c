#include <stdio.h>

int main(){
	int num, i=1, ans;
	
	printf("Enter a number: ");
	scanf("%d", &num);
	
	while(i<=10){
		ans = num * i;
		printf("%d x %d = %d\n", num, i, ans);
		i++;
	}
	
	return 0;
}
