 /*extern int a;
 void main()
  {
   clrscr();
   printf("%u",a);
   getch();
  }
  int a=10;
   */
//-------------------------------//
/*void main()
 {
  extern int a;  //cann't initialised here//
  clrscr();
  printf("%d",a);
  getch();
 }
 int a=20;
// extern a=10;//
//--------------------------------//
  */

 /*extern int i;
 void main()
 {
  int i=590;
  clrscr();        //address //
  printf("%u",&i);
  getch();
 }
  */
//----------------------------------//

 /*void main()
 {
  //auto int n=30;
   clrscr();
   printf("%d",n);
   getch();
 } */
//----------------------------------//

// auto int s=10; auto clss not allowed here//
 void main()
 {
  int s=989;
  clrscr();
  {
   printf("%d\n",s);
  }
   printf("%d",s);
   getch();
  }
