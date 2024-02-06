#include <stdio.h>

int main() {
    char salutations[] = "salut";
    
    // %s => string
    printf("%s\n",salutations);    //  salut

    // %c => character
    printf("%c\n",salutations[0]); //  s 
    printf("%c\n",salutations[1]); //  a 
    printf("%c\n",salutations[2]); //  l 
    printf("%c\n",salutations[3]); //  u 
    printf("%c\n",salutations[4]); //  t 

    // to write => salut 
    int i;
    int length = sizeof(salutations) / sizeof(salutations[0]);
    for(i = 0 ; i < length ; i++){
        printf("%c\n",salutations[i]);
    }

    //Examples
    char message[] = "Good to see you";
    char fname[] = "John";
    printf("%s %s \n",message,fname);

    // double quote ""
    char txt[] = "we are here \"Hey\" ";
    printf("%s\n",txt);

    // single quote ''
    char txt2[] = "we are here \'Hey\' ";
    printf("%s\n",txt2);

    // backslash 
    char txt3[] = "we are here \\Hey\\ ";
    printf("%s\n",txt3);
    
    //// examples
    char txt4[] = "hello\tworld";
    printf("%s\n",txt4);


    return 0;
}