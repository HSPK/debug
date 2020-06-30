#include <stdio.h>

int main()
{
    int arr[33] = {0, };
    int bits[33];
    char input;
    char output[33];
    int i, j;
    int counter = 0;

    while ((input = getchar()) != EOF) {
        counter++;
        arr[counter % 32] += input;
    }

    for (j = 0; j < 32; j++) {
        bits[j] = arr[31 - j] ^ (arr[j] << 1);
    }

    for (int j = 0; j < 32; j++) {
        output[j + 1] = (bits[j] % 85 + 34);
        printf("%c", output[j + 1]);
    }

    return 0;
}