/*
Q.Reverse EACH word in a sentence (word order stays same)

No string functions (strlen, strrev, etc.)
No extra string / array
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

    printf("Enter a sentence: ");
    fgets(str, 100, stdin);

    int start = 0;

    for (int i = 0; ; i++) {

        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\0') {

            int end = i - 1;

            // reverse current word
            while (start < end) {
                char temp = str[start];
                str[start] = str[end];
                str[end] = temp;

                start++;
                end--;
            }

            if (str[i] == '\0' || str[i] == '\n')
                break;

            start = i + 1;
        }
    }

    printf("%s", str);
    return 0;
}
