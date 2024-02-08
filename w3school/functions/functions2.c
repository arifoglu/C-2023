#include <stdio.h>

float toCelcius(float fahrenheit){
    return (5.0 / 9.0) * (fahrenheit -32.0);
}

int main(){
    
    float f_value;
    printf("type degree (as a fahrenheit) : ");
    scanf("%f",&f_value);

    float result = toCelcius(f_value);

    printf("fahrenheit : %.2f\n ",f_value);
    printf("Convert fahrenheit to Celcius : %.2f °C\n",result);

    return 0;
}
