#include <stdio.h>
#include <string.h>
int main()
{
    int r = 0, w = 0, x = 0;
    char sign[4];
    char temp[3];
    scanf("%s", sign);
    for (int i = 0; i < strlen(sign); i++) {
        if (sign[i] == 'r') {
            r = 1;
        }
        if (sign[i] == 'w') {
            w = 1;
        }
        if (sign[i] == 'x') {
            x = 1;
        }
    }

    while (scanf("%s", temp) != EOF) {
        if (strcmp(temp, "+x") == 0) {
            x = 1;
        }
        if (strcmp(temp, "-x") == 0){
            x = 0;
        }
        if (strcmp(temp, "+r") == 0) {
            r = 1;
        }
        if (strcmp(temp, "-r") == 0) {
            r = 0;
        }
        if (strcmp(temp, "+w") == 0) {
            w = 1;
        }
        if (strcmp(temp, "-w") == 0) {
            w = 0;
        }
    }

    printf("%d\n", r * 4 + w * 2 + x);

    return 0;
}