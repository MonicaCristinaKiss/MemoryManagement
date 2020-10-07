#include <stdio.h>

int main() {
	char c;
	int i;
	float f;
	double d;
	char listChar[3];
	int listInt[3];
	float listFloat[3];
	double listDouble[3];
	printf("Size of char: %d\n", (int)sizeof(c));
	printf("Size of int: %d\n", (int)sizeof(i));
	printf("Size of float: %d\n", (int)sizeof(f));
	printf("Size of double: %d\n", (int)sizeof(d));
	printf("Size of listChar: %d\n", (int)sizeof(listChar));
	printf("Size of listInt: %d\n", (int)sizeof(listInt));
	printf("Size of listFloat: %d\n", (int)sizeof(listFloat));
	printf("Size of listDouble: %d\n", (int)sizeof(listDouble));
	return 0;
}
