#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc,char *argv[])
{
  int i,naga;
  char *ori;
  for(i=1;i<argc;i++){

    naga=strlen(argv[i]);

    if((strcmp(&argv[i][naga-3],".in"))==0){

      ori=(char *)malloc((naga+1)*sizeof(int));

      strcpy(ori,argv[i]);

      strcpy(&ori[naga-3],".out");
  }

    else{

      ori=(char *)malloc((naga+4)*sizeof(int));

      strcpy(ori,argv[i]);

      strcpy(&ori[naga],".out");

    }

    printf("%s -> %s\n",argv[i],ori);

    free(ori);
  }

  return 0;
}
      
      
	

