
void xyz(int x)
{
 printf("\n%d",x);
 if(x)
  xyz(x-1);
 printf("\n%d",x);
 }
 void abc(int a)
 {
  printf("\n%d",a);
  xyz(a);
  if(a)
  abc(a-1);
  printf("\n%d",a);
 }
 void main()
 {
  clrscr();
  abc(2);
  getch();
 }



/*void display(int a)
 {
  static int b=1;
  printf("%d %d ",a,b);
  if(--a)
   display(a);
   printf("%d %d",a,b);
 }
 void main()
 {
  clrscr();
  display(2);
  getch();
 }
     */
/*
# include<stdio.h>

 void reverse(int i);
 int main()
 {
  reverse(1);
  getch();
 }
 void reverse(int i)
 {
 if(i>5)
  return;
 printf("%d",i);
 return reverse((i++,i));

}

  */

/*
 #include<stdio.h>
 int main()
 {
  reverse(1);
 }
 int reverse(int i)
 {
  if(i>5)
   exit(0);
  printf("%d",i);
    return reverse(i++);
 }
 */


/*
 int isprime(int n)
 {
  static int i=2,f=1;
  if(n%i++==0)
   f=0;
  else if(i<=n/2)
   isprime(n);
   return f;
}


 void main()
 {
  int n=13;
  clrscr();
  if(isprime(n))
  {
    printf("%d is prime no", n);
  }
   else
  {
    printf("%d is not prime no.",n);
  }
    getch();
 }
  */
/*extern int g=10;
 void abc()
 {
  static int s=5;
  int a;
  ++g;
  a=++s;
  printf("%d %d %d",a,s,g);
  if(a<=8)
  abc();
  printf("%d %d %d",a,s,g);
 }
  void main()
  {
   void xyz();
   clrscr();
   ++g;
   xyz();
  }
  void xyz()
  {
   static int s;
   auto int a;
   a=s++;
   ++g;
   printf("%d %d %d",a,s,g);
   abc();
   if(a<=2)
   xyz();
   printf("%d %d %d",a,s,g);
   getch();
  }
  int g;
*/



/*int g;
void abc()
{
   static int s;
   auto int a;
   ++g;
   a=++s;
   printf("%d %d %d ",a,s,g);
   if(a<=2)
     abc();
   printf("%d %d %d ",a,s,g);
}
void main()
{
  void xyz();
  clrscr();
  ++g;
  abc();
  xyz();
}
void xyz()
{
  static int s=10;
  int a;
  a=s++;
  ++g;
  printf("%d %d %d ",a,s,g);
  if(a<=12)
    xyz();
  printf("%d %d %d ",a,s,g);
  getch();
}
*/

/*void xyz()
 {
  static int s=5;
  int a;
  a=s++;
  printf("%d %d ",a,s);
  if(a<=7)
  xyz();
  printf("%d %d ",a,s);
  }
 void main()
 {
  clrscr();
  xyz();
  xyz();
  getch();
 }*/

/* static int i;
 void show(int n1, int n2)
 {
  printf("%4d",n1*i);
  if(n1<n2)
   show(++n1,n2);
 }
 void main()
 {
  int i,n1=2,n2=10;
  clrscr();
  for(i=1;i<=10;i++)
  {
   ::i++;
   show(n1,n2);
   printf("\n");
  }
  getch();
 }
  */

/*  int fact(int n)
  {
   if(n==0 || n==1)
    return 1;
   else
    return n*fact(n-1);
  }
  void main()
  {
   clrscr();
   printf("%d",fact(5));
   getch();
  }
  */


/* int power(int b,int p)
 {
  if(p>1)
   return b*power(b,p-1);
  else
    return b;
 }
   void main()
  {
    int r;
    clrscr();
    r=power(2,3);
    printf("power is:%d",r);
    getch();
   }*/

/* void xyz(int x)
 {
  printf("d",x);
   if(x)
    xyz(x-1);
    printf("%d",x);
 }
 void abc(int a)
 {
  printf("%d",a);
  xyz(a);
  if(a)
   abc(a-1);
   printf("%d",a);
  }

  void main()
  {
  clrscr();
   abc(2);
   getch();
  }
  */
/*void show(int n)
 {
  static int i=1;
  printf("%d",i++);
   if(i<=n)
  show(n);
  printf("%d",i);
 }
 void main()
 {
  clrscr();
  show(5);
  printf("done");
  getch();
 }
  */

/* void display(int a)
 {
  printf(" %d",a);
  if(--a)
  display(a);
  printf(" %d",a);
 }
  void main()
  {
   clrscr();
   display(3);
   getch();

  }
  */


/* void rani()
 {
  static int a=1;
  printf("hello\n");
  a++;
  if(a<3)
  rani();
 }
  void main()  //OT hello....
  {
   clrscr();
   rani();
   printf("done");
   getch();
 }*/

/* void sum(int a)
 {
  printf("hello\n %d",a);
  if(a<3)
  sum(a+1);
 }
 void main()
 {
  clrscr();
  sum(1);
  printf("done");
  getch();
 }*/
		 // 3//
/* void sum(int a)  // static arguments nhi de skte//
 {
  printf("hello %d",a);
  if(a<3)
  sum(a++);
  }
  void main()
  {
  clrscr();
   int a=1;
  sum(a);
  printf("done");
  getch();
} */