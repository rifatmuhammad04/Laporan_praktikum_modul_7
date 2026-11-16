#include <stdio.h>
#include <string.h>
int main() {
    char s[300], potong[21];

    fgets(s, 300, stdin);
    s[strcspn(s, "\n")] = '\0';

    if (strlen(s) > 20) {
        strncpy(potong, s, 20);
        potong[20] = '\0';
        printf("%s...\n", potong);
    } else {
        printf("%s\n", s);
    }
    return 0;
}