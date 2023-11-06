#include <stdio.h>
#include <stdlib.h>
#include<assert.h>

int main(void) 
{
  int min;
  double e;
  scanf ("%d",&min);

  if(min<=800)
  {
    e=min*0.9;
  }
  if(min>800 && min<=1500)
  {
    e=min*0.9*0.9;
  }
  if(min>1500)
  {
    e=min*0.9*0.79;
  }
  printf("%.1f",e);
}

