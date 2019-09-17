#include "header.h"

int penjumlahan (int a,int b)
  {
      if (a==0)
      {
        return b;
      }
      else
      {
            return 1 + penjumlahan(a-1 , b);
      }
  }
