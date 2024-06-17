// Matrix Addition
#include <stdio.h>

int main() {
  printf("Enter rows and cols of mat1: "); 
  int row1, col1;
  scanf("%d%d", &row1, &col1);
  int mat1[row1][col1];
  printf("Enter the elements of mat1: \n");
  for(int i = 0; i < row1; ++i) {
    for(int j = 0; j < col1; ++j) {
      scanf("%d", &mat1[i][j]);
    }
  }

  printf("Enter rows and cols of mat2: ");
  int row2, col2;
  scanf("%d%d", &row2, &col2);
  int mat2[row2][col2];
  printf("Enter the elements of mat2: \n");
  for(int i = 0; i < row2; ++i) {
    for(int j = 0; j < col2; ++j) {
      scanf("%d", &mat2[i][j]);
    }
  }

  int ans[row1][col1];
  for(int i = 0; i < row1; ++i) {
    for(int j = 0; j < row2; ++j) {
      ans[i][j] = mat1[i][j] + mat2[i][j];
    }
  }
  
  for(int i = 0; i < row; ++i) {
    for(int j = 0; j < col; ++j) {
      printf("%d ", ans[i][j]);
    }
    printf("\n");
  }
}
