
#include <stdio.h>
#include <string.h>

#define NUM 4

int main()
{
  int i,j;
  char *str[NUM]={"Wakamatsu","Hongou","Takada","Bange"};
  char *prefix="Aizu";
  char newstr[NUM][14];

  for( i = 0; i < NUM; i++ ){
    printf("%s\n", str[i]);   /* 元の文字列の表示 */
  }

  for( i = 0; i < NUM; i++ ){
    strcpy(newstr[i],"Aizu");
  }


  for( i = 0; i < NUM; i++ ){
    strcpy(&newstr[i][4],str[i]);
      for(j=1 ; newstr[i][j]!='\0' ;j++){
	if('A'<= newstr[i][j] && newstr[i][j] <= 'Z')
	  newstr[i][j]=newstr[i][j]+32;
      }
  }

  
	  
	

  for( i = 0; i < NUM; i++ ){
    printf("%s\n", newstr[i]);   /* 新しく作成した文字列の表示 */
  }


  return 0;
}


  
