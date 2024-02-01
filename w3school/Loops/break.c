#include <stdio.h>

int main() {
    int i;
    for (i = 0 ; i < 10 ; i++){
        if(i == 4){
            break;
        }
        printf("%d\n\n",i);
    };

    int a;
    for(a = 0 ; a < 8 ;a++){
        if(a == 3){
            continue;
        }
        printf("%d\n",a);
    }

    return 0 ;
}