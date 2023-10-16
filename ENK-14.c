#include <stdio.h>
int main ()
{ int num;
  printf("Enter a number:");
  scanf("%d",&num);
  if(num%2==0)
  { int i;
   for(i=1;i<=20;i=i+1)

    {printf("even\n");}

  }
  else
{
    int i;
   for(i=1;i<=20;i=i+1)


    {printf("odd\n");}
  }
  return 0;
}