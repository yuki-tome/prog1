#include <stdio.h>
#include "prog01.h"

int main()
{
  Record data;
  printf("データを入力して下さい\n");
  printf("名前（姓）        -> ");
  scanf("%s",data.familyname);
  printf("名前（名）        -> ");
  scanf("%s",data.firstname);
  printf("生まれた年（西暦） -> ");
  scanf("%d",&data.birthday[0]);
  printf("生まれた月        -> ");
  scanf("%d",&data.birthday[1]);
  printf("生まれた日        ->");
  scanf("%d",&data.birthday[2]);
  printf("性別(0:男性,1:女性) -> ");
  scanf("%d",&data.gender);

  if(data.gender==0)
  printf("名前(姓): %s\n名前(名): %s\n生年月日: %d年 %d月%d日(男性)\n",data.familyname,
	 data.firstname,data.birthday[0],data.birthday[1],data.birthday[2]);
  else
    printf("名前(姓): %s\n名前(名): %s\n生年月日: %d年 %d月%d日(女性)\n",data.familyname,
	 data.firstname,data.birthday[0],data.birthday[1],data.birthday[2]);


  return 0;
}
  
