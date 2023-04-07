#include <stdio.h> 
#include <stdlib.h> 
#include "fun.h" 
 
int main() { 

 
    double a, b, c; 
    printf("vvedite storonu a :"); 
    scanf("%lf", &a); 
    printf("vvedite storonu b :"); 
    scanf("%lf", &b); 
    printf("vvedite storonu c :"); 
    scanf("%lf", &c); 
 
    if (res(a, b, c) == true)   
	{ 
  		printf("Perimetr treugolnika raven :%.2lf\n", summ(a, b, c)); 
    	printf("Ploshad' treugolnika ravna :%.2lf\n", mult(a, b, c)); 
  	} 
  	
  	else if (res(a, b, c) == false) 
    printf("Treugolnik s zadannimi storonami ne shuschestvuet"); 
 
    return 0; 
}

