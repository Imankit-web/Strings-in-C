/*
Q.Check whether a string contains ALL UNIQUE characters.

No string functions
No extra array
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

    printf("Enter your string:");
    fgets(str,100,stdin);

    int flag=1;

    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='\n'){
            continue;
        }
        for(int j=i+1; str[j]!='\0';j++){
            if(str[i]==str[j]){
                flag=0;
                break;
            }
        }
        if (flag == 0) break;
    }
    if(flag){
        printf("All characters are unique.");
    }else{
        printf("Characters are not unique.");
    }

    return 0;
}