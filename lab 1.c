#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
 {
	float a,b,c,d,x1,x2;
	a=7;b=7;c=7;
	scanf("%f %f %f",&a,&b,&c);
	d = b*b + 4*a*c;
	printf("D=%f\n",d);
	
	
	if (d<0) printf("net kornei");
	if (d==0) {
		x1 = (-b-sqrt(d)) / (2*a);
		printf("x1=%f\n",x1);
		
	}
	if (d>0) {
		x1 = (-b-sqrt(d)) / (2*a);
		x2 = (-b+sqrt(d)) / (2*a);
		printf("x1=%f x2=%f\n",x1,x2);
	}
	return 0;
}
