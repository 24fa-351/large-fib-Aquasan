//Alex Nnguyen

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>


   unsigned long long fib_recursive(unsigned long long n) {
      
      if (n <= 1)
      
         return n;
      
      return fib_recursive(n - 1) + fib_recursive(n - 2);
   }


   unsigned long long fib_iterative(unsigned long long n) {
      
      if (n <= 1)
      
         return n;

      unsigned long long prev = 0;
      unsigned long long curr = 1;
      unsigned long long next;

      for (unsigned long long i = 2; i <= n; ++i) {
         
         next = prev + curr;
         prev = curr;
         curr = next;
      
      }

      return curr;
   }

   int main(int argc, char *argv[]) {


      unsigned long long number = strtoull(argv[1], NULL, 10);
      
      char method = argv[2][0];

      number = number - 1;

      unsigned long long result;
      if (method == 'r') {
         
         result = fib_recursive(number);
      } else if (method == 'i') {
         
         result = fib_iterative(number);
      } 

      printf( "%llu\n", result);
      
      return 0;
   }
