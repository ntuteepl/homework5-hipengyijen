#include <stdio.h>
#include <stdlib.h>
#include<assert.h>

int main(void) 
{
  int n;
  int j;
  double i;
  scanf("%d %d",&j,&n);
  if(j<=60)
  {
    i=j*n;
  }
  if(j>60&&j<=120)
  {
    i=n*60+1.33*n*(j-60);
  }
  if(j>120)
  {
    i=n*60+1.33*n*60+1.66*n*(j-120);
  }
  printf("%.1f",i);
}

