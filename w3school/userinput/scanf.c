#include <stdio.h>

int main(){
    //one variable &
    int num;
    printf("type a number : \n");
    scanf("%d",&num);
    printf("your number is : %d\n",num);

    // two variable &
    int num2 ;
    int num3 ;
    printf("type a number and a character : \n");
    scanf("%d %c",&num2 ,&num3);
    printf("your number is :%d\n",num2);
    printf("your character is :%c\n",num3);

    //
    char myname[30];
    printf("Enter your name :\n");
    scanf("%s",myname);
    printf("hey %s",myname);
    return 0 ;
}