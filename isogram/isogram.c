#include "isogram.h"

/* int main(){ */
/*    char test [] = "why!"; */
/*    int res = is_isogram(test); */
/*    printf("Isogram: %s\n\n",  res ? "True" : "False"); */
/* } */

/* this solution was way better than mine so this is what I will submit */
/* https://exercism.org/tracks/c/exercises/isogram/solutions/watsonmf */

// this is used to convert all chars to lowercase
# define ASCII_MASK 0x60

bool is_isogram(const char phrase[]){
   if (phrase == NULL)
      return false;
   // 26 letters in alphabet, give me 32 bit unsigned ints
   uint32_t letters = 0;
   uint32_t mask;

   for (int i=0; phrase[i] != '\0'; i++){
      if (isalpha(phrase[i])){
         // bitwise or (phrase[i] | ASCII_MASK) converts ascii upper case chars to lowercase
         // bitwise xor ^ ASCII_MASK removes the mask, a=1, B=2 ...
         // turn on each each bit in the letters 32 bit to keep track of which letter have already been seen
         mask = 1 << ((phrase[i] | ASCII_MASK) ^ ASCII_MASK);
         /* printf("Mask: %08x, Letters: %08x\n", mask, letters); */
         if (letters & mask)
            return false;
         else
            letters |= mask;
      }

   }
   return true;
}
