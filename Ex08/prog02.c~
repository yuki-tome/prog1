#include <stdio.h>
#include <math.h>
typedef struct {
  double  x; /* x座標 */
  double  y; /* y座標 */
} XY; /* 平面上の点 */

typedef struct {
  XY center;
  XY p;
} CIRCLE; /* centerを中心点、pを円周上の点とする円 */

CIRCLE input1(void);   /* データを読み込んだ構造体を戻す */
void input2(CIRCLE *); /* 構造体のポインタを渡し、そこにデータを読み込む */

int main(){

  CIRCLE data1,data2;
  double  r, length, area;

  printf("データの入力（構造体を返す関数）：\n");
  data1 = input1();

  r=sqrt((data1.center.x-data1.p.x)*(data1.center.x-data1.p.x)+(data1.center.y-data1.p.y)*(data1.center.y-data1.p.y));
  length=2*r*M_PI;
  area=r*r*M_PI;

  printf("input1 : r, length, area : %.6f, %.6f, %.6f\n",r,length,area);

  printf("データの入力（構造体ポインタを使う関数）：\n");
  input2(&data2);

  r=sqrt((data2.center.x-data2.p.x)*(data2.center.x-data2.p.x)+(data2.center.y-data2.p.y)*(data2.center.y-data2.p.y));
  length=2*r*M_PI;
  area=r*r*M_PI;

  printf("input2 : r, length, area : %.6f, %.6f, %.6f\n",r,length,area);

  return 0;
}

CIRCLE input1(void){

  CIRCLE data;
  
  scanf("%lf %lf %lf %lf",&data.center.x,&data.center.y,&data.p.x,&data.p.y);

  return data;
}
void input2(CIRCLE *data){

  scanf("%lf %lf %lf %lf",&(*data).center.x,&(*data).center.y,&(*data).p.x,&(*data).p.y);

}

