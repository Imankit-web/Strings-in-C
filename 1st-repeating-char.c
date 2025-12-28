/*
Q.Find the FIRST REPEATING CHARACTER in a string

No string functions
No extra array
No hash table
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


    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='\n'){
            continue;
        }
        for(int j=i+1; str[j]!='\0';j++){
            if(str[i]>='A' && str[i]<='X'){
                str[i]= str[i]+32;
            }
            if(str[j]>='A' && str[j]<='X'){
                str[j]= str[j]+32;
            }

            if(str[i]==str[j]){
                printf("First character is %c.", str[i]);
                return 0;
            }

        }
    }
    printf("No repeating character found.\n");
    return 0;
}


