#include <stdio.h>

int main(void) {
    int k, c;
    scanf("%d", &k);
    if (k < 0 || k > 25) {
        printf("Blad: k spoza zakresu 0..25\n");
        return 0;
    }
    getchar();
    printf("SZYFR: ");
    while ((c = getchar()) != '\n' && c != EOF) {
        if (c >= 'A' && c <= 'Z') c = 'A' + (c - 'A' + k) % 26;
        else if (c >= 'a' && c <= 'z') c = 'a' + (c - 'a' + k) % 26;
        putchar(c);
    }
    printf("\nKLUCZ: %d\n", k);
}