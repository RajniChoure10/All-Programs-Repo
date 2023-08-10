

void main()
{
 char str[]="abc78910112";
 clrscr();
 strrev(str+3);
 puts(str);
 getch();
}


/*void main()
{
 char s1[40]="abcdef";
 char *s2="javapr jp";
 char *s3="javapr";
 clrscr();
 s3=s2+2;
 s2=s1+2;
 ++*s2;
 ++*s3;
 puts(s1);
 puts(s2);
 puts(s3);
 getch();
}


/*void main()
{
 char str[]="java";
 clrscr();
 printf("%d %d",sizeof(str), strlen(str));
 getch();
} */

 /*void main()
{
 char str1[]="hell";
 char str2[]="xyz";
 clrscr();
 str1=str2;
 puts(str1);
 getch();
}  */

/*void main()
{
 int a[5]={10,20,30,40,50};
 int b[5]={3,13};
 clrscr();
 printf("%d",b[1]);
}
*/



/*void main()
{
 int a[2];
 int i;
 clrscr();
 for(i=0;i<=10;i++)
  a[i]=i*i;

 printf("%d",a[3],a[4]);
 getch();
}*/

/*void main()
{
 int arr[][4]={
 {7,8,9},
 {3,13},
 {10,20,30}
 };
 clrscr();
 printf("%d",arr[1][1]);
 getch();
} */

/*void main()
{
 int a[]= {7,18,29};
 int *p;
 clrscr();
 p=a;
 ++p;
 printf("%d %d %d",p[-1],p[0],p[1]);
 getch();
} */

/*void change(int p1,int *p2)
 {
 ++p1;
 ++*p2;
 }
 void main()
 {
  int x=10,y=20;
  clrscr();
  change(x,&y);
  printf("\n%d %d",x,y);
  getch();
 }*/


/*void main()
{
 static int a=1;
 clrscr();
 printf("\n%d",++a);
 if(a<=3)
  main();
  printf("\n%d",a);
  getch();
 }*/

/*void fun(int a)
 {
  printf("%d",a);
  a++;
 }
 void main()
 {
 int a=10;
 int *p=&a;
  clrscr();
  fun(a);
  printf("\n%u %u",a,p);
  getch();
 }*/
 //----------------------------//
 /*void fun(int a)
 {
  printf("%d",a);
  a++;
 }
 void main()
 {
  int a=10;
  int *p=&a;
  clrscr();
  fun(a);
  printf("%u",*p);
  getch();
 } */
 //----------------------------//

/*void fun( int *p)
 {
  printf("%d",*p);
  ++*p;
 }
 void main()
 {
  int a=10;
  int b=30;
  int *p=&b;
  clrscr();
  fun(p);

  printf("\n%u",*p);
  p++;
  printf("\n%d",*p);
  getch();
 } */
//----------------------------//

 /*void fun(int *p)
 {
  printf("%d",*p);
  ++*p;
 }
 void main()
 {
  float a=10;
  float b=30;
  float *p=&b;
  clrscr();
  fun(p);

 // printf("\n %u",&a-&c);  //
  printf("\n%d",*(p+1));
  getch();
 }   */
 //----------------------------------//
/* void fun(int *p)
 {
  printf("\n %u",*p);
  *p++;
 }
  void main()
 {
  int a=10;
  int b=30;
  int *p=&b;
  clrscr();
  printf("\n %u",*p);
  p++;
  fun(p);
  printf("\n %d",*p);
  getch();
 }*/

//-------------------------------//

/*void main()
{
int arr[2]={10,20};
clrscr();
*arr=30;
*(arr+1)=40;
printf("%d %d",arr[0],1[arr]);
getch();
} */

/*void abc(a)
{
 ++a;
}
 void main()
 {
 int a=1;
 clrscr();
 abc(1);
 printf("\n%d",a);
 getch();
}*/

/*void display(int a)
{
 printf("\n %d",a);
 if(--a)
   display(a);
   printf(("%d",a);
 }
 void main()
 {
 clrscr();
 display(4);
 getch();
} */


/*void xyz(int x)
{
 printf("\n %d",x);
 if(x)
  xyz(x-1);
  printf("\n %d",x);
  }
  void abc(int a)
  {
   printf("\n %d",a);
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
*/
