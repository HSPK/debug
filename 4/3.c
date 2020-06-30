#include <stdio.h>
#include <math.h>

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int n = 10;
    int numbers[100];
    int i;

    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
        for(int j = i - 1; j >= 0; j--){
            if (numbers[j + 1] > numbers[j]) {
                swap(&numbers[j + 1], &numbers[j]);
            }
        }
    }

    for (i = 0; i < 10; i++) {
        printf("%d", numbers[i]);
        if (i != 9) {
            printf(" ");
        }
    }
    return 0;
}
