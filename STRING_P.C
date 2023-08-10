void main()
{
 int i,s,e;
 char str[]="nayan";
 s=0;
 e=strlen(str)-1;
 clrscr();
 f=0;
 while(s<e)
 {
  if(str[s]!=str[e])
  {
   f=1;
   printf("not pallindrom");
   break;
  }
  s++;
  l--;
 }
 if(f==0)
 printf("pallindrom");
 getch();
}


/*void main()
{
 int i,j;
 char str[]="success";
 char ch='s';
 clrscr();
 for(j=0;j<strlen(str);j++)
 {
  if(str[j]==ch)
  {
   for(i=j;i<strlen(str);i++)
   {
    str[i]=str[i+1];
   }
   j--;
  }
 }
 printf(str);
 getch();
}
*/

/*void main()
{
 int i;
 char str[]="rajni kimi mahima";
 clrscr();
 for(i=2;i<strlen(str);i++)
 {
  str[i]=str[i+1];
 }
  printf(str);
  getch();
}*/


/*void concatstr(char s1[],char s2[],int a)
{
 int i,j;
 i=a;
 j=0;
 while(j<strlen(s2))
 {
  s1[i]=s2[j];
  i++;
  j++;
 }
}
void main()
{
 char s1[]="if you don't fight";
 char s2[]="so ,don't cry";
 clrscr();
 concatstr(s1,s2,4);
 printf(s1);
 getch();
}*/



/*void concatstr( char str1[],char str2[])
{
 int i,j;
 i=strlen(str1);
 j=0;
 while(j<strlen(str2))
 {
  str1[i]=str2[j];
  i++;
  j++;
 }
}

void main()
{
 char str1[]="hello";
 char str2[]="zindgi";
 clrscr();
 concatstr(str1,str2);
 printf(str1);
 getch();
}*/
