#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    int len = strlen(s);
    int lengthLastWord = 0;

    // Ignore trailing spaces
    int i = len - 1;
    while (i >= 0 && (s[i] == ' ' || s[i] == '\n')) {
        i--;
    }
    while (i >= 0 && s[i] != ' ') {
        lengthLastWord++;
        i--;
    }

    printf("Length of last word: %d\n", lengthLastWord);
    return 0;
}

