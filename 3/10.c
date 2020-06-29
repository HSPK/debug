#include <stdio.h>

int main() {
    int matrix[100][100];
    int m;
    int n;

    int k = 0;
    int l = 0;
    int num = 0;
    scanf("%d %d", &m, &n);
    int sum = m * n; 
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

      
    while (k < m && l < n) {
        /* Print the first row from the remaining rows */
        for (int i = l; i < n; i++) {
            printf("%d", matrix[k][i]);
            num++;
            if (num != sum) {
                printf(" ");
            }
        }
        k++;
        /* Print the last column from the remaining columns */
        for (int i = k; i < m; i++) {
            printf("%d", matrix[i][n - 1]);
            num++;
            if (num != sum) {
                printf(" ");
            }
        }
        n--;
        /* Print the last row from the remaining rows */
        if (k < m) {
            for (int i = n - 1; i >= l; i--) {
                printf("%d", matrix[m - 1][i]);
                num++;
                if (num != sum) {
                    printf(" ");
                }
                else return 0;
            }
            m--;
        }
        /* Print the first column from the remaining columns */
        if (l < n) {
            for (int i = m - 1; i >= k; i--) {
                printf("%d", matrix[i][l]);
                num++;
                if (num != sum) {
                    printf(" ");
                }
                else return 0;
            }
            l++;    
        }        
    }
    return 0;
}
