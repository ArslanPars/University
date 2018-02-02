// Lab01.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"


int main() {
	for (double x = -0.9; x < 1.; x+=0.0001) {
		printf("%f\n", sqrt(x + 1.));
	}
	double a0 = 1.0, x = 0.001, s = 0.0;
	for (int i = 0; i <= 25; ++i) {
		s += a0;
		a0 *= (double)((x * x * (1. - 2. * i)) / (2. * (i + 1.)));
	}
	printf("%f", s);
	getchar();
    return 0;
}