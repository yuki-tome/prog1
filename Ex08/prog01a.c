#include <stdio.h>

typedef struct{
  int  id;       /* ID    */
  char name[20]; /* 名前   */
  int score;    /* 点数　*/
  char grade;   /* 成績 */
} Record;

void PrintData1(Record);
void PrintData2(Record *);

int main(){

  Record member1={12345,"Kondoh",91,'A'},member2={12346,"Okita",60,'C'};

  printf("値渡し\n");
  PrintData1(member1);
  PrintData1(member2);

  printf("ポインタ（アドレス）渡し\n");
  PrintData2(&member1);
  PrintData2(&member2);

  return 0;
}

void PrintData1(Record member1){

  printf("%d %20s %d %c\n",member1.id,member1.name,member1.score,member1.grade);
 
}

void PrintData2(Record *member1){
 
  printf("%d %20s %d %c\n",member1->id,member1->name,member1->score,member1->grade);

}
