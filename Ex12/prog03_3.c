#include<stdio.h>
#include"prog03_1.h"
  void InputShape(Tri *a)
  {
    printf("Vertex1:");
    scanf("%lf%lf",&a->p[0].x,&a->p[0].y);
    printf("Vertex2:");
    scanf("%lf%lf",&a->p[1].x,&a->p[1].y);
    printf("Vertex3:");
    scanf("%lf%lf",&a->p[2].x,&a->p[2].y);
    
  }
