#include <stdio.h>
#include <string.h>

int main()
{
    int arr[33] = {0,};
    char c;
    char input[501];
    int bits[33];
    char result[33];
    int i = 1, j = 0;

    while ((c = getchar()) != EOF) {
        input[i - 1] = c;
        arr[i % 32] = arr[i % 32] + input[i - 1];
        i++;
    }

    for (j = 0; j <= 31; j++) {
        bits[j] = arr[31 - j] ^ (arr[j] << 1);
    }

    for (j = 0; j <= 31; j++) {
        result[j] = (bits[j] % 85) + 34;
    }

    for (j = 0; j <= 31; j++) {
        putchar(result[j]);
    }

    return 0;
}