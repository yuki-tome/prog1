#include <stdio.h>
#include <stdlib.h>
#include "stulist.h"

int main()
{
  int i,num;
  Record data;

  printf("Head -\n");
  head = make_1node(data, NULL);

  while(1){

  printf("Insert new data: (class ID name) ->");
  if(scanf("%s%d%14s",data.class,&data.id,data.name) != 3)break;
    if (insert(data) == NULL) printf("Data %d is already on the list\n", num);
    
    listprint();
  }

  printf("\n");
  

  return 0;
}

NodePointer insert(Record keydata)
{
  NodePointer newnode;

  if (finditem(keydata.id) == NULL) {
    newnode = make_1node(keydata, head->next);
    head->next = newnode;

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
