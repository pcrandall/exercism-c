#include "armstrong_numbers.h"
bool is_armstrong_number(int candidate){
   if(candidate == 0)return true;

   int inital_value = candidate;
   int digit=0, sum=0, place_value=0, exponent=0, position = 0;
   // get len of  int eg: 1000 = 4
   position = get_len(candidate);
   // placeholder
   exponent = position;
   while (position){
      place_value = int_pow(10, (position - 1));
      digit = candidate / place_value;
      sum += int_pow(digit, exponent);
      candidate -= place_value * digit;
      /* printf("place_value: %d\ndigit: %d\nsum: %d\nposition: %d\n\n", place_value,digit, modulus, sum, position); */
      position --;
   }

   if (sum == inital_value) {
      return true;
   }else{
      return false;
   }
}

int get_len(int num){
   if(num == 0)return 0;
   return floor(log10(abs(num))) + 1;
}

int int_pow(int base, int exp)
{
    int result = 1;
    while (exp)
    {
        if (exp % 2)
           result *= base;
        exp /= 2;
        base *= base;
    }
    return result;
}
