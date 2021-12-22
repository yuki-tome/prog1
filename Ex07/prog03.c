#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 20

typedef struct{
  char  sid[8];
  char  surname[10];
  int   score[4];
  char  grade;
  double ave;
  int sum;
} Record;

void output(Record);
char hantei(Record);

int main(int argc,char *argv[]){

  Record data[N];
  FILE *fp;
  int i,flag;
  char nyu[100];

 if((fp=fopen(argv[1],"r"))==NULL){
    fprintf(stderr,"Error!  Usage: ./a.out datafilename\n");
    exit(1);
  }
  for(i=0;i<N;i++){
    if((fscanf(fp,"%s",data[i].sid))==-1)break;
    fscanf(fp,"%s",data[i].surname);
    fscanf(fp,"%d",&data[i].score[0]);
    fscanf(fp,"%d",&data[i].score[1]);
    fscanf(fp,"%d",&data[i].score[2]);
    fscanf(fp,"%d",&data[i].score[3]);
  
  data[i].sum=data[i].score[0]+data[i].score[1]+data[i].score[2]+data[i].score[3];
  data[i].ave=(double)data[i].sum / 4;

  output(data[i]);
  }

  while(1){
    printf("Input a student name/ID : ");
    if((scanf("%s",nyu))==EOF)break;
    flag=0;

    if('0'<=nyu[0]&&nyu[0]<='9'){
      for(i=0;i<N;i++){
	if((strcmp(nyu,data[i].sid))==0){
	  flag=1;
	  break;
	}
      }
    }
    else {
       for(i=0;i<N;i++){
	if((strcmp(nyu,data[i].surname))==0){
	  flag=1;
	  break;
	}
       }
    }

    if(flag==1){
      output(data[i]);
    }
    else printf("This student does not exist !\n");
  }
  printf("\n");
   
  fclose(fp); 
  return 0;
}
void output(Record x)
{
  printf("%s   %-9s %3d  %3d  %3d  %3d  %d  %2.1f  %c\n",x.sid,x.surname,x.score[0],x.score[1],x.score[2],x.score[3],x.sum,x.ave,hantei(x));
}

char hantei(Record a)
{
  if(a.ave>=80.0) return 'A';
  else if(a.ave>=65.0) return 'B';
  else if(a.ave>=50.0) return 'C';
  else if(a.ave>=35.0) return 'D';
  else return 'F';
}





