










































void main()
{
 char str[]= "Bhootnath";
 clrscr();



/*int countchar(char str[],char ch,int index)
  {
   int i,c=0;
   for(i=index;i<strlen(str);i++)
   {
    if(str[i]==ch)
    {
     c++;
    }
   }
   return c;
  }
int checkchar(char str[],char ch,int index)
 {
  int i;
  for(i=index;i>=0;i--)
  {
   if(str[i]==ch)
   {
     return 0;
   }
  }
   return 1;
 }

void main()
{
 int i,c;
 char str[]="hello dollop infotech";
 clrscr();
 for(i=0;i<strlen(str);i++)
  {
    if(checkchar(str,str[i],i-1)==1)
    {
     c=countchar(str,str[i],i);
     printf("%c %d\n",str[i],c);
    }
  }
  getch();
 }
*/

/*void concatstr(char str1[], char str2[])
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
 char str1[15]="rajni";
 char str2[]="kimi";
 clrscr();
 concatstr( str1,str2);
 printf(str1);
 getch();
}*/





/*void main()
{
 int i,j;
 char str[]="just for me,rajni";
 char ch='j';
 clrscr();
 for(j=0;j<=strlen(str)-1;j++)
 {
  if(str[j]==ch)
  {
   for(i=j;i<=strlen(str)-1;i++)
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
 char str[]="rajni rohit ";
 int count =0;
 clrscr();
 for(i=0;i<=strlen(str)-1;i++)
 {
   if(str[i]==32)
   {
    count ++;
   }
  }
  printf("%d",count);
  getch();
}*/

/*void main()
{
 int i;
 char str[]="rohit choure";
 clrscr();
 for(i=0;i<=strlen(str)-1;i++)
 {
  if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
  {
   printf(  " %c",str[i]);
  }
 }
  getch();
}*/


/*void main()
{
 int i;
 char str[]="hello";
 char f='e',r='o';
 clrscr();
 for(i=strlen(str)-1;i>=0;i--)
 {
  if (f==str[i])
  {
   str[i]=r;
  }
 }
 printf("%s",str);
 getch();
}
/*
/*void main()
{
 char ch='D';
 clrscr();
  if(ch>=65 && ch<=90)
  {
   ch=ch+32;
  }
  else
  {
   ch=ch-32;
  }
  printf( " Conversion of letter %c\n",ch);
  getch();
}*/

/*void main()
{
 char ch ='y';
 clrscr();
 if(ch>=65 && ch<=90)
 {
  printf(" capital letter %c",ch);
 }
 else if(ch>=97 && ch<=122)
 {
  printf(" small letters %c",ch);
 }
 else if(ch>=48 && ch<=57)
 {
  printf("numeric symbol %d",ch);
 }
 else
 {
  printf("symbolic char %c",ch);
 }
 getch();
} */


int revint(int n)
{
 int s=0,r;
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
 int n= 1234,r,rev,s=0;
 clrscr();
 rev=revint(n) ;
 while(n!=0)
 {
  if(s==0||n<10)
  {
    r=n%10;
  }
   else
  {
    r= rev %10;
  }
  s=s*10+r;
  n=n/10;
  rev=rev/10;
 }
   printf(" reverse first and last digit of a number %d",s);
   getch();
}



/*int revint(int n)
{
 int r,sum=0,t;
 while(n!=0)
 {
  r=n%10;
  sum=t*10+r;
  n=n/10;
 }
 return sum;
}

void main()
{
 int n=1234,r,s=0;
 clrscr();
 rev=revint(n);
 while(n!=0)
 {
   if(s==0 || n<10)
   {
     r=n%10;
   }
   else
   {
     r=rev%10;
   }
    sum=sum+r;
    n=n/10;
    rev=rev/10;
 }
 puts(sum);
 getch();
}
  */




/*void main()
{
 int s,e,t;
 char str[]="hello";
 clrscr();
 s=0;
 e=strlen(str)-1;
 while(s<e)
 {
  str[t]=str[s];
  str[s]=str[e];
  str[e]=str[t];
  s++;
  e--;
 }
 puts(str);
 getch();
}
*/


/*void main()
{
 int a=29,b=56;
 int t;
 clrscr();
 t=a;
 a=b;
 b=a;
 printf("%d %d",a,b);
 getch();
}*/

/*void main()
{
 int i,j;
 clrscr();
 for(j=1;j<=18;j++)
 {
  for(i=1;i<=10;i++)
  {
   printf(" %2d",j*i);
  }
  printf("\n");
 }
   getch();
}
   */

/*void main()
{
 int i,sum=0;
 clrscr();
 for(i=1;i<=50;i++)
 {
  if(i%2==0);
  sum=sum+i;
 }
  printf("%d",sum);
  getch();
}
 */

/*int countchar(char str[],char ch,int index)
{
 int i,c=0;
 for(i=index;i<strlen(str);i++)
 {
  if(str[i]==ch)
  {
   c++;
  }
 }
  return c;
}


int checkchar(char str[],char ch,int index)
{
 int i;
 for(i=index;i>0;i--)
 {
  if(str[i]==ch)
  {
   return 0;
  }
 }
  return 1;
}

void main()
{
 int i,c;
 char str[]="Good Afternoon";
 clrscr();
 for(i=0;i<strlen(str);i++)
  {
    if(checkchar(str,str[i],i-1)==1)
   {
    c=countchar(str,str[i],i);
    printf("%c %d\n",str[i],c);
    getch();
   }
 }
} */



/*void main()
{
 char str[]="abc";
 char *str[]="abc";
 clrscr();
 printf(" %d" ,sizeof("abc"));
 getch();
} */



/*void main()
{
 int i;
 char str[]="good morning";
 clrscr();
 for(i=0;i<=strlen(str);i++)
 {
  if(str[i]=='a'|| str[i]=='e'|| str[i]=='i' || str[i]=='o' || str[i]=='u')

  printf(" vowels= %c ",str[i]);
 }
 getch();
}*/



/*
void main()
{
 int i,j;
 char str[]="just do donot think so much";
 char ch='o';
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
 puts(str);
 getch();
} */


/*int fact(int n)
{
 int fact=1,i;
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
   printf(" number is strong %d",t);
  }
  else
  {
   printf("number is not strong %d",t);
  }
  getch();
}*/





/*int pow(int n,int p)
{
 int i,s=1;
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
 int n=1634,t,c,r,sum=0;
 clrscr();
 c=countdigit(n);
 t=n;
 while(n!=0)
 {
  r=n%10;
  sum=sum+pow(r,c);
  n=n/10;
 }
 if(t==sum)
  {
   printf("number is armstrong %d", t);
  }
  else
  {
   printf("number is not armstrong %d",t);
  }
   getch();
}
*/










/*void main()
{
 int n=5234,sum=0,r;
 L:
 clrscr();
 while(n!=0)
 {
  r=n%10;
  sum=sum+r;
  n=n/10;
 }
 if(sum>9)
 {
  n=sum;
  sum=0;
  goto L;
 }

 printf("generic root of no=%d",sum);
 getch();
}*/


/*void main()
{
 char str[]="do remember focus on yourself";
 int s=0,A,e;
 e=strlen(str)-1;
 clrscr();
 if(s<e)
  {
   for(i=strlen-1
  */


/*(void main()
{
 char str[]="today we was learned basic of java";
 int i;
 clrscr();
 for(i=1;i<=strlen(str);i++)
 {
  if(str[i]=='a'|| str[i]=='e'|| str[i]=='i'|| str[i]=='o'|| str[i]=='u')
  {
   printf(" %c",str[i]);
  }
 }
  getch();
}*/





/*void main()
{
 int sell_price,purchase_price,amt;
 clrscr();
 printf("enter sell_price");
 scanf("%d",&sell_price);
 printf("enter purchase_price");
 scanf("%d",&purchase_price);
 if(sell_price>=purchase_price)
  {
   amt=sell_price-purchase_price;

   printf(" profit: %d",amt);
  }
 else if(sell_price<=purchase_price)
  {
   amt=sell_price-purchase_price;

   printf(" Loss: %d",amt);
  }
   getch();
}*/




/*void main()
{
 int side, perimeter;
 clrscr();
 printf("enter side");
 scanf("%d",&side);
 perimeter=4*side;
 printf("%d",perimeter);
 getch();
}*/


/*int revdigit (int n)
{
 int r,s=0
 while(n!=0)
 {
  r=n%10;
  s=s*10+r;
  n=n%10;
 }
 return s;
}

void main()
{
 int n=1234,s=0,r
 clrscr();
 rev=revdigit(n);
 while(n!=0)
 {
  if(s==0 || n<10)
  {
    r=n%10;
  }
  else
  {
   rev=rev%10;
  }
   s=s*10+r;
   rev=rev/10;
   n=n/10;
 }*/


/*int revint( int n)
{
 int s=0,r;
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
 int n=1234,rev,s=0,r;
 clrscr();
 rev=revint(n);
 while(n!=0)
 {
   if(s==0 || n<10)
   {
    r=n%10;
   }
  else
   {
    r=rev%10;
   }
   s=s*10+r;
   n=n/10;
   rev=rev/10;
 }
   {
    printf("%d", s);
   }
  getch();

}*/




/*int pow (int n,int p)
{
 int s=1,i;
 for(i=1;i<=p;i++)
 {
  s=s*n;
 }
  return s;
}

int countdigit (int n)
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
 int n=153,r,t,sum=0,c;
 c=countdigit(n);
 clrscr();
 t=n;
 while(n!=0)
 {
  r=n%10;
  sum=sum+pow(r,c);
  n=n/10;
 }
  if(sum==t)
  {
    printf("%d number is armstrong",t);
  }
   else
  {
    printf("%d number is not armstrong",t);
  }
   getch();
}*/


	       //sum of digits given in a no.//
/*void main()
{
 int n=1234,sum=0,r;
 clrscr();
 while(n!=0)
 {
  r=n%10;
  sum=sum+r;
  n=n/10;
 }
  printf(" %d",sum);
  getch();
}*/



/*void main()
{
 int Qty,amt,total;
 clrscr();
 printf("enter amt");
 scanf("%d",&amt);
 printf("enter qty");
 scanf("%d",& qty);
 total=amt*qty;
 {
  printf("%d", total);
 }
 getch();
}*/