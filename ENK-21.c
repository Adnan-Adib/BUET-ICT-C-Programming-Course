#include <stdio.h>
int main()
{
    //if names are same print yes else no
    char name[20];
    char key;
    scanf("%s %c", name, &key);
    int i;
    for(i=0 ; name[i] ; ++i)
    {
        if( key == name[i])
        {
        printf("yes\n");
        break ;
        }
    }
    if(name[i] == '\0')
    printf("No");
    return 0 ;
  }