#include <stdio.h>

int main() {
    int r, c, i, j;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    int matrix[r][c], transpose[c][r];

    printf("Enter matrix elements:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }
    
    printf("\nTranspose of the Matrix:\n");
    for (i = 0; i < c; i++) {
        for (j = 0; j < r; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
}
/*
OUTPUT:
Enter number of rows and columns: 3
3
Enter matrix elements:
1
2
3
4
5
6
7
8
9

Transpose of the Matrix:
1 4 7
2 5 8
3 6 9
*/