    #include <stdio.h>
    #include <stdlib.h>
    #define WORD 1000

char komoji(char);
char omoji(char);
char zhen(char);

     
    int main()
    {
      char in_filename[] = "data01.in"; /* 文字配列の初期化は Lec04-14,15 参照 */
      char out_filename[] = "data01.out";
      FILE *fpin, *fpout;
      char word[WORD];
      int wc=0;
      int i;
     
      char c;
     
      /* 読み込み専用でファイル in.txt を開く。
      * ファイルオープンに失敗した場合はエラーを表示して終了。
      */
      if ((fpin = fopen("data01.in", "r")) == NULL)
      {
        printf("Failed to open: %s\n", in_filename);
        exit(1);
      }
     
      /* 書き込み専用でファイル out.txt を開く。
      * ファイルオープンに失敗した場合はエラーを表示して終了。
      * その際、上で開いた入力ファイルを忘れずに閉じる。
      */
      if ((fpout = fopen("data01.out", "w")) == NULL)
      {
        printf("Failed to open: %s\n", out_filename);
        fclose(fpin);
        exit(2);
      }
     
      /* fpin を介して入力ファイルから 1 文字ずつ読み込み、
      * そのまま fpout を介して出力ファイルに書き込む。
      * 入力ファイルを最後まで読み込んだらループを抜ける。
      */
      while (fscanf(fpin, "%c", &c) != EOF)
      {
	word[wc]=c;
	wc++;
      }
      for(i=0;i<wc;i++){
       
        fprintf(fpout, "%c",komoji(word[i]));
      }
      fprintf(fpout, "\n\n");

      for(i=0;i<wc;i++){

	fprintf(fpout, "%c",omoji(word[i]));
      }
      fprintf(fpout, "\n\n");

      for(i=0;i<wc;i++){
	
        fprintf(fpout, "%c",zhen(word[i]));
      }

	
      
     
      /* 開いた入出力ファイルをそれぞれ忘れずに閉じる。 */
      fclose(fpout);
      fclose(fpin);
     
      /* 正常終了を表す値0を返して終了。 */
      return 0;
    }

char komoji(char w)
{
  if('A'<=w&&w<='Z'){
    w=w+32;}
  return w;
}
char omoji(char w)
{
  if('a'<=w&&w<='z'){
	  w=w-32;
	}
  return w;
}
char zhen(char w)
{
  if('a'<=w&&w<='z'){
	  w=w-32;
	}
	else if('A'<=w&&w<='Z'){
	  w=w+32;
	}
  return w;
}

  
