#include <stdio.h>
#define INDI 3
#define INDJ 4

int main()
{
  int a[INDI][INDJ] = {
    { 1,  8, 11,  3},
    { 9,  2,  0,  7},
    { 5, 10,  4,  6},
  };
  int n,flag=0,j,i;
  /* 必要に応じて変数宣言を追加 */

  printf("数値を入力してください: ");
  scanf("%d", &n);

  for(i=0;i<INDI;i++){
    for(j=0;j<INDJ;j++)
      {
      if(n==a[i][j])
	{
	flag=1;
	break;
	}
      
      }
    if (flag==1)
      break;
  }
    if (flag==1){
      printf("a[%d][%d] が %d です\n",i,j,n);
    }
     else {
      printf("2次元配列 a の要素に %d はありません\n",n);
    }

  return 0;
}

