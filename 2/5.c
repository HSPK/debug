#include <stdio.h>

int main()
{
    int matrix_a[10][10];
    int matrix_b[10][10];
    int m;
    int n;
    int i, j, k;
    int temp;

    scanf("%d%d", &m, &n);
    int matrixResult[10][10];

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix_a[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &matrix_b[i][j]);
        }
    }

    for (i = 0; i < m; i++) {
        for (j = 0; j < m; j++) {
            temp = 0;
            for (k = 0; k < n; k++) {
                temp += matrix_a[i][k] * matrix_b[k][j];
            }
            matrixResult[i][j] = temp;
            if (j == m - 1) {
                printf("%d\n", matrixResult[i][j]);
            } else {
                printf("%d ", matrixResult[i][j]);
            }
        }
    }

    return 0;
}