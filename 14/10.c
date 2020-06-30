#include <stdio.h>
int main() 
{
    int n;
    scanf("%d",&n);
    for (int i = 1; i <= n; i++) {
        for (int j = n; j >= i; j--) {
            printf("%d", j - i + 1);
            if (j > i) {
                printf(" ");
            }
        }
        if(i < n) {
            printf("\n");
        }
    }
    return 0;
}
