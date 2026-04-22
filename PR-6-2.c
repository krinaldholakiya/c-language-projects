#include <stdio.h>

int main() {
    char s[256];
    int f[256] = {0}; 
    int i = 0;

    printf("Enter any string: ");
    scanf("%s", s);

    while (s[i] != '\0') {
        f[s[i]]++; 
        i++;
    }

    printf("frequency of each letter:\n");
    for (i = 0; i < 256; i++) {
        if (f[i] > 0) {
            printf("%c => %d\n", i, f[i]);
        }
    }

    return 0;
}
/*
output:
Enter any string: heer
frequency of each letter:
e => 2
h => 1
r => 1
*/