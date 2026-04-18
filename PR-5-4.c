#include <stdio.h>

int main() {
    int rows,cols,Row,Col;
    int matrix[10][10];
    int rowSum = 0, colSum = 0;

    printf("Enter number of rows and columns (max 10): ");
    scanf("%d %d", &rows, &cols);

    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Enter the row index to sum (0 to %d): ", rows - 1);
    scanf("%d", &Row);
    printf("Enter the column index to sum (0 to %d): ", cols - 1);
    scanf("%d", &Col);

    for (int j = 0; j < cols; j++) {
        rowSum += matrix[Row][j];
    }

    for (int i = 0; i < rows; i++) {
        colSum += matrix[i][Col];
    }

    printf("\nSum of elements in row %d: %d",Row, rowSum);
    printf("\nSum of elements in column %d: %d\n",Col, colSum);
}
/*
output:
Enter number of rows and columns (max 10): 3
3
Enter elements of the matrix:
1
2
3
4
5
6
7
8
9
Enter the row index to sum (0 to 2): 0
Enter the column index to sum (0 to 2): 0

Sum of elements in row 0: 6
Sum of elements in column 0: 12

*/