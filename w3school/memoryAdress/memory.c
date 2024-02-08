#include <stdio.h>

int main(){
    int age = 23;
    printf("%p\n",&age);

    int age2 = 23;
    int* ptr = &age2;
    printf("%p\n",&age2); // result 00000000005FFE90
    printf("%p\n",ptr);   // result 00000000005FFE90 


    return 0;
}