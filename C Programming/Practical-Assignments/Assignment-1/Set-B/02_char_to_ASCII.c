/* 
Write a C program to accept a character from the
user and display its ASCII value.
*/
#include <stdio.h>

int main(){
	char character;
	
	printf("Enter A Character: ");
	scanf("%c", &character);
	
	printf("ASCII value of %c is %u\n",character, character);
	
	return 0;
}
