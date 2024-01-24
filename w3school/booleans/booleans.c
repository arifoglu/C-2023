#include <stdio.h>
#include <stdbool.h>

int main() {
    
///////////////////////////////    
    bool science = true;
    bool noscience = false;
    printf("%d\n", science);  // 1
    printf("%d\n", noscience);// 0

///////////////////////////////    
    bool kids = true;
    bool olds = false;
    printf("%d\n", kids = olds); // 0

///////////////////////////////
// Examples
   int myAge = 25 ;
   int voteAge = 18;
   printf("%d\n", myAge >= voteAge); // 1
 
    return 0;
}