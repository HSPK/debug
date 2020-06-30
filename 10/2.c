#include <stdio.h>

int main()
{
    int n, i, j;
    scanf("%d", &n);

    for (i = 2; i <= n; i = i + 1) {
        int c = 0;
        for (j = 2; j * j <= i; j = j + 1) {
            if (i % j == 0) {
                c = 1;
                break;
            }
        }
        if (c == 0){
            printf("%d\n", i);
        }
    }

    return 0;
}
