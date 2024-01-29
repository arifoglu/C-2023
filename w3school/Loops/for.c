#include <stdio.h>

int main () {

   int i ;
   for(i = 0 ; i < 5 ; i++){
    printf("%d\n\n",i);
   };

/// Nested Loops
   int a , b ;
   //outer loop
   for(a = 1 ; a <= 2 ; ++a){
    printf("Outer : %d\n",a);

      // inner loop
      for(b = 1 ; b <=3 ; ++b){
        printf("Inner : %d\n",b);
      }
   }

// Examples
    int x ;
    for (x = 0 ; x <= 20 ; x += 5){
        printf("x  will raise to %d\n",x);
    }
//
    int num = 2;
    int m ;
    for(m = 0 ; m < 5 ; m++){
        printf("%d x %d = %d\n" ,num, m , num * m );
    }

// 
    int add = 3;
    int h ;
    for(h = 0 ; h <= 16 ; h++){
        printf("%d + %d = %d\n", h,add, h + add);
    }

    return 0;
}