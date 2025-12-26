/*
No string functions
No pointers
No hash tables / maps
No extra string
No recursion
Use loops and logic only
Case-sensitive comparison
*/

#include <stdio.h>

int main() {
    char str[100];
    printf("Enter your string: ");
    fgets(str, 100, stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        
        //skiping \n 
        if (str[i] == '\n'){
            continue;
        }
        
        int count = 0;

        for (int j = 0; str[j] != '\0'; j++) {
            if (str[i] == str[j]) {
                count++;
            }
        }

        if (count == 1) {
            printf("First non-repeating character: %c\n", str[i]);
            return 0;
        }
    }

    printf("No non-repeating character found\n");
    return 0;
}
