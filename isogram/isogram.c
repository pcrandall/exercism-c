#include "isogram.h"

int main(){
   char test [] = "NICE";
   int res = is_isogram(test);
   printf("Isogram: %s",  res ? "True" : "False");
}
bool is_isogram(const char phrase[]){
   int len = strlen(phrase)+1;
   char mem[len];
   mem[0] = '\0';
   for (const char *mem_str = *(&phrase); *mem_str; ++mem_str){
      /* char test [] = "NICE DUDEEEEE"; */

      /* mem: N, mem_str: NICE DUDEEEEE */
      /* mem: NI, mem_str: ICE DUDEEEEE */
      /* mem: NIC, mem_str: CE DUDEEEEE */
      /* mem: NICE, mem_str: E DUDEEEEE */
      /* mem: NICE , mem_str:  DUDEEEEE */
      /* mem: NICE D, mem_str: DUDEEEEE */
      /* mem: NICE DU, mem_str: UDEEEEE */
      /* mem: NICE DUD, mem_str: DEEEEE */
      /* mem: NICE DUDE, mem_str: EEEEE */
      /* mem: NICE DUDEE, mem_str: EEEE */
      /* mem: NICE DUDEEE, mem_str: EEE */
      /* mem: NICE DUDEEEE, mem_str: EE */
      /* mem: NICE DUDEEEEE, mem_str: E */

      // concat mem_str to mem;

      printf("Result %s\n\n", strstr(mem, mem_str));
      if(strstr(mem, mem_str)) return true;
      printf("mem: %s, mem_str: %s\n", mem, mem_str);
      snprintf(mem, sizeof(mem), "%s%c", mem, mem_str[0]);
   }
   return false;
}
