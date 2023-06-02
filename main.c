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
