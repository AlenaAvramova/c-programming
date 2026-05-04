//Multiplicate two matrices - A(2 x 3) & B(3 x 4)
#include <stdio.h>

int main()
{
  int a [2][3] = {{ 2, 6, 8},{4, 7, 3}};
  int b [3][4] = {{1, 6, 5, 4},{3, 2, 8, 1},{6, 9, 3, 2}};

  int C [2][4];
  int i, j, k;

  for(i = 0; i < 2 ; i++){
    for(j = 0; j < 4; j++){
        C [i][j] = 0;
        for(k = 0; k< 3; k++){
         C [i][j] += a [i][k] * b[k][j];
        }
    }
  }
  for (i = 0; i < 2; i++){
    for(j = 0; j < 4; j++){
        printf("%d\t", C[i][j]);
    }
    printf("\n");
  }
   return 0;
}
