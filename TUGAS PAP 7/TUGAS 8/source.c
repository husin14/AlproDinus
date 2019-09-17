#include "header.h"

int sum_transversal(int data[] , int cur)
  {
      if (data[cur]==0)
      {
          return 0;
      }
      else
      {
          return data[cur] + sum_transversal(data,cur + 1);
      }
  }
