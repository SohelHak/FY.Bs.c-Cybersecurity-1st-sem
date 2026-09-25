#include <stdio.h>

int main(){
	int myInt = 5;
	float myFloat = 5.10;
	char myChar = 'A';
	double myDouble = 123.4567890;

	printf("Size of Int is %lu Bytes\n", sizeof(myInt));
	printf("Size of Float is %lu Bytes\n", sizeof(myFloat));
	printf("Size of Char is %lu Bytes\n", sizeof(myChar));
	printf("Size of Double is %lu Bytes\n", sizeof(myDouble));
	return 0;
}

