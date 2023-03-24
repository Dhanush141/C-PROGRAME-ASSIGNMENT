#include <stdio.h>

int main() {
    char c;

    printf("Enter a character: ");
    scanf("%c", &c);

    // Check if the character is an alphabet or not using the conditional operator
    (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ? printf("%c is an alphabet.\n", c) : printf("%c is not an alphabet.\n", c);

    return 0;
}
output
Enter a character: a
a is an alphabet.