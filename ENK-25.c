#include <stdio.h>
#include <string.h>

int main() {
    char district1[31];
    char district2[31];

    printf("district1: ");
    scanf("%s", district1);
    printf("district2: ");
    scanf("%s", district2);
    printf("\n");

    int Value = strcmp(district1, district2);

    if (Value == 0) 
    {
        printf("Both districts are same: %s\n", district1);
    }
    else if (Value< 0) 
    {
        printf("Smaller district: %s\n", district1);
        printf("Larger district: %s\n", district2);
    } 
    else 
    {
        printf("Smaller district: %s\n", district2);
        printf("Larger district: %s\n", district1);
    }

    return 0;
  }