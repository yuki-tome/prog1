#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 100

#define TATE 5
#define YOKO 4

int main()
{
  char *arr[TATE],i;
  char buf[N],naga;
  

  for(i = 0; i < TATE; i++){
    printf("Input word #%d: ",i+1);
    scanf("%s",buf);
    naga=strlen(buf);
    arr[i] =(char *)malloc(sizeof(char) * (naga+1));
    strcpy(arr[i],buf);
  }
  
  for(i = 0; i < TATE; i++)
    printf("Word #%d: %s\n",i+1,arr[i]);
 
  for(i = 0; i < TATE; i++) free(arr[i]);

  return 0;
}

