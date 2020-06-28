#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int i = 0;
    int part[51] = { 0 };
    part[2] = 1;
    part[3] = 1;
    for(i = 4; i <= n; i++) {
        part[i] = part[i - 2] + part[i - 3];
    }
    printf("%d",part[n]);
    return 0;
}
