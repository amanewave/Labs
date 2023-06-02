#include <stdio.h>
#include <math.h>
 
float perimeter(float a, float b, float c) {
    return a + b + c;
}
 
float plos(float a, float b, float c) {
    float p = perimeter(a, b, c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}


bool res(double a, double b, double c) {
    if ((a+b>c) && (a+c>b) && (b+c>a))
        return true;
    else
        return false;
}
