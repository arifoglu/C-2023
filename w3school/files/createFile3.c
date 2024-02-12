#include <stdio.h>

int main (){
    FILE *fptr;
    fptr = fopen("salutations.txt","r");
    char myString[100] ;

    if(fptr != NULL)
    {

        while(fgets(myString,100,fptr))
        {
            printf("%s",myString);
        }
    }
    else
    {
        printf("Not able to open file");
    }

    fclose(fptr);

    return 0;
}