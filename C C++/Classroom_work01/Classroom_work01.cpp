// Classroom_work01.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <cmath>


int main() {
	//1
	{
		float x, y;
		int cn;
		printf("Enter x and y: ");
		cn = scanf("%f%f", &x, &y);
		if (cn != 2) {
			printf("Error");
			return -1;
		}
		else {
			if (x < 0 && x > -1 && y < 1 && y > -1) printf("M is in ircle");
			else printf("M is not in circle");
		}
	}
	//2
	{
		srand(time(NULL));
		int d[2][2];
		for (int i = 0; i < 2; ++i)
			for (int j = 0; j < 2; ++j)
				d[i][j] = rand() % 7;
		for (int i = 0; i < 2; ++i)
			if (d[0][i] == d[1][0] || d[0][i] == d[1][1] && d[0][0] != d[0][1] && d[1][0] != d[1][1]) printf("Dominoes can be put in line");
	}
	//3
	{
		float x1, x2, x3, y1, y2, y3, x, y;
		printf("\nEnter three points(x, y) of triangle: ");
		scanf("%f%f%f%f%f%f", &x1, &y1, &x2, &y2, &x3, &y3);
		printf("Enter point(x, y) of M: ");
		scanf("%f%f", &x, &y);
		float a = (x1 - x) * (y2 - y1) - (x2 - x1) * (y1 - y);
		float b = (x2 - x) * (y3 - y2) - (x3 - x2) * (y2 - y);
		float c = (x3 - x) * (y1 - y3) - (x1 - x3) * (y3 - y);
		if ((a >= 0 && b >= 0 && c >= 0) || (a <= 0 && b <= 0 && c <= 0)) printf("M is in triangle");
		else printf("M is not in triangle");
	}
	getchar();
	getchar();
    return 0;
}