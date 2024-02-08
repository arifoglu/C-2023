#include <stdio.h>

void myFunction(){
    printf("hey \n");
}
void myFunction2(char name[]){
    printf("hey %s \n",name);
}
void myFunction3(char name[],int age){
    printf("hey %s your age is %d \n",name,age);
}



int main() {
    
    myFunction();
    myFunction();

    myFunction2("henri");
    myFunction2("denis");

    myFunction3("chen",44);

    return 0;
}