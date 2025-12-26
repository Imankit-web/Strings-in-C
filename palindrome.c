/*
RULES (important)
No strrev()
No extra string
No string library functions
No recursion
No pointers
Case-insensitive comparison
Must handle full string safely
*/

#include <stdio.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, 100, stdin);

    int size = 0;

    // counting every character till end and while ignoring \n.

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != '\n') {
            size++;
        }
    }

    int palindrome = 1; // initial assuming palindrome

    for (int i = 0, j = size - 1; i < j; i++, j--) {

        char left = str[i];
        char right = str[j];

        // convert to lowercase if uppercase

        if (left >= 'A' && left <= 'Z') {
            left = left + 32;
        }
        if (right >= 'A' && right <= 'Z') {
            right = right + 32;
        }

        if (left != right) {
            palindrome = 0;
            break;
        }
    }
    // printing while checking palindrome or not.
    if (palindrome) {
        printf("Palindrome\n");
    } else {
        printf("Not Palindrome\n");
    }

    return 0;
}
