#include <stdio.h>

int main() {
  printf("Enter rows and cols of mat1: ");
  int row1, col1;
  scanf("%d%d", &row, &col);
  int mat1[row1][col1];

  printf("Enter the elements of mat1: \n");
  for(int i = 0; i < row1; ++i) {
    for(int j = 0; j < col1; ++j) {
      scanf("%d", &mat[i][j]);
    }
  }

  int row2, col2;
  scanf("%d%d", &row2, &col2);
  int mat2[row2][col2];
  printf("Enter the elements of mat2: \n");
  for(int i = 0; i < row2; ++i) {
    for(int j = 0; j < col2; ++j) {
      scanf("%d", &mat[i][j]);
    }
  }

  // ...
  
  for(int i = 0; i < row; ++i) {
    for(int j = 0; j < col; ++j) {
      printf("%d ", mat[i][j]);
    }
    printf("\n");
  }
}
