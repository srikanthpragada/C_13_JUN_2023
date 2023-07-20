
void reverse(int n)
{
 int i;

   for(i = n; i > 0; i --)
      printf("%d ", i);
}

void reverse2(int n)
{
   printf("%d ", n);
   if(n > 1)
       reverse2(n - 1);  // recursion
}

void print_reverse(int n)
{
    if (n > 0) {
       printf("%d", n % 10);
       print_reverse(n / 10);  // recursion
    }
}

void main()
{
    reverse(5);
    reverse2(5);
    print_reverse(123);

}
