#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d\n", &n);
    char name[n][101];
    char temp[101];

    for (int i = 0; i < n; i++)
    {
        gets(name[i]);
    }

    strcpy(temp, name[0]);
    for (int j = 1; j <= n - 1; j++) {
        if (strlen(name[0]) > strlen(name[j])) {
            strcpy(temp, name[0]);
            strcpy(name[0], name[j]);
            strcpy(name[0], temp);
        }
    }

    printf("%s\n", name[0]);
    return 0;
}