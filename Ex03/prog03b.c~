#include <stdio.h>
#include <stdlib.h>
#define MAX 1000

    int main()
    {
 
      FILE *fpin1, *fpin2;

      char buf[MAX],word[MAX];
      int a,b;
      int i,j,n;
      int diff=0;

      
      /* 入力ファイルを開く。 */
      if ((fpin1 = fopen("data03.out", "r")) == NULL)
      {
        printf("Failed to open: %s\n","data03.out");
        exit(1);
      }

      if ((fpin2 = fopen("data03_answer.out", "r")) == NULL)
      {
        printf("Failed to open: %s\n","data03_answer.out" );
	fclose(fpin1);
        exit(2);
      }

      
   /* バッファの最大数までデータを読み込む */

      for (j = 0; j < MAX; ++j)
  {
    if ((a = fgetc(fpin1)) == EOF)
      break;
    buf[j] = (char)a;

    if ((b = fgetc(fpin2)) == EOF)
      break;
 
    word[j] = (char)b;
  }

 
  /* バッファが最大数まで到達してもなおEOFにならない場合はバッファあふれとしてエラー処理する。
  */
      if (j == MAX )
  {
    printf("Buffer overflow !\n");
    exit(3);
  }
  for(n=0;n<=j;n++){

  if(buf[n] != word[n]){
    printf("Two files are different at %d byte.\n",n+1);
    exit(4);
	}
  }
	printf("Two files are identical.\n");

	/* 開いた入出力ファイルをそれぞれ忘れずに閉じる。 */
      fclose(fpin2);
      fclose(fpin1);
      
     
      return 0;
    }
