#include "resistor_color.h"


/* If you want to build something using a Raspberry Pi, you'll probably use resistors. For this exercise, you need to know two things about them: */

/*     Each resistor has a resistance value. */
/*     Resistors are small - so small in fact that if you printed the resistance value on them, it would be hard to read. */

/* To get around this problem, manufacturers print color-coded bands onto the resistors to denote their resistance values. Each band has a position and a numeric value. */

/* The first 2 bands of a resistor have a simple encoding scheme: each color maps to a single number. */

/* In this exercise you are going to create a helpful program so that you don't have to remember the values of the bands. */

/* These colors are encoded as follows: */

/*     Black: 0 */
/*     Brown: 1 */
/*     Red: 2 */
/*     Orange: 3 */
/*     Yellow: 4 */
/*     Green: 5 */
/*     Blue: 6 */
/*     Violet: 7 */
/*     Grey: 8 */
/*     White: 9 */

/* The goal of this exercise is to create a way: */

/*     to look up the numerical value associated with a particular color band */
/*     to list the different band colors */

/* Mnemonics map the colors to the numbers, that, when stored as an array, happen to map to their index in the array: Better Be Right Or Your Great Big Values Go Wrong. */

/* More information on the color encoding of resistors can be found in the Electronic color code Wikipedia article */

/* int main(){ */
/*    /1* get len of arr *1/ */
/*    /1* get val of each color *1/ */
/*    /1* black black grn *1/ */
/*    /1* 0 0 5 *1/ */
/*    resistor_band_t tst = Red; */
/*    printf("Band: %d\n\n",  tst); */
/* } */

int color_code(resistor_band_t bandssss){
   return bandssss;
}

resistor_band_t *colors(){
   static resistor_band_t b [] = {BLACK, BROWN, RED, ORANGE, YELLOW, GREEN, BLUE, VIOLET, GREY, WHITE};
   return b;
}