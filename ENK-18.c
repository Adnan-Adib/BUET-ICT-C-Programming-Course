#include <stdio.h>
int main ()
{ double T[]={25.4 , 25.01, 24.06, 23.7, 22.9, 22.1, 21.6, 22, 21.03, 20.5};
 double sum;
 int i;
 sum=0;
 for(i=0;i<10;i++)
 {
sum+=T[i];
}
 printf ("Sum: %lf\n", sum);
 printf("Avarage:%lf",sum/i);

  return 0;
}