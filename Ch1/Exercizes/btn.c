/*1-8*/
#include <stdio.h>

int main()
{
  int c; /*input*/
  int b,t,n = 0; /*blanks, tabs, newline count*/

  while( (c = getchar()) != EOF ){
    if(c == '\n'){
      n++;
    }
    if(c == ' '){
      b++;
    }
    if(c == '\t'){
      t++;
    }
  }
  printf("tabs: %d, newlines: %d, blanks: %d\n",t,n,b);
}
