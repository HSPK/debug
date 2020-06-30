#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = n; i > 0; i--) {
        for (int j = i; j > 1; j--) {
            printf("%d ", j);
        }
        printf("1\n");
    }

    return 0;
}