#include<stdio.h>
struct que
{
 int data;
 struct que *next ;
}
*front=NULL,*rear=NULL;

struct que* allocateMemory(int val)
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

void reverseQ()
{
 struct que *p=NULL,*c=front,*n=NULL;
 while(c!=NULL)
 {
  n=c->next;
  c->next=p;
  p=c;
  c=n;
 }
 rear=front;
 front=p;
}

void delVal()
{
 if(front==NULL)
 {
  printf("Queue is empty");
 }
 else
 {
  struct que *temp;
  temp=front;
  front=front->next;
  free(temp);
 }
}

/*void deleteAll()
{
 while(rear==NULL)
 {
  delVal();
 }
}  */

void addAtPos(int val,int pos)
{
 struct que *t=allocateMemory(val);
 if(rear==NULL || pos==1)
 {
   front=rear=t;
 }
 else
 {
   struct que *temp=front;
   int c=1;
   while(c<pos-1 && temp->next!=NULL)
   {
    temp=temp->next;
    c++;
   }
   if(rear==temp)
   {
    rear->next=t;
    rear=t;
   }
   else
   {
    t->next=temp->next;
    temp->next=t;
   }
  }
 }

void delatpos(int pos)
{
 struct que *temp,*t;
 int val;
 int c=2;
 temp=front;

 if(pos==1)
 {
  val=delVal();
  return val;
 }

 while(c<pos)
 {
  temp=temp->next;
  c++;
 }
 val=temp->next->data;
 t=temp->next ;
 temp->next=t->next;
 free(t);
 return val;
}



void show()
{
 struct que *t=front;
 if(t==NULL)
 {
  printf("queue empty");
 }
 while(t!=NULL)
 {
 printf("%d ",t->data);
 t=t->next;
 }
}
 void main()
{
 clrscr();
 insert(10);
 insert(20);
 insert(30);
 insert(40);
 insert(50);
 show();
 printf("\n");

/* reverseQ();
 show();
 printf("\n");
 */

 delVal();
 show();
 printf("\n");
// deleteAll();
 //show();
// addAtPos(60,5);
// show();

 delatPos(2);
 show();
 getch();
}
