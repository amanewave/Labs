#include <stdio.h>   
int main()   
{   
  int i, j, n, sum = 0, sum2 = 0;    
  printf("vvedite razmer massiva:");   
  scanf("%d", &n);   
  int a[n][n];   
  for (i = 0; i<n; i++)     
  {   
    for (j = 0; j<n; j++)    
    {   
      printf("a[%d][%d] = ", i, j);   
      scanf("%d", &a[i][j]);   
    }   
  }   
  for (i = 0; i<n; i++)     
  {   
    for (j = 0; j<n; j++)    
    {   
      printf("%d ", a[i][j]);   
    }   
    printf("\n");    
  }   
  for (i = 0; i<n; i++){ 
   sum += a[i][n-1-i]; 
   sum2 += a[i][i]; 
} 
printf("%d\n", sum); 
printf("%d\n", sum2);  
int b[2][2];  
  int r, t;  
  for (r = 0; r<2; r++)   
  { 
    for (t = 0; t<2; t++)  
    { 
      printf("b[%d][%d] = ", r, t); 
      scanf("%d", &b[r][t]); 
    } 
  } 
  for (r = 0; r<2; r++)   
  { 
    for (t = 0; t<2; t++)  
    { 
      printf("%d ", b[r][t]); 
    } 
} 
int c[2][2]; 
c[0][0] = b[0][0] * b[0][0] + b[0][1] * b[1][0]; 
c[0][1] = b[0][0] * b[0][1] + b[0][1] * b[1][1]; 
c[1][0] = b[0][0] * b[1][0]  + b[1][1] * b[1][0]; 
c[1][1] = b[1][0] * b[0][1] + b[1][1] * b[1][1]; 
 for(r = 0; r < 2; r++) { 
printf("\n"); 
  for(t = 0; t < 2; t++) { 
printf("%d ", c[r][t]); 
} 
} 
  return 0;   
}

