#include<stdio.h>
#include<string.h>
int main(){
    char mass1[10]="Hello "; //начало первого задания
    char mass2[10]="12345";
    int n;
    printf("vvedite chislo znakov:");
    scanf(" %d" , &n);
    strncat (mass1, mass2, n);
    printf (" %s \n" ,mass1);

    char mass2_1[10]="12345"; //начало второго задания
    char mass2_2[10]="1234";
    if (strcmp (mass2_1, mass2_2)==0)
        puts ("chisla ravni");
    else{
        puts ("chisla otlichayutsa");
    }

    char mass3_1[1024]="Hello 12345"; //начало третьего задания
    char mass3_2[1024]=" "; 
    int n1;
    printf("vvedite chislo znakov:");
    scanf(" %d" , &n1);
    strncpy (mass3_2, mass3_1, n1);
    printf ("%s\n",mass3_2);

    char mass4_1 [11]="05163516894"; //начало четвертого задания
    int ch = '6';
    char *ach;
    ach=strrchr (mass4_1,ch);
    printf (" chislo naxoditsa na #%d meste\n", ach-mass4_1+1);

    char str [10]="1965987324"; //начало пятого задания
    char sym [10]="4";
    int l;
    l=strcspn (str,sym);
    printf ("dlina stroki %d\n",l);

   return 0;
}