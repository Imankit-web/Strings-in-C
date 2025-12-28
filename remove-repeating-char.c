/*
Q.Remove ALL repeating characters from a string

No string functions
No extra array / string
No hash tables
No pointers
No recursion
No sorting
Use loops + logic only
Case-sensitive

*/


#include <stdio.h>

int main(){

    char str[100];

    printf("Enter a string:");
    fgets(str,100,stdin);

    for (int i = 0; str[i] != '\0'; i++) {

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
        printf("%c", str[i]);
    }
}

}