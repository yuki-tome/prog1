#include <stdio.h>
#include <stdlib.h>
#define N 20

typedef struct{
  int  id;       /* ID    */
  char name[20]; /* 名前   */
  int score;    /* 点数　*/
  char grade;   /* 成績 */
} Record;

void PrintData1(Record);
void PrintData2(Record *);
int InputData(Record *);

int main(){
  Record data[N];
  int i,j;

    printf("値渡し\n");
    for(i=0;i<N;i++){

      if(InputData(&data[i])==EOF) break;

      PrintData1(data[i]);
    }

    printf("ポインタ（アドレス）渡し\n");

    for(j=0;j< i;j++){

      PrintData2(&data[j]);

      }
  return 0;
}

void PrintData1(Record member1){

  printf("%d %20s %d %c\n",member1.id,member1.name,member1.score,member1.grade);
 
}

void PrintData2(Record *member1){
 
  printf("%d %20s %d %c\n",member1->id,member1->name,member1->score,member1->grade);

}
int InputData(Record *member1){



  return scanf("%d %20s %d %c",&member1->id, member1->name,&member1->score,&member1->grade);

 
}
  
