//struct rect
//Date : 15-JUL-2023

#include <stdio.h>

struct rect
{
   int length, width;
};

void print(struct rect r)
{
    printf("%d, %d", r.length, r.width);
}

int area(struct rect r)
{
    return r.length * r.width;
}

struct rect max(struct rect r1, struct rect r2)
{
    return area(r1) > area(r2) ? r1 : r2;
}

void  zero(struct rect * r)
{
      r->length = 0;
      r->width = 0;
}

void main()
{
   struct rect r1 = {10,20};
   struct rect r2 = {30,5};
   struct rect r3;

     r3 = max(r1, r2);
     print(r3);
     printf("\n");
     zero(&r3);
     print(r3);
}


