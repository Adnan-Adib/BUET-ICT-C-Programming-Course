

#include <stdio.h>

int main() 
{
    int yearly_fee = 36000;
    int total_months = 12;

    // Calculate the total fee for 2 years
    int total_fee_2_years = yearly_fee * 2;

    // Calculate the monthly fee
    float monthly_fee = (float)yearly_fee / total_months;

    // Print the results using format specifiers
    printf("The total fee for 2 years is %d\n", total_fee_2_years);
    printf("The monthly fee was %.2f\n", monthly_fee);

    return 0;
}