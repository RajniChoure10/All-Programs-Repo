#include<stdio.h>
int *ar=NULL;
int size=-1,capacity=0;

void allocateMemory()
{
 int i,*p;
 capacity =capacity+5;
 p=(int*)malloc(capacity*sizeof(int));
 for(i=0;i<=size;i++)
 {
  p[i]=ar[i];
 }
 free(ar);
 ar=p;
}

 void add(int val)
 {
  if(ar==NULL || capacity==size+1)
  {
   allocateMemory();
  }
  ++size;
  ar[size]=val;
 }

 void show()
 {
  int i;
  for(i=0;i<=size;i++)
  {
   printf("%d",ar[i]);
  }
 }
 void main()
 {
  int i;
  clrscr();
  for(i=1;i<=10;i++)
  {
   add(10*i);
  }
  printf("cap: %d, size: %d\n",capacity , size);
  show();
  getch();
 }

