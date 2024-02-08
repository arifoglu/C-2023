#include <stdio.h>
#include <string.h>

int main(){
    char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("%d\n",strlen(alphabet)); // result 26
    printf("%d\n",sizeof(alphabet)); // result 27 (sizeof includes \0)

    //concatenate => strcat()
    char firstname[] = "fan";
    char lastname[] = "far";
    strcat(firstname,lastname); // result is stored in firstname
    printf("%s\n",firstname);

    // copy  => strcpy() 
    char salutation[] = "hi";
    char salutation2[3];
    strcpy(salutation2,salutation);
    printf("%s\n",salutation2);

    //compare strings => strcmp()
    char word1[] = "Hello";
    char word2[] = "Hello";
    char word3[] = "Hey";
    printf("%d\n",strcmp(word1,word2)); // result 0 => equal two strings
    printf("%d\n",strcmp(word1,word3)); // result -1 => not equal two strings

    return 0;
}