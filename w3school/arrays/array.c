#include <stdio.h>

int main (){
    // array 
    int nums[] = {12,13,14,15,16,17};
    printf("this is first element of nums array : %i\n",nums[0]);
    
    // change element of array
    nums[0] = 10;
    printf("first element changed this time : %i\n",nums[0]);

    // loop an array
    int nums2[]={0,1,2,3,4,5,6,7,8,9};
    int i;
    for(i = 0; i < 5 ;i++){
        printf("%i\n",nums2[i]);
    }
    // declare array size
    int nums3[4];
    nums3[0] = 99;
    nums3[1] = 98;
    nums3[2] = 97;
    nums3[3] = 96;
    printf("%i\n",nums3[0]); // 99

    // Array size
    int nums4[] = {10,25,50,75,100};
    printf("%lu\n",sizeof(nums4)); // result is 20 (because 4x5element = 20byte)
    printf("%lu\n",sizeof(nums4) / sizeof(nums4[0])); // result is 5

    ////////Examples
    int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};
    float average,sum = 0;

    int length =sizeof(ages) / sizeof(ages[0]);

    for(i = 0; i < length ;i++){
        sum += ages[i];
    }

    average = sum / length ;

    printf("the average age is : %.2f" , average);

    return 0 ;
}