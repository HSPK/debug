#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    int digit;
    int a;

    for (digit = 2; digit <= num; digit++) {
        int c = 0;
        for (a = 2; a * a <= digit; a++) {
            if (digit % a == 0) {
                c = 1;
                break;
            }
        }
        if (c == 0) {
            printf("%d\n", digit);
        }
    }

    return 0;
}