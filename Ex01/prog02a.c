#include<stdio.h>
#define TRUE 1
#define FALSE 0
int isAlpha(char);
int main()
{
   char c;

  printf("Input a character:");
  while(1){
    scanf("%c",&c);
    if(c=='\n') break;
    printf("ASCII code of a character '%c' is %d(0x%x).",c,c,c);
    if(isAlpha(c)==1){
      printf("It's an alphabetic character.\n");
	}
    else printf("It's a non-alphabetic character.\n");
	   
	   }

  return 0;
}

int isAlpha(char c)
{
  int a;
  if(('A'<=c&&c<='Z')||('a'<=c&&c<='z'))
    a=TRUE;
  else a=FALSE;
  return a;
}

  

  
  
  


 
