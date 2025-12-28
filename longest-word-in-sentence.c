/*
No string functions
No pointers
No extra string / array
No tokenizers (strtok)
No recursion
Use loops + logic only
Input may contain spaces
Words are separated by spaces
*/

#include <stdio.h>

int main(){
    char str[100];

    printf("Enter a sentence:");
    fgets(str,100,stdin);

    int current_length=0;
    int max_length=0;

    for(int i =0; str[i]!='\0';i++){

        if(str[i]!=' ' && str[i]!= '\n'){
             current_length++;

        }else{
            if(current_length> max_length){
                max_length=current_length;
            }
            current_length=0;
        }
    }
    
    printf("Length of longest word = %d\n", max_length);

    return 0;
    
}