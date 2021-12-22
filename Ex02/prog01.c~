#include<stdio.h>

double seqavg(double);


int main()
{
  double data,average;
  int i=0,status=0;
  while(1){
  printf("データを入力して下さい:");
  status=scanf("%lf",&data);
  if (status==-1) break;
  i++;
  average=seqavg(data);
  printf("データの個数 = %d，ここまでの平均 = %7.6f\n",i,average);
  
  }
  printf("\n");

  printf("最終的な平均値は%7.6fです。\n",average);

  return 0;
}

double seqavg(double d)
{
  static int x=0;
  static double heikin=0;
  x++;
  heikin=(double)(heikin*(x-1)+d)/x;


  return heikin;
}
  
  
  
  
  
