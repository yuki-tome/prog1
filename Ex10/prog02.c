#include <stdio.h>
#include <stdlib.h>

int myatoi(char *);

int main()
{
  char waki[20];
  int sei,kazu,i;

  printf("和暦(H30等): ");
  scanf("%s",waki);
  kazu = myatoi( &waki[1] );

  if(kazu==0){
     printf("数字を読み取れません\n");
    exit(2);
  }
  else{
  if(waki[0]=='R')sei=2019+kazu-1;
  else if(waki[0]=='H')sei=1989+kazu-1;
  else if(waki[0]=='S')sei=1926+kazu-1;
  else if(waki[0]=='T')sei=1912+kazu-1;
  else if(waki[0]=='M')sei=1868+kazu-1;
  }
  

  printf("西暦 (A.D.): %d\n",sei);
  

  return 0;
}
/* この後に関数 myatoi を作成する */
int myatoi(char *p){
  int hen=0,i=0,mai=1,kazu;
  while(1){
    if(*(p+i)==' ')i++;
    else break;
  }
  if(*(p+i)=='-'){
    mai=-1;
    i++;
  }
  else if(*(p+i)=='+')i++;


    while(1){
    
     if('0'<=*(p+i)&&*(p+i)<='9'){
      kazu=(int)*(p+i)-'0';
      hen=hen*10+kazu;
      i++;
    }
     else break;
    }
  
  return mai*hen;
}
