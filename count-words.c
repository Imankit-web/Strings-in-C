/*
Q.Count the number of WORDS in a sentence

No string functions (strlen, strtok, etc.)
No extra array / string
No pointers
No recursion
No stack
No sorting
Use loops + logic only
Input may contain multiple spaces
*/

#include <stdio.h>

int main() {
    char str[100];
    int count = 0;

    printf("Enter a sentence: ");
    fgets(str, 100, stdin);

    for (int i = 0; str[i] != '\0'; i++) {

        if (str[i] == '\n') {
            break;
        }

       
        if (str[i] != ' ' && (i == 0 || str[i - 1] == ' ')) {
            count++;
        }
    }

    printf("Number of words = %d\n", count);
    return 0;
}
