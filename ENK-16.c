#include <stdio.h>
int main()
{ int sum=0,i;
for (i=1; i<=100;i=i+1)
  {if(i%3==0)
  {sum+=i;}}
  printf("sum:%d",sum);
  return 0;
}
