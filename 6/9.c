#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) 
{
    int i = 0;
    int chmod = 0;
    int chmod_r = 0;
    int chmod_w = 0;
    int chmod_x = 0;   
    char temp[3];
    char permission[100][3];
    
    while (scanf("%s", temp) != EOF) {
        strcpy(permission[i], temp);
        i++;
    }
    
    for (i = 0; i < 3; i++) {
        if (permission[0][i] == 'r') {
            chmod_r++;
        }    
        if (permission[0][i] == 'w') {
            chmod_w++;
        }
        if (permission[0][i] == 'x') {
            chmod_x++;
        }
        if (permission[0][i] == '\n') {
            break;   
        }
    }
    
    for (i = 1; i < 10; i++) {
        if (permission[i][0] == '+') {
           if (permission[i][1] == 'r') {
               chmod_r++;
           }    
           if (permission[i][1] == 'w') {
               chmod_w++;
           }
           if (permission[i][1] == 'x') {
               chmod_x++;
           }
        }
        if (permission[i][0] == '-') {
           if (permission[i][1] == 'r') {
               chmod_r = 0;
           }    
        if (permission[i][1] == 'w') {
               chmod_w = 0;
           }
        if (permission[i][1] == 'x') {
               chmod_x = 0;
           }
       }
    }
    
    if (chmod_r > 0) {
        chmod += 100;
    }
    if (chmod_w > 0) {
        chmod += 10;
    }
    if (chmod_x > 0) {
        chmod += 1;
    }
        
    if (chmod == 111) {
        printf("7");
    } else if (chmod == 110) {
        printf("6");
    } else if (chmod == 101) {
        printf("5");
    } else if (chmod == 100) {
        printf("4");
    } else if (chmod == 10) {
        printf("2");
    } else if (chmod == 11) {
        printf("3");
    } else if (chmod == 1) {
        printf("1");
    } else if (chmod == 0) {
        printf("0");
    }

    return 0;
}
