// Lab01(3).cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

#define FUNC(x, y) pow(M_E, (x) - 2 * (y)) + pow(M_E, (x)/(y))

int main() {
	double hx = 0.1, hy = 0.2, a = 1, b = 3, c = 1, d = 5;
	printf("x:\t");
	for (double x = a; x <= b; x+=hx) printf("%6.2f%c", x, '\t');
	printf("\ny:\t");
	for (double y = c; y <= d; y += hy) printf("%6.2f%c", y,'\t');
	printf("\nFunc:\t");
	for (double x = a, y = c; x <= b, y <= d; x += hx, y += hy) printf("%6.2f%c", FUNC(x, y), '\t');
	getchar();
    return 0;
}

