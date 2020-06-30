#include <stdio.h>

int main()
{
    int matrix[100][100];
    int m;
    int n;
    scanf("%d %d", &m, &n);

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int i = 0;
    int m0 = m;
    int n0 = n;

    while (i < m * n) {
        for (int j = n - n0; j < n0; j++) {
            printf("%d", matrix[m - m0][j]);
            if(++i < m * n)
                putchar(' ');
        }
        for (int j = m - m0 + 1; j < m0 - 1; j++) {
            printf("%d", matrix[j][n0 - 1]);
            if(++i < m * n)
                putchar(' ');
        }
        if (m - m0 != m0 - 1) {
            for (int j = n0 - 1; j >= n - n0; j--) {
                printf("%d", matrix[m0 - 1][j]);
                if(++i < m * n)
                    putchar(' ');
            }
        }
        if (n - n0 != n0 - 1) {
            for (int j = m0 - 2; j > m - m0; j--) {
                printf("%d", matrix[j][n - n0]);
                if(++i < m * n)
                    putchar(' ');
            }
        }
        n0--;
        m0--;
    }
    return 0;
}