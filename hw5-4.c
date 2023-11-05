#include <stdio.h>
#include <stdlib.h>
#include<assert.h>

int main(void) 
{
  int h=0;
  int m=0;
  float d=0;

  scanf("%d %d",&h,&m);
  assert(h>=1&&h<=12&&m>=00&&m<=59);

  d=30*h-5.5*m;
  float d1=0;

  if(d<0)
  {
    d1=d+360;
  }
  if(d>180)
  {
    d1=360-d;
  }
  else
  {
    d1=d;
  }

  printf("%.3f",d1);
  
}

