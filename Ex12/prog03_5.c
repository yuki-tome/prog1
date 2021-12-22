#include <stdio.h>
#include "prog03_1.h"

double GetArea(Tri a)
 {
   double area;

   area=((a.p[0].x-a.p[2].x)*(a.p[1].y-a.p[2].y)-(a.p[1].x-a.p[2].x)*(a.p[0].y-a.p[2].y))/2;

   if(area<0) area=(-1)*area;

   return area;

 }

   
   
