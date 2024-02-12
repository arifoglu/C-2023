#include <stdio.h>
#include <string.h>


struct myStructure{
    int num;
    char letter;
    char myString[30];
};

int main () {

    struct myStructure s1;

    s1.num = 10;
    s1.letter = 'D';

    strcpy(s1.myString,"somethings");
    
    printf("number is %d\n",s1.num);
    printf("letter is %c\n",s1.letter);
    printf("my string is : %s\n",s1.myString);

    return 0 ;
}