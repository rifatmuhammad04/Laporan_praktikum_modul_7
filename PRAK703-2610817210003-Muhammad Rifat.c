#include <stdio.h>
#include <ctype.h>
int main() {
    char s[200];
    int vokal = 0, konsonan = 0;

    printf("Kalimat : ");
    fgets(s, 200, stdin);

    for (int i = 0; s[i] != '\0'; i++) {
        char c = tolower(s[i]);
        if (c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o')
            vokal++;
        else if (isalpha(c))
            konsonan++;
    }

    printf("Jumlah Vokal : %d\n", vokal);
    printf("Jumlah Konsonan : %d\n", konsonan);
    return 0;
}