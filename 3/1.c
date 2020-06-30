#include <stdio.h>
#include <math.h>

int main()
{
	int matrix[100][100];
	int m;
	int n;
	int i, j;
	int x;
	scanf("%d %d", &m, &n);
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			scanf("%d", &matrix[i][j]);
		}
	}
	

	i = 0;
	int count = 0;
	while (count < m * n) {
		for (x = i; x <= n - 1 - i; x++) {
			printf("%d", matrix[i][x]); 
			if(++count != m * n)
				putchar(' ');
		}
		for (x = i + 1; x <= m -i- 1; x++) {
			printf("%d", matrix[x][n - i - 1]); 
			if(++count != m * n)
				putchar(' ');
		}
		if (m - i - 1 != i) {
			for (x = n - i - 2; x >= i; x--) {
				printf("%d", matrix[m - i - 1][x]); 
				if(++count != m * n)
					putchar(' ');
			}
		}
		if (n - i - 1 != i) {
			for (x = m - i - 2; x >= i + 1; x--) {
				printf("%d", matrix[x][i]); 
				if(++count != m * n)
					putchar(' ');
			}
		}
		i++;
	}

	return 0;
}
