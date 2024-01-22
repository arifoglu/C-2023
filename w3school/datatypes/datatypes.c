#include <stdio.h>

int main(){

   // %d = %i  => integer == 2 or 4 bytes
    int myNum = 5 ; 
    printf("%d\n",myNum);
    printf("%d\n",myNum);
    
   // %f = %F  => float  == 4 bytes
   float myNum2 = 5.99;
   printf("%f\n",myNum2);
   printf("%F\n",myNum2);

   // %1f      => double  == 8 bytes
   double myNum3 = 12.43;
   printf("%.1f\n",myNum3);

   // %c     => char       == 1byte
   char myname = 'X';
   printf("%c\n",myname);

  // %s      => strings     
  char greetings[] = "Saluts";
  printf("%s\n",greetings);

  //////////////////////////////////////////// decimal precision %.1f 
  float myNum4 = 12.3;
  printf("%f\n",myNum4);    // result 12.300000
  printf("%.1f\n",myNum4);  // result 12.3
  printf("%.2f\n",myNum4);  // result 12.30
  printf("%.4f\n",myNum4);  // result 12.3000 

  //////////////////// Examples

  int items = 50 ;
  float cost_per_item = 9.99;
  float total_cost = items * cost_per_item ;
  char currency = '$' ;

  printf("Number of items %d\n",items);
  printf("Cost per item %.2f\n",cost_per_item);
  printf("Total cost = %.1f %c\n",total_cost,currency);

  //////////////////////////////////////////////////////////// type converison

  int num1 = 5 ;
  int num2 = 2 ;
  float sum = (float) num1 / num2;
  printf("%f\n",sum);
  printf("%.1f\n",sum);
 
 // Examples
 int maxScore = 500;
 int userScore = 420;
 float percentage = (float) userScore / maxScore * 100 ;
 printf("this user's percentage is  %.1f\n",percentage);

////////////////////////////////////////////////////////////////// Constants
const int MYNAME = 'AA';
printf("%c\n",MYNAME);


    return 0;
}