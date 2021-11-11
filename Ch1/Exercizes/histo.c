/* 1-13 */
#include <stdio.h>

#define numWord 5
#define IN 1
#define OUT 0

int main()
{
  int c,wl,i,state;
  int wLength[numWord]; /* takes up to 5 word lengths */

  for(i=0; i<numWord; i++){
    wLength[i] = 0;
  }

  state = OUT;
  i = 0;
  wl = 0;
  
  while( (c = getchar()) != EOF ){
    wl+=1;
    if(c == ' '|| c=='\n' || c=='\t'){
      state = OUT;
      wLength[i++] = --wl;
      wl = 0;
    }
    else if( state == OUT ){
      state = IN;
    }
  }
  
  for(int i = 0; i < numWord; i++){
    printf("word[%d] has %d letters \n",i, wLength[i]);
  }

  printf("Histogram: \n");
  for(int i = 0; i < numWord; i++){
    for(int j = wLength[i]; j > 0; j--){
      printf("-");
    }
    printf("\n");
  }
  
}
