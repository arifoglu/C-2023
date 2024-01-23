#include <stdio.h>

int main(){
///////////////////////////////////////////////////////////// Arithmetic Operators
/////////////////////////////////////////////////////////////

//////////////////////////////// operator + Additon
    int num1 = 10;
    int num2 = 15;
    int sum = num1 + num2 ;
    printf("%d\n",sum);
    printf("%d\n",sum + num1);
/////////////////////////////// operator  - Subtraction
    printf("%d\n", num2 - num1 ); // 5
    printf("%d\n", num1 - num2 ); //-5

/////////////////////////////// operator  * Multiplication
    printf("%d\n", num1 * num2) ;
    printf("%d\n",num1 * 10);

/////////////////////////////// operator  /  Divison
    printf("%d\n",num1 / 2 );
    printf("%f\n",(float) num2 / num1); // 1.500000
    printf("%.1f\n",(float) num2 / num1 );// 1.5
    
/////////////////////////////// operator  %  Modulus (Returns the division remainder)
    printf("%d\n",num2 % num1);

/////////////////////////////// operator  ++ Increment 
    int x = 5 ;
    printf("%d\n", ++x); // 6
    int a = 3;
    int b = ++a;
    printf("%d\n",b); // 4

/////////////////////////////// operator -- Decrement    
    int q = 7;
    printf("%d\n",--q); // 6
    int w = 5;
    int z = --w;   
    printf("%d\n",z);   // 4

////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////   Assignement Operators

//////////////////////////// operator +=
    int r = 8 ;
    printf("%d\n",r);  // 8
    r += 5 ;
    printf("%d\n",r);  // 13

//////////////////////////// operator -=
    int t = 9 ;
    t -= 2,
    printf("%d\n",t);   // 7
  
//////////////////////////// operator *=
    int e = 5;
    e *= 3 ;
    printf("%d\n",e);

//////////////////////////// operator /=
    int v = 8;
    v /= 4 ;
    printf("%d\n",v);

return 0;

}