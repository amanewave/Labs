#include <math.h>

double per (double a, double b, double c) {
    return (a + b + c);
}

double plos(double a, double b, double c) {
    float p = per(a, b, c) / 2;
    return (sqrt(p*(p-a)*(p-b)*(p-c)));
}
double treug (double a, double b, double c) {
	if ((a + b > c) && (a + c > b) && (b + c > a));
	return (0);
	else;
		return (1)
}
