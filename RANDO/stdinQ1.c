#include <stdio.h>
#include <math.h>

int main()
{
  int cnt=0,sum=0,sumOfSq=0,a;
  double mu=0,sig=0;

  while(scanf("%d",&a) != -1){
    sum += a;
    sumOfSq += (a * a);
    cnt++;
  }

  mu = (double)sum / cnt;
  sig = sqrt(((double)sumOfSq / cnt) - mu*mu);
  
  printf("mu=%f sig=%f\n", mu,sig); 
  
  return 0;
}
