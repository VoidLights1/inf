#include <stdio.h>

int toDigit(int A[], int a) {
  int i, n;

  for (i = 0, n = a; n != 0; i++, n = n / 10);

  int k = i--;

  for (n = a; n != 0; i--, n = n / 10)
    A[i] = n % 10;

  return k;
}

int main() {
  int vv;
  int A1[10], B1[10];
  int M[10];

  for (vv = 10000; vv <= 49999; vv++) {
    toDigit(A1, vv);

    for (int j = 0; j < 10; j++)
      M[j] = 0;

    int retr = 0;

    for (int j = 0; j < 5; j++) {
      int k = A1[j];

      if (M[k] != 0) {
        retr = 1;
        break;
      } else
        M[k] = 1;
    }

    if (retr)
      continue;

    toDigit(B1, 2 * vv);

    if (B1[0] != A1[2]) // Буква Т: в НИТКА это A1[2], в ТКАНЬ это B1[0]
      continue;

    if (B1[1] != A1[3]) // Буква К: в НИТКА это A1[3], в ТКАНЬ это B1[1]
      continue;

    if (B1[2] != A1[4]) // Буква А: в НИТКА это A1[4], в ТКАНЬ это B1[2]
      continue;

    if (B1[3] != A1[0])// Буква Н: в НИТКА это A1[0], в ТКАНЬ это B1[3]
      continue;

    if (M[B1[4]])
      continue;

    printf("%d+%d=%d\n", vv, vv, 2 * vv);
  }

  getchar();
  return 0;
}