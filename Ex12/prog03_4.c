#include <stdio.h>
#include "prog03_1.h" /* (1) */


int IsTriangle(Tri data){
  int hantei=1;
 
  if(data.p[0].x==data.p[1].x&&data.p[0].y==data.p[1].y||data.p[2].x==data.p[1].x&&data.p[2].y==data.p[1].y||data.p[0].x==data.p[2].x&&data.p[0].y==data.p[2].y){
    printf("These points can not form atriangle!\nAgain,input 1st triangle:\n");
    hantei=0;
  }
  else if(data.p[0].x==data.p[1].x&&data.p[1].x==data.p[2].x||data.p[0].y==data.p[1].y&&data.p[1].y==data.p[2].y){
    printf("These points can not form atriangle!\nAgain,input 1st triangle:\n");
    hantei=0;
  }
  else
    return hantei;
}
  
