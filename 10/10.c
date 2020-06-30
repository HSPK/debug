#include <stdio.h>
int main()
{
    int N;
    int i, j;
    scanf("%d", &N);
    if (N < 2) {
        return 0;
    }
    printf("2\n");
    for (i = 3; i <= N; i++) {   
        for (j = 2; j < i; j++) {
           if (i % j == 0) {
               break;
           }
        } 
        if (i == j) {
            printf("%d\n", i);
        }
    }      
    return 0;
}
