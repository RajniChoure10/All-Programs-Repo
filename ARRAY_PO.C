

/*
 int Check(int a[],int val,int index)
{
 int i;
 for(i=0;i<=index;i++)
 {
  if(a[i]==val)
  return 1;
 }
 return 0;
}

void Delete(int a[],int index,int size)
{
 int i;
 for(i=index;i<size-1;i++)
 {
  a[i]=a[i+1];
 }
}

void main()
{
 int a[]={1,2,3,4,5,5,6,6,7,8};
 int size=sizeof(a)/2;
 int i;
 clrscr();

 for(i=0;i<size;i++)
 {
  if(Check(a,a[i],i-1))
  {
   Delete(a,i,size);
   size--;
   i--;
  }
 }
  for(i=0;i<size;i++)
 {
  printf(" %d",a[i]);
  }
  getch();
 }
 */

/*void main()
{
 int a[]={5,6,7,8,9,2,3,4};
 int i;
 int m,sm;
 int size= sizeof(a)/sizeof(int);
 clrscr();
 if(a[0]>a[1])
 {
  m=a[0];
  sm=a[1];
 }
 else
 {
  m=a[1];
  sm=a[0];
 }
  for(i=2;i<size;i++)
 {
  if(a[i]>m)
  {
   sm=m;
   m=a[i];
  }
  else if(a[i]<m && a[i] >sm)
  {
   sm =a[i];
  }
 }
 printf("second max %d ",sm);
 getch();
}
*/


/*
void main()
{
 int a[10]={7,4,7,2,5,0,1,3,8,6};
 int i,f=0;
 int s=5;
 clrscr();
 for(i=0;i<10;i++)
 {
  if(a[i]==s)
  {
   f=1;
   printf("%d is found at %d position",s,i+1);
  }
 }
 if(f==0)
 printf("not found");
 getch();
}
*/

/*
int count(int a[],int val,int size)
{
 int i,c=0;
 for(i=0;i<size;i++)
 {
  if(a[i]==val)
  c++;
 }
 return c;
}

int check(int a[],int val,int last)
{
 int i;
 for(i=0;i<=last;i++)
 {
  if(a[i]==val)
  {
   return 0;
  }
 }
 return 1;
}

void main()
{
 int a[]={3,4,5,2,6,7,8,9,4,5,6,2,8,3,5,8};
 int size=sizeof(a)/sizeof(int);
 int c=0,i,j;
 clrscr();
 for(i=0;i<size;i++)
 {
  if(check(a,a[i],i-1))
  {
   c=count(a,a[i],size);
   printf("%d -> %d\n",a[i],c);
  }
 }
 getch();
}
*/

 /*void dump(char *p1,char *p2)
{
 while(*p1++ = *p2++);
}
 void main()
 {
  char str[]="hello javapr JP";
  char str[]="java";
  dump( str1, str2);
  clrscr();
  puts(str1);
  puts(str2);
 getch();
}
*/


/*void main()
{
 char s1[40]="abcdf";
 char s2[]="xyz";
 strcat(s1+2,s2+1);
 clrscr();
 put(s1);
 put(s2);
 getch();
}*/


/*void main()
{
 char s1[40]="abcdef";
 char *s2="javapr JP";
 char *s3="javapr";
 s3=s2+2;
 s2=s1+2;
 ++*s2;
 ++*s3;
 clrscr();
 puts(s1);
 puts(s2);
 puts(s3);
getch();
}*/


	 //34//
/*void main()
{
 char str1[20]="hell dollop info";
 char str2[20]="hell dollopinfo";
 clrscr();
 strcpy(str1+6,str2+6);
 puts(str1);
 puts(str2);
 getch();
}*/

/*void main()
{
 char str[5]={'a','b','c','d'};
 clrscr();
 printf("%s",str);
 getch();
}*/ //abcd// 26.
