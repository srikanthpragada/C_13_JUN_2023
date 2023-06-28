// Program to display net price after a discount of 10%
// Date : 23-JUN-2023

#include <stdio.h>

void main()
{
   int  price, discount, net_price;

    // input
    printf("Enter price : ");
    scanf("%d", &price);

    // process
    discount = price * 10 / 100;
    net_price = price - discount;

    // output
    printf("Net price :  %d", net_price);
}
