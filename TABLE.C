void main()
{
 int n1,n2,i,j;
 clrscr();
 printf("enter number");
 scanf("%d %d",&n1,&n2);

 for(j=1;j<=10;j++)
 {
  for(i=n1;i<=n2;i++)
  {
   printf(" %4d",i*j);
  }
  printf("\n");
 }
 getch();
}