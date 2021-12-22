#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int rsrch(char *,char *);


int main(){

  FILE *fp;
  char ken[100],data[100];
  int naga,naga2,count=1;


  fp=fopen("/usr/share/lib/dict/words","r");
  if(fp==NULL){
    printf("Cannot open file \n");
    exit(1);
  }
  printf("Enter string to search : ");
  scanf("%s",ken);
  naga=strlen(ken);

  while(fscanf(fp,"%s",data)==1){
    naga2=strlen(data);
    if(naga2<naga);
    else if(rsrch(&data[naga2-naga],ken)==1){
      printf("%d : %s\n",count,data);
      count++;
    }
  }
  printf("Total %d words matched [ing]\n",count-1);

  return 0;
}
    
int rsrch(char *data,char *ken){
  int naga,i;
  naga=strlen(ken);
  for(i=0;i<naga;i++){
    if(data[i]!=ken[i])return 0;
  }
  return 1;
}

  
  
    
