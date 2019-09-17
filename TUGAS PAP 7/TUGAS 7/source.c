#include "header.h"

int fibonacci (int a)
  {
      if (a==0)
      {
        return 0;
      }
      else if (a==1)
      {
          return 1;
      }
      else
      {
            return fibonacci(a-1) + fibonacci(a-2);
      }
  }
  void fibo (int num)
  {
      if (num > 1)
      {
          fibo(num - 1);
      }
      printf("%d , ", fibonacci(num) );
  }
