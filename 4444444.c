#include <stdio.h>
#include <stdlib.h>
#include "functions.c"

int main() {

    double a, b, c;
    printf("Vvedite znachenie dlini storoni a :");
    scanf("%lf", &a);
    
    printf("Vvedite znachenie dlini storoni b :");
    scanf("%lf", &b);
    
    printf("Vvedite znachenie dlini storoni c :");
    scanf("%lf", &c);

    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        printf("Summa storon treugolnika (Perimetr) = :%.2lf\n", per(a, b, c));
        printf("Znachenie Ploshadi treugolnika= :%.2lf\n", plos(a, b, c));
        printf("Functsia sychestvovania treugolnikov= :%.2lf\n", treug(a,b,c))
    } else 
	printf("Znachenia ne udovletvoryayut neravenstvu treugolnikov");

    return 0;
}
