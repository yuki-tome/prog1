    #include <stdio.h>
#include <string.h>
     
    #define N 256 /* ??? を適切な数字にせよ。 */
     
    int main()
    {
      char str[N], str_new[N];
      int i;
     
      printf("Input : ");
      scanf("%s", str); /* 1単語を標準入力から入力 */
     
      /* 入力した単語を 1 文字ずつチェックし、英数字（すなわち0-9, A-Z, a-z）ならそのまま str_new にコピー、
       * それ以外なら str_new に'_'を代入する。 str_new の末尾の処理も必要。 */

      for(i=0;str[i]!='\0';i++){
	if('0'<=str[i]&&str[i]<='9'||'A'<=str[i]&&str[i]<='Z'||'a'<=str[i]&&str[i]<='z')
	  str_new[i]=str[i];
	else str_new[i]='_';
      }
      printf("Before : %s\n", str);
      printf("After  : %s\n", str_new);
     
      return 0;
    }
