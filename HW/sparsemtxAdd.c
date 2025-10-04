#include <stdio.h>

int main() {
  int c, r;
  int countz1 = 0, countz2 = 0;
  printf("Enter no of rows and coloumns of first mtx :");
  scanf("%d %d", &r, &c);
  int mArr1[r][c], mArr2[r][c];

  printf("Enter 1st matrix :\n");
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      scanf("%d", &mArr1[i][j]);
      if (mArr1[i][j] == 0)
        countz1++;
    }
  }
  printf("Enter 2nd matrix :\n");
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      scanf("%d", &mArr2[i][j]);
      if (mArr2[i][j] == 0)
        countz2++;
    }
  }

  int count1 = (r * c) - countz1;
  int count2 = (r * c) - countz2;
  int cArr1[3][count1], cArr2[3][count2];

  // sparse banao
  int k = 0;
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      if (mArr1[i][j] != 0) {
        cArr1[0][k] = i;
        cArr1[1][k] = j;
        cArr1[2][k] = mArr1[i][j];
        k++;
      }
    }
  }
  k = 0;
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      if (mArr2[i][j] != 0) {
        cArr2[0][k] = i;
        cArr2[1][k] = j;
        cArr2[2][k] = mArr2[i][j];
        k++;
      }
    }
  }

  // add sparse
  int i = 0, j = 0, x = count1 + count2, m = 0;
  k = 0;
  int addArr[3][x];
  while (i < count1 && j < count2) {
    if (cArr1[0][i] == cArr2[0][j]) {
      if (cArr1[1][i] == cArr2[1][j]) {
        addArr[0][k] = cArr1[0][i];
        addArr[1][k] = cArr1[1][i];
        addArr[2][k] = cArr1[2][i] + cArr2[2][j];
        k++, i++, j++, m++;
      } else if (cArr1[1][i] < cArr2[1][j]) {
        addArr[0][k] = cArr1[0][i];
        addArr[1][k] = cArr1[1][i];
        addArr[2][k] = cArr1[2][i];
        k++, i++, m++;
      } else {
        addArr[0][k] = cArr2[0][j];
        addArr[1][k] = cArr2[1][j];
        addArr[2][k] = cArr2[2][j];
        k++, j++, m++;
      }
    } else if (cArr1[0][i] < cArr2[0][j]) {
      addArr[0][k] = cArr1[0][i];
      addArr[1][k] = cArr1[1][i];
      addArr[2][k] = cArr1[2][i];
      k++, i++, m++;
    } else {
      addArr[0][k] = cArr2[0][j];
      addArr[1][k] = cArr2[1][j];
      addArr[2][k] = cArr2[2][j];
      k++, j++, m++;
    }
  }
  while (i < count1) {
    addArr[0][k] = cArr1[0][i];
    addArr[1][k] = cArr1[1][i];
    addArr[2][k] = cArr1[2][i];
    k++, i++, m++;
  }
  while (j < count2) {
    addArr[0][k] = cArr2[0][j];
    addArr[1][k] = cArr2[1][j];
    addArr[2][k] = cArr2[2][j];
    k++, j++, m++;
  }
  printf("\n");

  printf("Added Sparse Matrix is :\n");
  for (i = 0; i < 3; i++) {
    for (j = 0; j < m; j++) {
      printf("%d ", addArr[i][j]);
    }
    printf("\n");
  }

  // transpose
  int transarr[m][3];
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < 3; j++) {
      transarr[i][j] = addArr[j][i];
    }
  }
  printf("\nTranspose arr is :\n");
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < 3; j++)
      printf("%d ", transarr[i][j]);
    printf("\n");
  }

  return 0;
}
