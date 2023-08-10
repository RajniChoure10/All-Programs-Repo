


#include<stdio.h>
int *ar=NULL;
int size=-1,capacity=0;

void allocateMemory()
{
 int i,*p;
 capacity+=5;
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


int search(int val)
{
 int i;
 for(i=0;i<=size;i++)
 {
  if(ar[i]==val)
  return i;
 }
 return -1;
}

void update(int oldval,int newval)
{
 int index;
 index= search(oldval);
 if(index!=-1)
  ar[index]=newval;
}

void deleteAll(int val)
{
 int index;
 while(1)
 {
  index =search(val);
  if(index!=-1)
   deleteA(index);
  else
  break;
 }
}

void deleteA(int index)
{
 int i;
 for(i=index;i<size;i++)
 {
  ar[i]=ar[i+1];
 }
 size--;
}

/*void up(int pos,int val)
{
 ar[pos-1]=val;
} */

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
 printf("cap:%d,size:%d\n",capacity,size);
 show();
 getch();
}
