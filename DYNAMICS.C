#include<stdio.h>
struct stk
{
 int data;
 struct stk * next;
}
*top=NULL;

struct stk* allocateMemory(int val)
{
 struct stk *t=(struct stk*) malloc(sizeof(struct stk));
 t->data=val;
 t->next=NULL;
 return t;
}
void push(int val)
{
 struct stk *t= allocateMemory(val);
 if(top==NULL)
 {
  top =t;
 }
 else
 {
  t->next = top;
  top = t;
 }
}

int pop()
{
 int val;
 struct stk *t;
 if(top==NULL)
 {
  return -1;
 }
 val=top->data;
 t=top;
 top=top->next;
 free(t);
 return val;
}

int peek()
{
 if(top==NULL)
 {
  return -1;
 }
 return top->data;
}

void addAtPos(int val ,int pos)
{
 struct stk *t=allocateMemory(val);
 if(top==NULL)
 {
  top =t;
 }
 else
 {
  int c=1;
  struct stk *temp= top;
  while(c<pos-1 && temp->next!=NULL)
  {
   temp=temp->next;
   c++;
  }
  t->next=temp->next;
  temp->next=t;
 }
}

/*void deleteLast()
{
  struct stk *temp=top;
  while(temp->next->next!=NULL)
  {
   temp=temp->next;
  }
  temp->next=NULL;

} */


void addAtLast(int val)
{
 //int c=1;
 struct stk *t=allocateMemory(val);
 if(top==NULL)
 {
  top=t;
 }
 else
 {
  struct stk *temp=top;
  while(temp->next!=NULL)
  {

   temp=temp->next;
  }
  temp->next=t;

 }
 //printf("%d",c);
}

int deleteFromLast()
{
 int val;
 struct stk *t=top;
  if(t==NULL)
  {
   return -1;
  }
  else if(t-> next==NULL)
  {
   val=t->data;
   free(t);
   top=NULL;
  }
  else
  {
   while(t->next->next!=NULL)
   {
    t=t->next;
   }
   val=t->next->data;
   free(t->next);
   t->next=NULL;
  }
  return val;
}

void show()
{
 struct stk *t=top;
 printf("\n");
 while(t!=NULL)
 {
  printf("%d ",t->data);
  t=t->next;
 }
}

void main()
{
 int i;
 clrscr();
 for(i=1;i<=4;i++)
 {
  push(10*i);
 }
 show();


 //printf("\n%d ",pop()); //show deleted val.20
 //show();

// addAtLast(70);
 //show();

// addAtLast(80);
// show();

 //printf("\n%d",peek());
// show();

 //addAtPos(100,3);
 //show();
  deleteFromLast();
  show();
  getch();
}