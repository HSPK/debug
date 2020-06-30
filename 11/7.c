#include <stdio.h>
#include <string.h>
int main() {
    char str[500], fs[32];
    int arr[32] = {0};
    int bits[32];
    int i;
    //memset(fs, '\0', sizeof(fs));
    scanf("%s", str);
    for (i = 1; i <= strlen(str); i++) {
        arr[i % 32] += (int)str[i - 1];
    }
    for (i = 0; i < 32; i++) {
        bits[i] = arr[31 - i] ^ (arr[i] << 1);
        fs[i] = (char)(bits[i] % 85 + 34);
    }
    printf("%s", fs);

    return 0;
}
