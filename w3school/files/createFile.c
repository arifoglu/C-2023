#include <stdio.h>

int main(){
    FILE *fptr ;
    fptr = fopen("C:/Users/abdulkadir.arifoglu/Documents/C-2024/w3school/files/myFile.txt","a");

    fprintf(fptr,"\n new line");
    
    

    fclose(fptr);
    return 0;
}