#include<stdio.h>
#include "fun.h"
int main() 
{
  int p, q, r, s,t;
  p = 15;
  q = 25;
  r=4;
  s = sum(p,q);
  t = square(r);
  printf("sum is %d\n",s);
  printf("square is %d\n",t);
  return 0;
}
