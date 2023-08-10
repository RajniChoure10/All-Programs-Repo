#define size 5

int que[size];
int front =-1,rear=-1;

void insert(int val)
{
  if(rear==size-1)
  {
   printf("Queue is full");
  }
  if(rear==-1)
  {
   rear=front=0;
  }
  else
   rear++;
   que[rear]=val;
}

 void show()
{
 int i;
 if(front==-1)
 {
  printf("queue is empty");
  return;
 }
 for(i=front;i<=rear;i++)
 {
  printf("%d\n",que[i]);
 }
}

void main()
{
 int val;
 clrscr();
 while(1)
 {
  insert(10);
  insert(20);
  insert(30);
  insert(40);
  break;
 }
 show();
getch();
}




