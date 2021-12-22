#include <stdio.h>
#include <string.h>

int main()
{
  int i, len;
  int start, stop;
  char str1[] = "The University of Aizu";
  char *p, *q;
  
  len = strlen(str1);
  printf("Input start and stop numbers (1 - %d, start <= stop): ", len);
  scanf("%d%d", &start, &stop);

  /* 通常の配列添字を使い、配列要素を順次参照する方法 */
  for(i = start-1 ; i < stop ; i++) {
    printf("%c", str1[i]);
  }
  printf("\n");
  
  /* 参照するアドレスをポインタ演算で計算する方法。pは固定。 */
  p = str1;
  for(i = start-1; i<stop; i++) {
    printf("%c",*(p+i));
  }
  printf("\n");

  /* ポインタ変数に格納されているアドレスそのものを変えていく方法 */
  for(q = p+start-1 ; q < p+stop ; q++) {
    printf("%c", *q);
  }
  printf("\n");
  return 0;
}

