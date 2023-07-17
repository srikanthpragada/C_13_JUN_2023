//Enum
//Date : 17-JUL-2023

#include <stdio.h>

enum payoption { CASH = 10, CARD = 20, UPI = 50, NEFT = 100};

struct sale
{
  int prodid;
  int amount;
  enum payoption paymode;
};

typedef struct sale SALE;
typedef int number;

void main()
{
  struct sale s1;
  SALE s2;

     s1.prodid = 10;
     s1.amount = 1000;
     s1.paymode = NEFT;

     printf("%d %d %d", s1.prodid, s1.amount, s1.paymode);
}


