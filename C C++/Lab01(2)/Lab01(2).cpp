// Lab01(2).cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

#define PUT_DELIM(x, h, b) (x) + (h) >= (b) ? '\n' : ' '
#define FUNC1(x) 1 - fabs((x) + 1)
#define FUNC2(x) (cos(3*(x)-1))/((x)+1)
#define FUNC3(x) 2 * (x) - 3
#define COND1(x) (x) <= (-2)
#define COND2(x) (x) <= 4
#define FUNC(x) COND1(x) ? FUNC1(x) : (COND2(x) ? FUNC2(x) : FUNC3(x))
#define TABULATE(msg, c, h, a, b)\
	printf(msg);\
	for (double x = a; x <=b; x+=h) {\
		if (c == 'X')\
		 printf("%6.2f%c", x, PUT_DELIM(x, h, b));\
		 else\
		 printf("%6.2f%c", FUNC(x), PUT_DELIM(x, h, b));\
	}

int main() {
	TABULATE("x:\t", 'X', 0.1, 3.0, 4.0);
	TABULATE("y:\t", 'Y', 0.1, 3.0, 4.0);
	getchar();
    return 0;
}