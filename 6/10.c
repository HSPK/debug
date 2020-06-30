#include <stdio.h>
#include <string.h>
int main() 
{
    char pms[3];
    char change_pms[100][4];
    int i;
    i = 0;
    int j;
    int a;
    a = 0;
    int count = 0;
    
    scanf("%s\n", pms);
    while (scanf("%s\n",change_pms[i++]) != EOF) {
        count++;
        if(scanf("%s\n",change_pms[i++]) != EOF) { 
            count++;
        }
    }
    for (i = 0; i < strlen(pms); i++) {
        if (pms[i] == 'r') {
            a += 4;
        } else if (pms[i] == 'w') {
            a += 2;
        } else {
            a += 1;
        } 
    }
    
    for (i = 0; i < count; i++) {
        j = 0;
        if (change_pms[i][j] == '+') {
            if (change_pms[i][j + 1] == 'r') {
                a |= 4;   
            } else if (change_pms[i][j + 1] == 'w') {
                a |= 2;
            } else {
                a |= 1;
            }
        } else {
            if (change_pms[i][j + 1] == 'r' && a >= 4) {
                a -= 4;   
            } else if (change_pms[i][j + 1] == 'w' ) {
                if (a == 2 || a == 6 || a == 7) {
                    a -= 2;
                }
            } else if (change_pms[i][j + 1] == 'x' && a % 2 == 1){
                a -= 1;
            }
        }
    }
    printf("%d", a);
    return 0;
}
