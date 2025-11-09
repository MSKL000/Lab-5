#include <stdio.h>

int main(void) {
    int duze = 0, male = 0, cyfry = 0, inne = 0;
    int c;

    while ((c = getchar()) != '\n' && c != EOF) {
        if (c >= 'A' && c <= 'Z')
            duze++;
        else if (c >= 'a' && c <= 'z')
            male++;
        else if (c >= '0' && c <= '9')
            cyfry++;
        else
            inne++;
    }

    printf("DUZE=%d MALE=%d CYFRY=%d INNE=%d\n", duze, male, cyfry, inne);
    return 0;
}