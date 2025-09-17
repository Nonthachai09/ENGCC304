#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char word[100];
    printf("Enter word:\n");
    scanf("%s", word);

    int len = strlen(word);
    int pass = 1;

    for (int i = 0; i < len / 2; i++) {
        if (tolower(word[i]) != tolower(word[len - i - 1])) {
            pass = 0;
            break;
        }
    }

    if (pass)
        printf("Pass.\n");
    else
        printf("Not Pass.\n");

    return 0;
}
