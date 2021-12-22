#include <stdio.h>
#include <stdlib.h>

char grade_char(int );

int main (int argc,char *argv[])
{
  int i;
  int kazu[1000];
  
  for(i=1;i<argc;i++){

    kazu[i]=atoi(argv[i]);

    printf("Score: %2d   Mark: %C\n",kazu[i],grade_char(kazu[i]));
  }
}
char grade_char(int x)
{
  char c;
  if(x<=34)c='F';
  else if (x<=49)c='D';
  else if (x<=64)c='C';
  else if (x<=79)c='B';
  else c='A';

  return c;
}
