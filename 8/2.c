#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d\n", &n);
    char names[n][101];
    char max[101];

    for (int i = 0; i < n; i++) {
        gets(names[i]);
    }

    strcpy(max, names[0]);
    for (int j = 1; j <= n - 1; j++) {
        if (strlen(names[0]) > strlen(names[j])) {
            strcpy(max, names[0]);
            strcpy(names[0], names[j]);
            strcpy(names[0], max);
        }
    }

    printf("%s\n", max);
    return 0;
}