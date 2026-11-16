#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char kata[100];
    int n, palindrom = 1;

    scanf("%s", kata);
    n = strlen(kata);

    for (int i = 0; i < n; i++)
        kata[i] = tolower(kata[i]);

    for (int i = 0; i < n / 2; i++)
        if (kata[i] != kata[n - 1 - i]) palindrom = 0;

    if (palindrom == 1) printf("Kata '%s' adalah palindrom\n", kata);
    else printf("Kata '%s' bukan palindrom\n", kata);
    return 0;
}