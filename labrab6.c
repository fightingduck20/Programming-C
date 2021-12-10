#include <stdio.h>
#include <malloc.h>


int main()
{
    float mass[4] = {-3.4, 4.5, -5.6 , 6.7};
    float *mass_1 = mass;
    for(int i=0; i<4 ; i++){
        printf("%f ", *mass_1++);
    }
    printf("\n");

    float *mass_2 = (float *) malloc(4*sizeof(float));
    mass_2[0] = -3.4;
    mass_2[1] = 4.5;
    mass_2[2] = -5.6;
    mass_2[3] = 6.7;
    for(int i=0; i<4; i++) {
        printf("%f ", mass_2[i]);
    }
    free(mass_2);
return 0;
}
