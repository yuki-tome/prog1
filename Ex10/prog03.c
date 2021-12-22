#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "stulist4.h"

int main()
{
  int i,num,status;
  Record data;
  FILE *fp;
  char *in;

  in = (char *)malloc(20*sizeof(char));

  fp=fopen("Student.dat","r");
  if(fp==NULL){
    printf("Cannot open file Student.dat\n");
    exit(1);
  }
  head = make_1node(data, NULL);
  while(1){
    status=fscanf(fp,"%s%d%s",data.class,&data.id,data.name);
    if(status==EOF) break;
    insert(data);
  }
  

  listprint();

  while(1){
    

  printf("Input match data(class or ID) ->");
  if(scanf("%s",in) != 1)break;
  listprint_sel(in);
  printf("\n");
  
  }

  printf("\n");
  
  fclose(fp);
  return 0;
}

NodePointer insert(Record keydata)
{
  NodePointer newnode,n;

  if (finditem(keydata.id) == NULL) {
    n = head;
    while(1){
      if(n->next == NULL)break;
      n = n->next;
    }
      
    newnode = make_1node(keydata, n->next);
    n->next = newnode;

    return newnode;
  }
  else return NULL;
  }


void listprint(void)
{
  NodePointer n;

  printf("Head -\n");
  for (n = head->next; n != NULL; n = n->next) {
    printf(" %s %d %-14s\n",n->data.class,n->data.id,n->data.name);
  }
  printf("\n");
}

NodePointer finditem(int id)
{
  NodePointer n;

  for (n = head; n->next != NULL; n = n->next) {
    if (n->next->data.id == id) return n;
  }

  return NULL;
  }

NodePointer make_1node(Record keydata, NodePointer p)
{
  NodePointer n;

  if ((n = (NodePointer)malloc(sizeof(struct node))) == NULL) {
    printf("Error in memory allocation\n");
    exit(8);
  }

  n->data = keydata;
  n->next = p;

  return n;
}
void listprint_sel(char *a){
  NodePointer n;
  char moji[20];
  int naga;
  if('0'<=*a&&*a<='9'){

    naga=strlen(a);
   
    for (n = head->next; n != NULL; n = n->next) {
      sprintf(moji,"%d",n->data.id);
      if(strncmp(a,moji,naga)==0){
	printf(" %s %d %-14s\n",n->data.class,n->data.id,n->data.name);
      }
    }

  }
    else {
       for (n = head->next; n != NULL; n = n->next) {
	 if(strcmp(a,n->data.class)==0){
	   printf(" %s %d %-14s\n",n->data.class,n->data.id,n->data.name);
	 }
       }
    }
}

