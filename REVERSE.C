
	    //reverse all digit of a number except 1st and last digit//
/*int revint(int n)
{
 int s=0,rev,r;
 while(n!=0)
 {
  r=n%10;
  s=s*10+r;
  n=n/10;
 }
  return s;
}

void main()
{
 int n,rev,r,s=0;
 clrscr();
 printf("enter number");
 scanf("%d",&n);
 rev=revint(n);
 while(n!=0)
 {
  if(!(s==0||n<10))
  {
   r=n%10;
  }
  else
  {
   r=rev %10;
  }
   s=s*10+r;
   n=n/10;
   rev=rev/10;
 }
  printf("%d",s);
  getch();
}*/



	       //reverse 1st and last digit in a no.//
/*int revint (int n)
{
 int r,s=0;
 while(n!=0)
 {
  r=n%10;
  s=s*10+r;
  n=n/10;
 }
  return s;
}

void main()
{
 int n=1234,rev,r,s=0;
 clrscr();
 rev = revint(n);
 while(n!=0)
 {
   if(s==0||n<10)
  {
    r =n%10;
  }
   else
  {
    r= rev %10;
  }
   s=s*10+r;
   n= n/10;
   rev =rev/10;
 }
  printf("%d",s);
  getch();
}*/
	     //reverse all digit in a number//
/*void main()
{
 int n=1234,r,t=0;
 clrscr();
 while(n!=0)
  {
   r=n%10;
   t=t*10+r;
   n=n/10;
  }
  printf("%d",t);
 getch();
}*/

