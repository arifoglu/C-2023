#include <stdio.h>

int main() {

    // if statement
    if(20 > 18){
        printf("20 greater than 18 \n");
    }

    //if statement
    int x = 9;
    int y = 8;
    if(x > y )
    {
        printf("x greater than y \n");
    }

    // if else statement
    int time = 20;
    if(time < 18)
    {
        printf("Good Day\n");
    }
    else
    {
        printf("Good evening\n");
    }

    // ternary ? :

    int timex = 19;
    (timex < 18 )? printf("good day") : printf("good evening\n");
   
    ///////////////////////////////////////////////////// Examples
    //
    int doorCode = 2323;
    (doorCode == 2323) ? printf("code is valid\n") : printf("code is invalid\n");

    //
    int num = 5;
    (num %2 == 0 ) ? printf("%i  is a even number",num) : printf("%i is a odd number", num);

    //


    return 0;

}