#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
 * MAXDATA:最大データ数
 * LENIP  :IPアドレスの最長文字数+1
 * LENHOST:最長文字数+1
 */
#define MAXDATA 1024
#define LENIP   16
#define LENHOST 256

int main(){
  int i;
  int ndata;
  FILE *fp;
  char ipadr[MAXDATA][LENIP];
  char hostname[MAXDATA][LENHOST];
  char query[LENHOST];
  int flag;
  /* その他必要な変数を定義して良い */
 

  /*** データの読み出し処理 ***/
  /* ファイルのオープン */
    fp = fopen("stdhosts.txt","r");
  if (fp == NULL) {
    printf("Cannot open file!\n");
    exit(1);
  }
  /* データの読み出し */
  for( i=0 ; i < MAXDATA ; i++ ){
    /* ２項目読めなければループを抜ける */
    if (fscanf(fp,"%s %s",
      ipadr[i],hostname[i]) != 2) break;
  }
  ndata=i;

  /*** 問合せの処理 ***/
  while(scanf("%s",query)==1){
      for( i=0 ; i<=ndata ; i++){
      
   /* 文字列の配列の使用方法に注意      *
    * hostname[xxx]でxxx番目の文字列を示す */
      if(strcmp(hostname[i],query)==0){
	printf("%s %s\n",hostname[i],ipadr[i]);
	flag=1;
      }
      }
      if(flag!=1){
	printf("%s : Not Found!\n",query);
      }
      flag=0;
  }
  fclose(fp);

  return 0;
}
