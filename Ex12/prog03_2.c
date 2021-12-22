#include <stdio.h>
#include "prog03_1.h" /* (1) */
 /* 必要に応じてプログラムを追加、修正 */
 
int main (){
  Tri ori[2];
  Ten aaa,bbb;
  double a,b,c,d;
  int i=0;

  printf("Input 1st triangle:\n");
  while(1)
    {
      InputShape(&ori[i]);
      if(IsTriangle(ori[i])==1){
	printf("V1: (%.8f,%f)\n",ori[i].p[0].x,ori[i].p[0].y);
	printf("V2: (%.8f,%f)\n",ori[i].p[1].x,ori[i].p[1].y);
	printf("V3: (%.8f,%f)\n",ori[i].p[2].x,ori[i].p[2].y);
	i++;
      }
      if(i==1) printf("Input 2nd triangle:\n");
      if(i==2)break;
    }
     	
  a=GetArea(ori[0]);
  b=GetArea(ori[1]);

  printf("Area of 1st one: %9.7f ",a);
  printf("Area of 2nd one: %9.7f\n",b);

  if(a>b) printf("The 1st one is larger than the 2nd one!\n");
  else if(b>a) printf("The 2nd one is larger than the 1st one!\n");

  aaa=GetCentroid(ori[0]);
  bbb=GetCentroid(ori[1]);
  
  printf("Gentroid of 1st one:(%f,%f)\n",aaa.x,aaa.y);
  printf("Gentroid of 2nd one:(%f,%f)\n",bbb.x,bbb.y);

return 0;
}
