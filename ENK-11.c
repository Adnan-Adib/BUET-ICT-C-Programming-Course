#include <stdio.h>
int main()
{
  int temp;
  scanf ("%d", &temp);
  if (temp>= 25 && temp <= 35)
  {
    printf ("The weather is nice!\n");
    
  }
   else if (temp>= 36 && temp <=45)
  {
    printf ("The weather is hot!\n");}
    else if (temp>= 15&& temp <=24)
  {
    printf ("The weather is cold!\n");}
  else
  {
    printf ("The weather is extreme!\n");
  }
  return 0;
}