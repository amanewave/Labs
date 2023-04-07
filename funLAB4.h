#include <math.h> 
#include <stdbool.h> 
 
double summ(double a, double b, double c) { 
    return (a + b + c); 
} 
 bool res(double a, double b, double c) { 
 if ((a+b>c) && (a+c>b) && (b+c>a)) 
  return true; 
 else 
  return false; 
  
}
 
double mult(double a, double b, double c) { 
    double p = summ(a, b, c) / 2; 
    return (sqrt(p*(p-a)*(p-b)*(p-c))); 
} 


