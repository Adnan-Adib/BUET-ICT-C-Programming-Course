#include <stdio.h>
int IsPrime(int n);
int main()
{
  int n, i;
  scanf("%d", &n);
  if(IsPrime(n) == 1)
  {
    printf("Prime Number");
  }
  else
  {
    printf("Not a Prime Number");
  }
  return 0;
}
int IsPrime(int n)
{
    if (n == 2 || n == 3)
    {      
        return 1;
      }
    if (n <= 1 || n % 2 == 0 || n % 3 == 0)
    {
      return 0;
      }

    for (int i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
        {
          return 0;
          }
    }

    return 1;
}