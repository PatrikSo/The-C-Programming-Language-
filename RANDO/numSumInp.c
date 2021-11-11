/*
Program takes a input with strings/nums and sums the nums. 
*/

#include <stdio.h>

int main()
{

  char c;
  int sum = 0;
  
  while((c = getchar()) !=EOF){
    if(c>='0' && c<='9')
      sum += c-'0';
  }

  printf("Sum: %d\n", sum);

  return 0;
}
