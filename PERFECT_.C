void main()
{
 int i,sum=0,n;
 clrscr();
 printf("enter number");
 scanf("%d",&n);
  for(i=1;i<=n/2;i++)
  {
   if(n%i==0)
   {
     sum=sum+i;
   }
  }
   if(n==sum)
   {
     printf("%d no. is perfect",n);
   }
  else
   {
    printf("%d no.is not perfect",n);
   }
   getch();
}