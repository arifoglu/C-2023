#include <stdio.h>

int main(){
    FILE *fptr;

    fptr = fopen("new.txt","r");
    if(fptr == NULL){
        printf("Not able to file");
    }
    fclose(fptr);
    return 0;
}