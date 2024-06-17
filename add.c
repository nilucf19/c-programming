#include <stdio.h>

int main() {
  
  // matrix addition
  int ans[row1][col1];
  
  for(int i = 0; i < row1; ++i) {
    for(int j = 0; j < col1; ++j) {
      ans[i][j] = mat1[i][j] + mat2[i][j];
    }
  }
  
}
