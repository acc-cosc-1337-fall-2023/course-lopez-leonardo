//add include statements
#include "repetition.h"

//add function(s) code here

int factorial(int num){
    int sum = num;
    
    while(num > 1){
        sum = sum * (num - 1);
        num -= 1;
    }

    return sum;
}

int gcd(int num1, int num2){
    int biggest_factor = 0;

    for(int i = 1; i <= num1 && i <= num2; i++){
        if(num1 % i == 0 && num2 % i == 0){
            biggest_factor = i;
        }
    }

    return biggest_factor;
}