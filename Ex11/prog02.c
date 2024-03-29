
#include <stdio.h>
#include <math.h>
#define N 3

typedef struct {
  double  x; /* x座標 */
  double  y; /* y座標 */
} Point;

Point rotate_3(double, Point *);
void rotate_4(double, Point *);

int main()
{
  double rad, deg;
  Point a[N]={{3.0, 2.0},{6.0, 4.0},{0.0,0.0}},b1,b2[N];


  printf("回転角度[度]をいれて下さい\n");
  scanf("%lf", &deg);
  rad=deg*M_PI/180;
  printf("Theta %f [deg](%f [rad])\n",deg,rad);
  printf("center   : %f %f\n",a[0].x,a[0].y);
  printf("original : %f %f\n",a[1].x,a[1].y);
  
/*
 * ここに関数呼び出し及び関連するコードを書く
 */

  b1=rotate_3(rad,a);

  rotate_4(rad,a);

  printf("rotate_1 : %f %f\n",b1.x,b1.y);
  printf("rotate_2 : %f %f\n",a[2].x,a[2].y);

  return 0;
}

Point rotate_3(double rad, Point *a)
{
  Point temp,tyu;
  tyu.x=a[1].x-a[0].x;
  tyu.y=a[1].y-a[0].y;
  
  temp.x=tyu.x*cos(rad)+tyu.y*(-sin(rad));
  temp.y=tyu.x*sin(rad)+tyu.y*cos(rad);

  temp.x+=a[0].x;
  temp.y+=a[0].y;
  
  return temp; 
}

void rotate_4(double rad, Point *a)
{
  Point temp;
  a[1].x-=a[0].x;
  a[1].y-=a[0].y;

  temp.x=a[1].x*cos(rad)+a[1].y*(-sin(rad));
  temp.y=a[1].x*sin(rad)+a[1].y*cos(rad);

  a[2].x=temp.x+a[0].x;
  a[2].y=temp.y+a[0].y;
 
}

