#include <stdio.h>
#include <stdlib.h>
#include <float.h>


int main()
{
  double dai=0 , syo=DBL_MAX ,yomi;
  char in_filename[] = "data02.in";
  char out_filename[] = "data02.out";
  FILE *fpin, *fpout;

  if((fpin = fopen("data02.in","r")) == NULL)
    {
    printf("Failed to open: %s\n", in_filename);
    exit(1);
    }
  if((fpout = fopen("data02.out","w")) == NULL)
    {
    printf("Failed to open: %s\n", out_filename);
    fclose(fpin);
    exit(2);
    }

  while(fscanf(fpin,"%lf",&yomi) != EOF)
    {
      if(yomi>dai){
	dai=yomi;
      }
      if(yomi<syo){
	syo=yomi;
      }
    }
  fprintf(fpout, "max = %4.3f, min = %4.3f",dai,syo);

  fclose(fpout);
  fclose(fpin);

  return 0;
}
  
      
	    
  
  

  
