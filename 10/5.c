#include <stdio.h>
int main()
{
    int i, j, n;
    scanf("%d", &n);
    for (i = 2; i <= n; i++) {
        int c = 0;
        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                c = 1;
                break;
            }
        }
        if (c == 0) {
            printf("%d\n", i);
        }
    }
    return 0;
}