#include <stdio.h>
#include <string.h>
int main()
{
    int matrix_a[10][10];
    int matrix_b[10][10];
    int m;
    int n;
    scanf("%d %d", &m, &n);
    int mat[10][10];
    int i;
    int j;
    int k;
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
            mat[i][j] = 0;
            for (k = 0; k < n; k++) {
                mat[i][j] += (matrix_a[i][k] * matrix_b[k][j]);
            }
        }
    }
    for (i = 0; i < m; i++) {
        for (j = 0; j < m; j++) {
            if (j == m - 1)
                printf("%d\n", mat[i][j]);
            else
                printf("%d ", mat[i][j]);
        }
    }
    return 0;
}