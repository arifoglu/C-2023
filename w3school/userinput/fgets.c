#include <stdio.h>
#include <string.h>

int main(){$
    //fgets
    char fulName[30];
    printf("type your full name :\n");
    fgets(fulName,sizeof(fulName),stdin);
    printf("hey %s",fulName);

    return 0;
}