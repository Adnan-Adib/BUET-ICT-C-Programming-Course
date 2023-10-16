#include <stdio.h>

int main()
{
  int ara[] = {5000,6000,7000,8000,9000,10000};
  int n = 6, i;
  int x;

  for (i = 0; i < n / 2; i += 1)
  {
    // To exchange the value of ara [i] and ara [n-l-i]
    x = ara[i];
    ara[i] = ara[n-1-i];
    ara[n-1-i] = x;
    }
  for (i = 0; i < n; i += 1)
  {
    printf ("%d\n", ara[i]);
    }
  return 0;
}