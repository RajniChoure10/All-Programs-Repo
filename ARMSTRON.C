
int fact(int n)
{
 int i,fact=1;
 for(i=1;i<=n;i++)
 {
  fact=fact*i;
 }
  return fact;
}
void main()
{
 int n=145,r,t,sum=0;
 clrscr();
 t=n;
 while(n!=0)
 {
  r=n%10;
  sum=sum+fact(r);
  n=n/10;
 }
 if(t==sum)
 {
  printf(" no.is strong %d",t);
 }
 else
 {
  printf(" no. is not strong  %d",t);
 }
 getch();
}







/*void main()
{
 int  n1,n2,i,j;
 clrscr();
 printf("enter number");
 scanf("%d %d",&n1,&n2);
 for(i=1;i<=10;i++)
 {
   for(j=n1;j<=n2;j++)
  {
   printf("%4d",i*j);
  }
   printf("\n");
 }
   getch();
} */




/*int pow(int n,int p)
{
  int s=1,i;
  for(i=1;i<=p;i++)
  {
   s=s*n;
  }
  return s;
}

 int countdigit(int n)
 {
  int c=0;
  while(n!=0)
 {
   c++;
   n=n/10;
 }
  return c;
}

void main()
{
 int n=153,r,c,t,s=0;
 clrscr();
 c=countdigit(n);
 t=n;
 while(n!=0)
 {
  r=n%10;
  s=s+pow(r,c) ;
  n=n/10;
 }
 if(s==t)
   {
   printf("no.is Armstrong %d" ,t);
  }
  else
  {
    printf("no. is not armstrong %d",t);
  }
  getch();
} */




/*int isprime( int n)
{
 int i;
 if(n<2)
 return 0;
 for(i=2;i<=n/2;i++)
 {
  if(n%i==0)
  return 0;
 }
 return 1;
}

void main()
{
 int i,n;
 clrscr();
 for(i=1;i<=10;i++)
 {
  if(isprime(i)==1)
  {
   printf(" series of prime no.: %d",i);
  }
 }
  getch();
}
  */
/*void main()
{
 clrscr();
 printf("%d",5+6*9+9*3/2+8);
 getch();
}*/

/*int isprime (int n)
{
 int i;
  for(i=2;i<=n/2;i++)
  {
   if(n%i==0)
   return 0;
  }
   return 1;
}

void main()
{
 int n=11;
 clrscr();
 if(isprime(n)==1)
 {
  printf(" number is prime %d:",n);
 }
  else
 {
  printf(" number is not prime %d:",n);
 }
 getch();
}*/

/*int fact (int n)
{
 int i, fact=1;
 for(i=1;i<=n;i++)
  {
   fact=fact*i;
  }
   return fact;
}
void main()
{
 int i,n=145,r,sum=0,t;
 clrscr();
 t=n;
  while(n!=0)
 {
  r=n%10;
  sum=sum+fact(r);
  n=n/10;
 }
  if(t==sum)
  {
   printf("%d no. is strong",t);
  }
  else
  {
   printf("%d no. is not strong",t);
  }
  getch();
}*/



		  //armstrong no.//
/*int pow(int n,int p)
{
 int i,s=1;
 for(i=1;i<=p;i++)
 {
  s=s*n;
 }
  return s;
}

int countdigit( int n)
{
 int c=0;
 while(n!=0)
 {
   c++;
   n=n/10;
 }
  return c;
}

/*void main()
{
 int i,n=153,s=0,c,t,r;
 clrscr();
 c = countdigit(n);
 t = n;
 while(n!=0)
 {
  r=n%10;
  s=s+pow(r,c);
  n=n/10;
 }
  if(s==t)
  {
   printf("%d no. is armstrong",t);
  }
   else
  {
   printf("%d no. is not armstrong",t);
  }
   getch();
}*/















