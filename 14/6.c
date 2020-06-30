#include <stdio.h>
int main() 
{
    int num;
    scanf("%d", &num);
    for (int i = 0; i < num; i++) {
        for (int j = num; j > i; j--) {
            printf("%d", j - i);
            if ( j != i + 1) {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
