#include <stdio.h>
#include "prog01.h"

Record input(void);
void output(Record);

int main()
{
  Record data;
  data=input();
  output(data);
  
  return 0;
}
Record input(void){
  Record data;

  printf("名前（姓）        -> ");
  scanf("%s",data.familyname);
  printf("名前（名）        -> ");
  scanf("%s",data.firstname);
  printf("生まれた年（西暦） -> ");
  scanf("%d",&data.birthday[0]);
  printf("生まれた月        -> ");
  scanf("%d",&data.birthday[1]);
  printf("生まれた日        -> ");
  scanf("%d",&data.birthday[2]);
  printf("性別(0:男性,1:女性) -> ");
  scanf("%d",&data.gender);

  return data;
}

void output(Record data){

  if(data.gender==0){
  printf("名前(姓): %s\n名前(名): %s\n生年月日: %d年 %d月%d日(男性)\n",data.familyname,
	 data.firstname,data.birthday[0],data.birthday[1],data.birthday[2]);
  }
  else if(data.gender==1){
    printf("名前(姓): %s\n名前(名): %s\n生年月日: %d年 %d月%d日(女性)\n",data.familyname,
	   data.firstname,data.birthday[0],data.birthday[1],data.birthday[2]);
  }
}
