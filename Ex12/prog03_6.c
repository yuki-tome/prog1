#include<stdio.h>
#include"prog03_1.h"

Ten GetCentroid(Tri a)
{
  Ten g;
  g.x=(a.p[0].x+a.p[1].x+a.p[2].x)/3;
  g.y=(a.p[0].y+a.p[1].y+a.p[2].y)/3;
  return g;
}
    
