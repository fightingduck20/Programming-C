#include <iostream>
#include <stdio.h>
#include <bitset>
using namespace std;
int main(){
	unsigned int a, b;

	printf("vvod oct znacheniya: ");
	scanf("%o", &a); //1
	printf("dec: %d\n", a); //2
	printf("hex >> 4: %x\n", a >> 4); //3
	printf("otric: %x\n", ~a); //4

	printf("vvod hex znach: ");
    scanf(" %x", &b); //5
    printf("and: %x", a & b);
	return 0;
}


