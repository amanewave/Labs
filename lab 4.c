// FUNCS
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

// MAIN
#include <stdio.h>
#include <stdbool.h>
#include "funcs.h"
 
int main() {
    float a, b, c;
    printf("vvedite storoni treugolnika: ");
    scanf("%f %f %f", &a, &b, &c);

    
    float p = perimeter(a, b, c);
    float s = plos(a, b, c);
    
    
    if (res(a, b, c) == true)   {
        printf("perimetr: %.2f\n", p);
        printf("ploshad: %.2f\n", s);
        ;
      } else if (res(a, b, c) == false)
        printf("treugolnika ne syshestvuet\n");

 
//    float p = perimeter(a, b, c);
// float s = plos(a, b, c);
 //   printf("perimetr: %.2f\n", p);
 //   printf("ploshad: %.2f\n", s);
 
    return 0;
}
