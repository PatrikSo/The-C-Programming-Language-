#include <stdio.h>

int binomial(int n, int k);

int main()
{
  printf("Binomial (n=1, k=1): %d\n", binomial(1,1));

  return 0;
}

int binomial(int n, int k)
{
  if(k == 0)
    return 1;
  return (n/k)*binomial(n-1, k-1);
}
