#include <stdio.h>

int main(){
    int myNum = 10 ;        // whole number
    float myFloatNum = 5.88 ;// floating number
    char myLetter = 'D';    // character

// %d => integer // %f => float  // %c => character  
printf("%d\n",myNum);
printf("%f\n",myFloatNum);
printf("%c\n",myLetter);

////// to use together
printf("my favorite number is : %d \n",myNum );
printf("My number is %d ,myletter is %c \n",myNum,myLetter);

///// change variables

int myNum2 = 6 ;
myNum2 = 7;
printf("%d\n",myNum2);

///// asign one variable to another
int num1 = 5;
int num2 = 7;
num1 = num2 ;
printf("%d\n",num2);

///// adding
int x = 3;
int y = 2;
int sum = x + y;
printf("3+2 = %d\n",sum);

int a = 5 , b = 6 ,c = 7 ;
printf("a+b+c= %d\n", a + b + c);

int q,w,e ;
q = w = e = 4;
printf("q+w+e = %d\n",q + w +e);
/////////////////////////////////////////////Examples
//Example1
int studendID = 14;
int studentAge = 24;
float studentFee = 43.75;
char studentGrade = 'B';
// different type of print
printf("studentID = %d,studentAge= %d,studentFee= %f ,studentGrade= %c \n",studendID,studentAge,studentFee,studentGrade);
printf("%d,%d,%f,%c\n",studendID,studentAge,studentFee,studentGrade);


// Example2
int length = 4;
int width = 5;
int area ;
area = length * width ;
printf("area is = %d m2", area);


return 0;

}