#include <stdio.h>

int cycle_length(long n)
{
   int count = 1;
   while (n != 1)
   {
      if (n % 2 == 1)
      {
         n = 3 * n + 1;
      }
      else
      {
         n = n / 2;
      }
      count++;
   }
   return count;
}

int main()
{


   int a, b;

   while (scanf("%d %d", &a, &b) == 2)
   {
      int max = 0;
      int k;

      /* We need the extra variables, i, j*/
      /* The original value of input integers should be
       * kept for the last printf() statement */
      int i = a;
      int j = b;
      if (i > j)     /* Swap i, j*/
      {
         i = i - j;
         j = i + j;
         i = j - i;
      }
      for (k = i; k <= j; k++)
      {
         int len = cycle_length(k);
         if (len > max)
         {
            max = len;
         }
      }
      printf("%d %d %d\n", a, b, max);
   }
   return 0;
}
