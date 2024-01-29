#include <stdio.h>

int main () {

    int i = 0;

    do {
        printf("%d\n",i);
        i++;
    }
    while(i < 7 );

//// Examples
    int countdown = 3 ;
    while (countdown > 0)
    {
        printf("%d\n",countdown);
        countdown-- ;
    }
    printf("happy new Year!! \n");
    


    return 0 ;
}