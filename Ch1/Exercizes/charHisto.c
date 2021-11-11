/* 1-14 */
#include <stdio.h>

int main()
{
  int alph[26];
  char letters[26] = "abcdefghijklmnopqrstuvwxyz";
  int c;
  
  for(int i=0; i<=26; i++){
    alph[i] = 0;
  }

  while( (c = getchar()) != EOF){
    if(c == 'a' || c =='A')
      alph[0]++;
    if(c == 'b' || c =='B')
      alph[1]++;
    if(c == 'c' || c =='C')
      alph[2]++;
    if(c == 'd' || c =='D')
      alph[3]++;
    if(c == 'e' || c =='E')
      alph[4]++;
    if(c == 'f' || c =='F')
      alph[5]++;
    if(c == 'g' || c =='G')
      alph[6]++;
    if(c == 'h' || c =='H')
      alph[7]++;
    if(c == 'i' || c =='I')
      alph[8]++;
    if(c == 'j' || c =='J')
      alph[9]++;
    if(c == 'k' || c =='K')
      alph[10]++;
    if(c == 'l' || c =='L')
      alph[11]++;
    if(c == 'm' || c =='M')
      alph[12]++;
    if(c == 'n' || c == 'N')
      alph[13]++;
    if(c == 'o' || c =='O')
      alph[14]++;
    if(c == 'p' || c =='P')
      alph[15]++;
    if(c == 'q' || c =='Q')
      alph[16]++;
    if(c == 'r' || c =='R')
      alph[17]++;
    if(c == 's' || c =='S')
      alph[18]++;
    if(c == 't' || c =='T')
      alph[19]++;
    if(c == 'u' || c =='U')
      alph[20]++;
    if(c == 'v' || c =='V')
      alph[21]++;
    if(c == 'w' || c == 'W')
      alph[22]++;
    if(c == 'x' || c == 'X')
      alph[23]++;
    if(c == 'y' || c == 'Y')
      alph[24]++;
    if(c == 'z' || c == 'Z')
      alph[25]++;
  }

  for(int i=0; i<26; i++){
    printf("%c| ",letters[i]);
    for(int j=alph[i]; j>0; j--){
      printf("-");
    }
    printf("\n");
  }
}
