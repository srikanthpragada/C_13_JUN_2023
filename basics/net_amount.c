//DISPLAY NET AMOUNT AFTER A DISCOUNT OF 20 PERCENT AND TAX OF 8 PERCENT
//Date : 24-JUN-2023

#include <stdio.h>

void main()
{

int price, quantity, discount, amount, tax, after_discount, net_amount;

    // input
    printf("ENTER THE PRICE OF ITEM:");
    scanf("%d",&price);
    printf("ENTER THE QUANTITY:");
    scanf("%d",&quantity);

    amount = price * quantity;
    discount = amount * 20.0 / 100;
    after_discount = amount - discount;
    tax = after_discount * 8 / 100;
    net_amount= after_discount + tax;

    printf("Amount          : %5d\n",amount);
    printf("- Discount      : %5d\n",discount);
    printf("After Discount  : %5d\n",after_discount);
    printf("+ Tax           : %5d\n",tax);
    printf("Net Amount      : %5d",net_amount);

}
