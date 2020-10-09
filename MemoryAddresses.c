#include <stdio.h>

int main() {
	char c='?';
	short s=25;
	int i=2020;
	double d=31.16;
	char lChar[5]={'a','b','c','d','e'};
	short lShort[2]={27,28};
	int lInt[2]={2021,2022};
	double lDouble[2]={47.07,13.5};
	printf("Adresa c: %p\n",&c);
	printf("Adresa s: %p\n",&s);
	printf("Adresa i: %p\n",&i);
	printf("Adresa d: %p\n",&d);
	printf("Adresa lChar: %p\n",lChar);
	printf("Adresa lChar[1]: %p\n",&lChar[1]);
	printf("Adresa lChar[2]: %p\n",&lChar[2]);
	printf("Adresa lChar[3]: %p\n",&lChar[3]);
	printf("Adresa lChar[4]: %p\n",&lChar[4]);
	printf("Adresa lShort: %p\n",lShort);
	printf("Adresa lShort[1]: %p\n",&lShort[1]);
	printf("Adresa lInt: %p\n",lInt);
	printf("Adresa lInt[1]: %p\n",&lInt[1]);
	printf("Adresa lDouble: %p\n",lDouble);
	printf("Adresa lDouble[1]: %p\n",&lDouble[1]);
	return 0;
}
