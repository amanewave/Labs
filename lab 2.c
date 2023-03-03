#include <stdio.h>

int main()
{
	int s1,s2,res;
  int a[3][3]; 
  int i, j; 
  for (i = 0; i<3; i++)  
  {
    for (j = 0; j<3; j++) 
    {
      printf("a[%d][%d] = ", i, j);
      scanf("%d", &a[i][j]);
    }
  }
  for (i = 0; i<3; i++)  
  {
    for (j = 0; j<3; j++) 
    {
      printf("%d ", a[i][j]);
    }
    printf("\n"); 
  }
s1 = a[0][0] + a[1][1] + a[2][2];
s2 = a[0][2] + a[1][1] + a[2][0];
printf("%d %d\n", s1, s2);
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
    printf("\n"); 
  }
  res = b[r][t] * b[r][t];
  printf("%d", res);
  return 0;
}
