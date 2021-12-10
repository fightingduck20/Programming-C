#include <iostream>
#include <math.h>
using namespace std;
int main()
{
int y1, y2, y3, y4, x = 0;
cout << "vvedite znachenine x bolshe 3 -";
cin >> x;
if (x <= 3){
	cout << "bolshe 3!!!";
}
else{
	y1 = (pow(x,2) + 2*x - 3 + (x+1) * sqrt(pow(x,2) - 9));
	y2 = (pow(x,2) - 2*x - 3 + (x-1) * sqrt(pow(x,2) - 9));
	y3 = y1/y2;
	cout << y3 << endl;
	y4 = sqrt((x+3)/(x-3));
	cout << y4;
}
return 0;
}

