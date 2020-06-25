#include <stdio.h>
#include <string.h>

int main()
{
    int counter = 0;
    char name[4];

    scanf("%s", name);

    for (int j = 0; j < 3; j++) {
        if ((name[j] == 'w')) {
            counter += 2;
        } else if ((name[j] == 'r')) {
            counter += 4;
        } else if ((name[j] == 'x')) {
            counter += 1;
        }
    }

    while (scanf("%s", name) != EOF) {
        if ((name[0] == '+' && name[1] == 'r')) {
            counter |= 4;
        } else if ((name[0] == '+' && name[1] == 'w')) {
            counter |= 2;
        } else if ((name[0] == '+' && name[1] == 'x')) {
            counter |= 1;
        } else if ((name[0] == '-' && name[1] == 'r')) {
            counter &= ~4;
        } else if ((name[0] == '-' && name[1] == 'w')) {
            counter &= ~2;
        } else if ((name[0] == '-' && name[1] == 'x')) {
            counter &= ~1;
        }
    }

    printf("%d", counter);
    return 0;
}