#include<stdio.h>

struct que
 {
  int data;
  struct que *next;
 }
 *front=NULL,*rear=NULL;

 struct que *allocateMemory(int val)
 {
  struct que *t=(struct que*)malloc(sizeof(struct que));

   t->data=val;
   t->next=NULL;
   return t;
 }

 void insert(int val)
 {
  struct que *t=allocateMemory(val);
  if(rear==NULL)
  {
   front=rear=t;
  }
  else
  {
   rear->next=t;
   rear=t;
  }
 }

 void show()
 {
  int i;
  if(rear==NULL)
  {
   printf("queue is empty");
  }
  else
  {
   if(rear>=front)
   {
    for(i=front;i<=rear;i++)
    printf("%d",que[i]);
   }
  }


 void main()
 {
  clrscr();
  insert(10);
  insert(20);
  insert(30);
  insert(40);
  show();
  getch();
 }
