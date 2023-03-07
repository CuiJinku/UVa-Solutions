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


   long i, j;

   while (scanf("%ld %ld", &i, &j) == 2)
   {
      int max = 0;
      long k;
      long l = i;
      long r = j;
      if (i > j)
      {
         l = j;
         r = i;
      }
      for (k = l; k <= r; k++)
      {
         int len = cycle_length(k);
         if (len > max)
         {
            max = len;
         }
      }
      printf("%ld %ld %d\n", i, j, max);
   }
   return 0;
}
