#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define N 20000
#define LOOP 20000

typedef struct {
  int data[N];    /* N個の要素を持つ配列 */
  int max;    /* データの最大値         */
  int min;    /* データの最小値         */
  double ave; /* データの平均値         */
} My_Array;

void FindMember1(My_Array *);
My_Array FindMember2(My_Array);

int main()
{
  int i;
  My_Array A;
  time_t start,end;
  double keika;

  srand((unsigned int)time(NULL));

   for(i=0;i<N;i++){
    A.data[i]=rand()%1000;
   }
    
  start = clock();
  for(i = 0; i < LOOP; i++) FindMember1(&A);     /* 関数呼び出し */
  end = clock();
  keika = (end-start)/(double)CLOCKS_PER_SEC;
  printf("Call by FindMember1 : %f sec\n",keika); /* 経過時間の表示 */

  start = clock();
  for(i = 0; i < LOOP; i++) A=FindMember2(A);    /* 関数呼び出し */
  end = clock();
  keika = (end-start)/(double)CLOCKS_PER_SEC;
  printf("Call by FindMember2 : %f sec\n",keika); /* 経過時間の表示 */

  return 0;
}


void FindMember1(My_Array *x){
  int i;
  (*x).ave=0;
  for(i=0;i<N;i++){

    (*x).ave+=(*x).data[i];

    if(i==0){
      (*x).max=(*x).data[i];
      (*x).min=(*x).data[i];
    }
    else if((*x).max<(*x).data[i]){
      (*x).max=(*x).data[i];
    }
    else if((*x).min>(*x).data[i]){
      (*x).min=(*x).data[i];\
    }
  }
  (*x).ave=(*x).ave/i;
}
My_Array FindMember2(My_Array x){
  int i;
  x.ave=0;
  for(i=0;i<N;i++){

    x.ave+=x.data[i];
    if(i==0){
      x.max=x.data[i];
      x.min=x.data[i];
    }
    else if(x.max<x.data[i]){
      x.max=x.data[i];
    }
    else if(x.min>x.data[i]){
      x.min=x.data[i];
    }
  }
  x.ave=x.ave/i;
  return x;
}
  
