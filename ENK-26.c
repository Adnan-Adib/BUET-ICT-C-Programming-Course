#include <stdio.h>

void dec_to_bin( int dec) ; 

int main()
{
  int dec ;
  scanf("%d" , &dec) ;
  dec_to_bin(dec) ;
  return 0;
}

void dec_to_bin(int dec)
  {
    int rem , place = 1 , bin = 0 ;
    while(dec > 0)
     {
       rem = dec % 2 ;
       dec = dec / 2 ;
       bin = bin + ( rem * place) ;
       place = place*10 ;
      }
    printf("%d" , bin) ;
    
  }