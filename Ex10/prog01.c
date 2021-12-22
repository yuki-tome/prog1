#include <stdio.h>

int myatoi(char *);

int main()
{
  char str2[][20]={"  1632",
                   " -13.18",
                   "+48K",
                   " -987,654",
                   "+-55",
                   "x86",
                   "2020/07/24",
                   ""};
  int ival, i;

  for ( i=0; str2[i][0]!='\0'; i++ ){
    ival = myatoi( str2[i] );
    printf("string:%s\n", str2[i]);
    printf("value:%d\n", ival);
  }
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
