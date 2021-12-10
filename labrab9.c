#include<stdio.h>
#include<conio.h>
int main(){
char a[100] = {'\0'};
int chislo = 0, BUKVA = 0, bukva = 0;

printf("Input line: ");
gets(a);

for (int n = 0; n < sizeof(a); n++){
if (a[n] >= '0' && a[n] <= '9') chislo++;
else if (a[n] >= 'A' && a[n] <= 'Z') BUKVA++;
else if (a[n] >= 'a' && a[n] <= 'z') bukva++;
}

printf("\n CHISLA = %d; \n BUKVA = %d; \n bukva = %d.", chislo, BUKVA, bukva);

char *numbers[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
int n;
printf("enter a number:");
scanf("%d", &n);
printf("your number %s", numbers[n]);

return 0;
}