/*

Wap to Check whether two strings are ANAGRAMS.

No string functions (strlen, strcmp, etc.)
No sorting
No extra string / array
No hash tables
No pointers
No recursion
Use loops + logic only
Case-sensitive (for now)

*/
int strsize(char str[]){
    int size=0;
    for(int i = 0; str[i]!='\0';i++){
        if(str[i]!='\n'){
            size++;
        }
    }
    return(size);
}

#include <stdio.h>

int main(){
    char str1[100];
    char str2[100];

    printf("Enter your 1st string:");
    fgets(str1,100,stdin);

    printf("Enter your 2nd string:");
    fgets(str2,100,stdin);

    int status=0;

    if(strsize(str1)== strsize(str2)){

        for(int i=0; i<strsize(str1);i++){

            if (str1[i]>= 'A' && str1[i] <= 'Z') { // for case sensitivity.
                    str1[i] = str1[i] + 32;
                }

            for(int j=0; j<strsize(str2); j++){
                
                if (str2[j] >= 'A' && str2[j]<= 'Z') { // for case sensitivity.
                    str2[j] = str2[j] + 32;
                }


                if(str1[i]==str2[j]){
                    status++;
                }

            }
        }

    }

    if(status==strsize(str1)){
        printf("Anagram.");
    }else{
        printf("Not an Anagram.");
    }
    return 0;

}
