#include <stdio.h>
#include <string.h>

int main()
{
    int arr[32] = {0, };
    memset(arr, 0, sizeof(arr));
    char n;
    int i = 1;

    while ((n = getchar()) != '\n') {
        arr[i % 32] += (int)n;
        i++;
    }

    int bits[32];
    int j;

    for (j = 0; j < 32; j++) {
        bits[j] = arr[31 - j] ^ ((unsigned char)arr[j] << 1);
    }
    for (j = 0; j < 32; j++) {
        char d = bits[j] % 85 + 34;
        printf("%c", d);
    }

    return 0;
}