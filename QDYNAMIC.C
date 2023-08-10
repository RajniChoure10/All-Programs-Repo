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
  struct que *t;
  *t=(struct que*)malloc(sizeof(struct que));


  if(front==NULL && rear==NULL)
  {
   printf("queue is empty");
  }
  else
  {
   rear->next=t;
   rear=t;
  }
 }

  void show()
 {
  struct que *temp;
  if(front==NULL && rear==NULL)
  {
   printf("queue is empty");
  }
  else
  {
   temp=front;
   while(temp!=0)
   {
    printf("%d",temp->data);
   }
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




