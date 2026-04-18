#include <stdio.h>
int main() {
    int n, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
	 {
        scanf("%d", &arr[i]);
    }
    printf("\nNegative numbers in the array :\n");
    int f = 0;
    for (i = 0; i < n; i++) {
        if (arr[i] < 0) 
		{
            printf("%d ", arr[i]);
            f=1;
        }
    }
    if (!f) {
        printf("None");
    }
    printf("\n");
}
/*
output:
Enter the number of elements: 5
Enter 5 elements:
1
2
-7
-8
5

Negative numbers in the array :
-7 -8
*/

