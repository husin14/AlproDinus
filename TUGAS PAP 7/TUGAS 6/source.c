#include "header.h"

int faktorial (int a)
  {
      if (a==1)
      {
          return 1;
      }
      else
      {
          return a*faktorial(a-1);
      }
  }
