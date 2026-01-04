/*
Q.Remove EXTRA SPACES from a sentence

No string functions (strlen, strcpy, etc.)
No extra array / string
No pointers
No recursion
No stack
No sorting
Use loops + logic only
Modify the same string OR print directly

*/
#include <stdio.h>

int main() {
    char str[100];
    printf("Enter your sentence: ");
    fgets(str, 100, stdin);

    int printed = 0;        // have we printed any character yet?
    int last_space = 0;     // was the last printed character a space?

    for (int i = 0; str[i] != '\0'; i++) {

        if (str[i] == '\n') {
            break;
        }

        if (str[i] != ' ') {
            printf("%c", str[i]);
            printed = 1;
            last_space = 0;
        }
        else {
            if (printed && !last_space) {
                printf(" ");
                last_space = 1;
            }
        }
    }

    return 0;
}
