//Store details of a product
//Date : 14-JUL-2023

#include <stdio.h>

struct product
{
  // members
  char name[20];
  int price, qty;
};


void main()
{
  struct product p1;

    p1.price = 10000;
    p1.qty = 1;
    strcpy(p1.name, "Harddisk");

    printf("%s %d %d", p1.name, p1.price, p1.qty);
}


