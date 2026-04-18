#include <stdio.h>

int main() {
    int rows, cols, i, j, max;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int arr[rows][cols];

    printf("Enter elements of the array:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    max = arr[0][0];

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }

    printf("The largest number in the array is: %d\n", max);
}
/*
OUTPUT:
Enter number of rows and columns: 2
3
Enter elements of the array:
1
2
3
4
5
6
The largest number in the array is: 6
*/
