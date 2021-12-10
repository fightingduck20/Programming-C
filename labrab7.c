#include <stdio.h>
#include <math.h>

enum myPrint{ //для первого задания
    BOOK,
    MAGAZINE,
    NEWSPAPER,
};

struct myFigure{ // для второго задания
    int absciss;
    int ordinat;
    float radius;
    double square;
};

struct caps {
    unsigned int ON: 1;
    unsigned int OFF: 1;
};

union myCaps {
    unsigned u;
    struct caps CapsLock;
};

int main(){
    enum myPrint a, b, c; // начало первого задания
    a = BOOK;
    b = MAGAZINE;
    c = NEWSPAPER;
    printf("%d" , c);

    struct myFigure okr; // начало второго задания
    okr.absciss = 1;
    okr.ordinat = 1;
    okr.radius = 3;
    printf("mid of circle(%d;%d)" , okr.absciss, okr.ordinat );
    okr.square = 3.14 * pow(okr.radius,2);
    printf("square of circle = %f" , okr.square);

    union myCaps Capsl;
    printf("Insert: ");
    scanf("%x", &Capsl.u);
    printf("Capslock on: %d\n", Capsl.CapsLock.ON);
    printf("Capslock off: %d\n", Capsl.CapsLock.OFF);
    return 0;
}