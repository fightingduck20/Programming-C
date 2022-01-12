#include <iostream>
using namespace std;
int main()
{
	int mass[6] = {34,45,56,67,78,89};
	for (int i = 0 ; i < 6 ; i++){
		printf("%d ", mass[i]);
	}
	printf("\n");

	int mass1 [2][2] = {{2,1} , {1,3}};
	int mass2 [2][2] = {{1,2} , {3,1}};
	int mass3 [2][2];
	for(int i=0; i<2; i++) {
        for(int j=0; j<2; j++) {
            mass3[i][j] = 0;
            for(int k=0; k<2; k++) {
                mass3[i][j] += mass1[i][k] * mass2[k][j];
            }
        }
    }
	for(int i=0; i<2; i++) {
	    printf("%d %d \n", mass3[i][0], mass3[i][1]);
	}
	return 0;
}

