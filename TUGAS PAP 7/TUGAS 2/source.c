#include "header.h"
int pengurangan (int a,int b)
  {
      if (b==0)
      {
        return a;
      }
      else
      {
            return -1 + pengurangan(a, b-1);
      }
  }
