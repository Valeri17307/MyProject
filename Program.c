#include <stdio.h>
int main()
{
	int xa, ya, xb, yb, A, B;
	printf("Xa: ");
	scanf("%d", &xa);
        printf("Ya: ");
	scanf("%d", &ya);
        printf("Xb: ");
	scanf("%d", &xb);
        printf("Yb: ");
	scanf("%d", &yb);
	A = xa + ya;
        B = xb + yb;
        printf("A = xa + ya = %d\n", A);
        printf("B = xb + yb = %d\n", B);
	return 0;
}