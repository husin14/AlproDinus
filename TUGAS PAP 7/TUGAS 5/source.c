#include "header.h"
int pangkat (int a,int b)
  {
      if (b==0)
      {
          return 1;

      }
      else
      {
          return a* pangkat(a,b-1);

      }

  }
