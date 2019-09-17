#include "header.h"

int pembagian (int a,int b)
  {
      if (a<b)
      {
        return 0;
      }
      else
      {
            return 1 + pembagian(a-b , b);
      }
  }
