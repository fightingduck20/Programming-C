#include <stdio.h>
using namespace std;
int main()
{
	int n;
	printf("vvedite chislo - ");
	scanf("%d" , &n);
	printf("popadaet v interval [21; 45] %s " , 21<=n && n<=45 ? "yes":"no");
	int x;
	scanf("%d", &x);
	int b = 0;
	b = x & (1 << 15);
	printf("%d" , b);
	printf(x ?"yes":"no");
	return 0;
}

