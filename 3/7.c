#include <stdio.h>
int main() 
{
    int matrix[100][100];
    int m;
    int n;
    int i;
    int j;
    int startX;
    int startY;
    int endX;
    int endY;
   
    startX = 0;
    startY = 0;
    scanf("%d %d", &m, &n);
    endX = m;
    endY = n;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
   
    while (startX * 2 < m && startY * 2 < n) {
        endX = m - 1 - startX;
        endY = n - 1 - startY;
        if (startY <= endY) {
            for (j = startY; j <= endY; j++) {
                printf("%d", matrix[startX][j]);
                if (j < endY ||startX != endX) {
                    printf(" ");
                } else {
                    return 0;
                }
            }
        }
        if (startX <= endX) {
            for (j = startX + 1; j <= endX; j++) {
                printf("%d", matrix[j][endY]);
                if (j < endX || startY != endY) {
                    printf(" ");
                } else {
                    return 0;
                }
            }
        }
        if (endX > startX && startY < endY) {
            for (j = endY - 1; j >= startY; j--) {
                printf("%d", matrix[endX][j]);
                if (j > startY || startX + 1 != endX) {
                    printf(" ");
                } else {
                    return 0;
                }
            }
        }
        if (endX - 1 > startX && startY < endY) {
            for (i = endX - 1; i >= startX + 1; i--) {
                printf("%d", matrix[i][startY]);
                if (i > startX + 1 || endY != startY + 1) {
                    printf(" ");
                } else {
                    return 0;
                }

            }
        }
        startX++;
        startY++;
    }
    return 0;
}
