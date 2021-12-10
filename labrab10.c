#include <stdio.h>
#include <math.h>
// int NOD(int a, int b){  //для первого задания
//     while (a != b){
//         if (a > b){
//             a -= b;
//         } else {
//             b -= a;
//         }
//     }
//     return a;
// }
// int NOK(int a, int b){
//     return abs(a * b)/NOD(a, b);
// }

int massivecr(int number, int *mass, int c){
    while(number) 
    {  
        mass[c++] = number % 10; 
        number /= 10; 
    }  
        for (int i = 0; i < c ; ++i){
        printf("%d \n", mass[i]); 

    }
}

int main(){
    // int x,y; //начало первого задания
    // printf("enter the first number");
    // scanf("%d", &x);
    // printf("enter the second number");
    // scanf("%d", &y);
    // printf("NOD = %d \n", NOD(x,y));
    // printf("NOK = %d", NOK(x,y));

    int n;
    printf("vvedite");
    scanf("%d", &n);
    int count = 0;
    int mass[count]; 
    massivecr(n,mass,count); 
    
    return 0;
}