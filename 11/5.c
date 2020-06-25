
#include <stdio.h>
#include <string.h>

int main()
{
    char arr[32] = {0, };
    int bits[32];
    char result[32];
    char input;

    int i = 1;
    while ((input = getchar()) != '\n')
    {
        arr[i % 32] = arr[i % 32] + input;
        i++;
    }

    for (int i = 0; i < 32; i++)
    {
        bits[i] = (arr[31 - i]) ^ (arr[i] << 1);
        int b = (bits[i] % 85) + 34;
        result[i] = (char)b;
    }

    for (int i = 0; i < 32; i++)
    {
        printf("%c", result[i]);
    }
    return 0;
}