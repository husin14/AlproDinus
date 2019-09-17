#include "header.h"
int perkalian (int a,int b)
  {
      if (b==1)
      {
        return a;
      }
      else
      {
            return a + perkalian(a , b-1);
      }


    }
