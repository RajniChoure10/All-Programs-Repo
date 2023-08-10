

int pow(int n,int p)
{
 int i,s=1;
 for(i=1;i<=p;i++)
 {
  s=s*n;
 }
 return s;
}

void main()
{
 int i;
 clrscr();
 for(i=0;i<=6;i++)
 {
  printf("%d ",pow(3,i));
 }
 getch();
}