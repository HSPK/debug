#include <stdio.h>
#include <math.h>
int main()
{
    int a;
    int b;
    int c;
    scanf("%d", &b);

    for (a = 2; a <= b; a++) {
        int f = 0;
        for (c = 2; c * c <= a; c++) {
            if (a % c == 0) {
                f = 1;
                break;
            }
        }
        if (f == 0) {
            printf("%d\n", a);
        }
    }
    return 0;
}