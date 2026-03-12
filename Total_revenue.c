#include <stdio.h>
int main() 
{
    int quantity;
    float price_per_item, total_revenue;

    printf("Enter the quantity sold: ");
    scanf("%d", &quantity);

    printf("Enter the price per item: ");
    scanf("%f", &price_per_item);

    total_revenue = quantity * price_per_item;

    printf("Total Revenue: $%.2f\n", total_revenue);

    return 0;
}