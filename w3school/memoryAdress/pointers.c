#include <stdio.h>

int main(){

    int numbers[4] = {5,10,15,20};
    int i;
    for(i = 0 ; i < 4 ; i++){
        printf("%p\n",&numbers[i]);
    }
    printf("%lu\n",sizeof(numbers)); // 16bytes

    printf("%d\n",*numbers);        // * means first element   => 5
    printf("%d\n",*(numbers + 1)); // * means second element   => 10
    printf("%d\n",*(numbers + 2)); // * means second element   => 15

    return 0;
}