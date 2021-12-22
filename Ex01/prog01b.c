#include<stdio.h>

int main()
{
  char c;

  printf("Input a character:");
  while(1){
    scanf("%c",&c);
    if(c=='\n') break;
    printf("ASCII code of a character '%c' is %d(0x%x).\n",c,c,c);
  }

  return 0;
}
