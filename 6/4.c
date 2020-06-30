#include <stdio.h>
#include <string.h>
int main()
{
    char before[4];
    char calculate[3];
    int i;
 
    scanf("%s", before);
    int result = 0;
    for (i = 0; i < 3; i++) {
        if (before[i] == 'r')
            result += 4;
        if (before[i] == 'w')
            result += 2;
        if (before[i] == 'x')
            result += 1;
    }
    
    while (scanf("%s", calculate) != EOF) {
        if (calculate[0] == '+') {
            if (calculate[1] == 'r')
                result |= 4;
            if (calculate[1] == 'w')
                result |= 2;
            if (calculate[1] == 'x')
                result |= 1;
        } else if (calculate[0] == '-') {
            if (calculate[1] == 'r')
                result &= ~4;
            if (calculate[1] == 'w')
                result &= ~2;
            if (calculate[1] == 'x')
                result &= ~1;
        }
    }

    printf("%d", result);
    return 0;
}