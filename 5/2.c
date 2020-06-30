#include <stdio.h>
#include <string.h>

void swap(char *a, char *b)
{
    char temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int i, j;
    int k;
    int l;
    char name[10][21];

    for (i = 0; i < 10; i++) {
        scanf("%s1", name[i]);
    }

    for (j = 0; j < 10; j++) {
        for (k = 0; k < 9 - j; k++) {
            if (strcmp(name[k], name[k + 1]) >= 0) {
                for (l = 0; l < 20; l++) {
                    swap(&name[k][l], &name[k + 1][l]);
                }
            }
        }
    }

    for (int m = 0; m < 10; m++) {
        printf("%s\n", name[m]);
    }

    return 0;
}