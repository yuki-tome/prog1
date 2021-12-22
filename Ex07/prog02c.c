#include <stdio.h>
#include "prog01.h"
#define N 20

Record input(void);
void output(Record);
int getage(Record);
int main()
{
  Record data[N];
  int i;

  printf("--------データ出力--------\n年齢基準日：2019年10月1日\n");
 
  for(i=0;i<N;i++){
  data[i]=input();
  if(data[i].gender==-1)break;
  printf("%2d人目:",i+1);
  output(data[i]);

  }
  return 0;
}
Record input(void){
  Record data;

  scanf("%s",data.familyname);
 

  scanf("%s",data.firstname);
  scanf("%d",&data.birthday[0]);

  scanf("%d",&data.birthday[1]);

  scanf("%d",&data.birthday[2]);

  if(scanf("%d",&data.gender)==-1)
    data.gender=-1;

  return data;
}

void output(Record data){

  if(data.gender==0){
    printf("名前(姓): %-10s%-10s %d年 %2d月%2d日生 年齢：%2d 男性\n",data.familyname,data.firstname,data.birthday[0],data.birthday[1],data.birthday[2],getage(data));
  }
  else if(data.gender==1){
    printf("名前(姓): %-10s%-10s %d年 %2d月%2d日生 年齢：%2d 女性\n",data.familyname,data.firstname,data.birthday[0],data.birthday[1],data.birthday[2],getage(data));
  }
}
int getage(Record data){
  if(data.birthday[1]<10||data.birthday[1]==10&&data.birthday[2]==1){
    return 2019-data.birthday[0];
  }
  else {
    return 2019-data.birthday[0]-1;
  }
}
  
