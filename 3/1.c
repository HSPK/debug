#include <stdio.h>
#include<math.h>


int main() {
    int matrix[100][100];
    int m;
    int n;
    int i,j;
    int x;
    scanf("%d %d",&m,&n);
    for(i=0;i<m;i++){
    	for(j=0;j<n;j++){
            printf("%d %d\n", i, j);
    		scanf("%d", &matrix[i][j]);
            printf("%d %d\n", i, j);
		}
	}
    return 0;
	x=0;
	while(m-x>1||n-x>1){
		for(x=0;x<n-1;x++){
			printf("%d ",matrix[x][n-2-x]);
		}
		for(x=0;x<m-1;x++){
			printf("%d ",matrix[x][n-1-x]);  
		}
		for(x=0;x<n-1;x++){
			printf("%d ",matrix[m-1-x][n-1-x]);
		}
		for(x=0;x<m-1;x++){
			printf("%d ",matrix[m-1-x][x]);
		}
		x++;
	}	

    return 0;
}
