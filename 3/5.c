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

    int start = 0, column = n, row = m;
    int count = 0;
    while (count < m * n) {
        for (int j = start; j < column; j++) {
            printf("%d", matrix[start][j]);
            if(++count != m * n)
                printf(" ");
        }
        for (int i = start + 1; i < row - 1; i++) {
            printf("%d", matrix[i][column - 1]);
            if(++count != m * n)
                printf(" ");
        }
        if (start != row - 1) {
            for (int j = column - 1; j >= start; j--) {
                printf("%d", matrix[row - 1][j]);
                if(++count != m * n)
                    printf(" ");
            }
        }
        if (start != column - 1) {
            for (int i = row - 2; i > start; i--) {
                printf("%d", matrix[i][start]);
                if(++count != m * n)
                    printf(" ");
            }
        }
        start++;
        column--;
        row--;
    }

    return 0;
}