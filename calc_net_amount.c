//Calculate net amount after a discount of 20 or 10% based on qty
//Date : 26-JUN-2023

#include <stdio.h>

void main()
{

int price, quantity, discount, amount, net_amount;

    printf("Enter price   :");
    scanf("%d",&price);
    printf("Enter Quantity:");
    scanf("%d",&quantity);

    amount = price * quantity;

    if(quantity > 2)
    {
        discount = amount * 20 / 100;
    }
    else
    {
       discount = amount * 10 / 100;
    }

    net_amount = amount  - discount;

    printf("Amount          : %5d\n",amount);
    printf("- Discount      : %5d\n",discount);
    printf("Net Amount      : %5d",net_amount);

}
