#include<stdio.h>

char grade_char(int);
int char_point(char);

int main()
{
  int hyo,tan,i=0,mgpa=0,mtan=0;
  double heikin;
  char c;
  int status;
  while(1){
    
  printf("評点と単位数を入力してください (Ctrl+Dで終了):");
  status = scanf("%d%d",&hyo,&tan);
  if(status == -1)break;
  printf("%d  点の評価は %c で，Grade Point (GP) は %d です． (%d 単位)\n",hyo,grade_char(hyo),char_point(grade_char(hyo)),tan);
  mgpa+=char_point(grade_char(hyo))*tan;
  mtan+=tan;
  i++;
	 }
  printf("\n");

  heikin=(double)mgpa/mtan;

  printf("Grade Point Average (GPA): %4.3f,  単位数: %d\n",heikin,mtan);
  

  return 0;
}
char grade_char(int x)
{
  char c;
  if(x<=34)c='F';
  else if (x<=49)c='D';
  else if (x<=64)c='C';
  else if (x<=79)c='B';
  else c='A';

  return c;
}
int char_point(char c)
{
  int a;
  if(c=='A')a=4;
  else if (c=='B')a=3;
  else if (c=='C')a=2;
  else a=0;

  return a;
}
  
