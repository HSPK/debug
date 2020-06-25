#include <stdio.h>
int main()
{
    int year;
    int month;
    int day;

    scanf("%d-%d-%d", &year, &month, &day);

    if (month <= 12 && month >= 1) {
        if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
            if (day <= 31 && day >= 1) {
                printf("YES");
            } else {
                printf("NO");
            }
        } else if (month == 4 || month == 6 || month == 9 || month == 11) {
            if (day <= 30 & day >= 1) {
                printf("YES");
            } else {
                printf("NO");
            }
        } else if (month == 2) {
            if (year % 4 == 0) {
                if ((year % 100 == 0 && year % 400 == 0) || year % 100 != 0) {
                    if (day <= 29 && day >= 1) {
                        printf("YES");
                    } else {
                        printf("NO");
                    }
                } else if(day <= 28 && day >= 1) {
                    printf("YES");
                } else {
                    printf("NO");
                }
                
            } else {
                if (day <= 28 && day >= 1) {
                    printf("YES");
                } else {
                    printf("NO");
                }
            }
        }
    } else {
        printf("NO");
    }
    return 0;
}
