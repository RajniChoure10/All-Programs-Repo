

/*void main()
{
 int i,count=0;
 char str[]="hello this side master vikas";
 clrscr();
 for(i=0;i<strlen(str);i++)
  {
    if(str[i]==32)
     {
	count++;
     }

  }
  printf("%d",count+1);
  getch();
}*/

/*void main()
{
 int count=0,i;
 char str[]="hello this side HR Rajni";
 clrscr();
 for(i=0;i<=strlen(str)-1;i++)
  {
   if(str[i]=='a'|| str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='e')
    {
     count++;
    }
  }
  printf("%d",count);
  getch();
}*/

/*void main()
{
 int i;
 char str[]="hello";
 char f='e',r='o';
 clrscr();
 for(i=0;i<=strlen(str)-1;i++)
 {
  if(str[i]==f)
   {
    str[i]=r;
   }
 }
  printf("%s",str);
  getch();
}*/

	  //program to print or  arrange numbers in descending//

/*void main()
{
 int arr[]={ 5,2,9,6,3,8,4,7,10};
 int i=0,j=0,n=9;
 clrscr();
 for(i =0;i<n;++i)
 {
  printf("%d\t",arr[i]);
 }
 i=0;
 while(i<n)
 {
  for(j=i+1;j<n;++j)
 {
   if(arr[i]<=arr[j])
   {
    arr[i]=arr[i]+arr[j]-(arr[j]=arr[i]);
   }
  }
  i++;
 }
 printf("\n");
 for(i=0;i<n;i++)
 {
  printf("%d\t",arr[i]);
 }
 getch();
}*/

	 //arranged it in decending order//

/*void main()
{
 int arr[]={5,2,9,6,3,8,4,7,10};
 int i=0,j=0,n=9;
 clrscr();
  for(i=0;i<n;i++)
  {
   printf("%d\t",arr[i]);
  }
  i=0;
  while(i<n)
  {
   for(j=i+1;j<n;j++)
    {
     if (arr[i]<=arr[j])
     {
      arr[i]=arr[i]+arr[j]-(arr[j]=arr[i]);
     }
   }
    i++;
  }
  printf("\n");
    for (i=0;i<n;++i)
  {
   printf("%d\t",arr[i]);
  }
  getch();
}*/




     //enter 10 numbers and arranged it in ascending order//


#define n 9
void printArrData(int arr[])
{
 int i;
 printf("\n");
  for(i=0;i<n;++i)
   {
    printf("%d\t",arr[i]);
   }
}

void ASCSort(int arr[])
{
 int i=0,j=0;
  while(i<n)
   {
    for(j=i+1;j<n;++j)
    {
     if(arr[i]>=arr[j])
    {
      arr[i]=arr[i]+arr[j]-(arr[j]=arr[i]);
    }
   }
   i++;
  }
}
void main()
{
 int arr[]={5,2,9,6,3,8,4,7,10};
 clrscr();
 printArrData(&arr);
 ASCSort(&arr);
 printArrData(&arr);
 getch();
}



	     /*print sum of even numbers and odd numbers
	      using formula*/
/*void main()
{
 int n=10,i;
 clrscr();
 for(i=1;i<10;i++)
 {
  printf(" %d\n",i*(i+1));
 }
  for(i=1;i<10;i++)
  {
    printf(" %d",(i*i-1));
  }
  getch();
}*/




	/*check no.is prime or not..then sum of all prime numbers
		  check the sum is perfect no. or not*/

/*int isperfect (int n)
{
 int i,s=0;
 for(i=1;i<=n/2;i++)
 {
  if(n%i==0)
  {
   s=s+i;
  }
 }
  return s;
}
int isprime (int n)
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
 int arr[10];
 int i,sum=0;
 clrscr();
 printf("enter 10 number");
  for(i=1;i<10;i++)
  {
    scanf("%d\n",&arr[i]);
  if(isprime(arr[i])==1)
     {
       sum=sum+arr[i];
     }
   }
 if(isperfect(sum)==sum)
   {
     printf("number is perfect%d",sum);
   }
   else
   {
   printf("number is not perfect%d",sum);
   }
   getch();
}

 /*
void main()
{
 int i;
 char str[]="hello";
 char f='e',r='o';
 clrscr();
 for(i=strlen(str)-1;i>=0;i--)
 {
  if(f== str[i])
  {
    str[i]=r;
  }
 }
 printf("%s", str);
 getch();
}*/

	   //reverse string ..(swapping)//

/*void main()
{
 int i,s,e,t;
 char str[]="hello";
 clrscr();
 s=0;
 e=strlen(str)-1;
  while(s<e)
 {
  t=str[s];
  str[s]=str[e];
  str[e]=t;
  s++;
  e--;
 }
  printf("%s",str);
  getch();
} */



	       //find kind for char in string//
/*void main()
{
 int i;
 char str[]="9pla8ce%Men6T";
 clrscr();
 for(i=1;i<strlen(str);i++)
  {
   if(str[i]>='a' && str[i]<= 'z')
    {
      printf("small char=%c\n",str[i]);
    }
    if(str[i]>='A' && str[i]<='Z')
    {
      printf("capital char=%c\n",str[i]);
    }
    if(str[i]>= 48 && str[i]<= 57)
   {
     printf("numeric char=%d\n",str[i]);
   }

  }
  getch();
}*/

	      //print small alpha,letter with pos in str//

/*void main()
{
 int i;
 char str[]="HeLlO WoRld";
 clrscr();
 for(i=0;i<strlen(str);i++)
 {
  if(str[i]>= 97 && str[i]<=122)
   {
    printf("%c is found at %d pos\n",str[i],i+1);
   }
 }
 getch();
}*/

	       //print capital letter in str//

/*void main()
{
 int i;
 char str[]="SucCesS Is ParT OF FaiLure";
 clrscr();
 for(i=0;i<strlen(str);i++)
  {
   if(str[i]>='A' && str[i]<='Z')
   {
    printf(" %c",str[i]);
   }
  }
  getch();
}*/

		 //count char vowels in str//
/*void main()
{
 int i;
 int count=0;
 char str[]="hello this is dollop";
 clrscr();

 for(i=0;i<strlen(str);i++)
 {
  if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
    {
      count++;
    }
 }
 printf("%d",count);
 getch();
}*/
	     //print vowels in string//

/*void main()
{
 int i;
 char str[]="hello this is dollop";
 clrscr();

 for(i=0;i<strlen(str);i++)
 {
  if(str[i]=='a'|| str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')

   {
    printf(" %c",str[i]);
   }
 }
   getch();
}*/




	    //print string using loop//
/*void main()
{
 int i;
 char str[]="Be happy";
 clrscr();
 for(i=0;i<strlen(str);i++)
 {
  printf("%c",str[i]);
 }
 getch();
}*/
	    //print string//

/*void main()
{
 int i;
 char str[]="Be happy";
 clrscr();
 printf("%s",str);
 getch();
}*/

	     //find position of characters//

/*void main()
{
 int i;
 int count=0;
 char str[]="hello this is dollop";
 char ch='o';
 clrscr();

 for(i=strlen(str)-1;i>=0;i--)
 {
   if(ch==str[i])
   {
    printf("%c is found at %d pos\n",ch,i+1);
    break;
   }
 }
 getch();
}*/

	    //found 'o' char and replace it with n//
/*void main()
{
 int i;
 char str[]="hello this is dollop";
 char f='e',r='o';
 clrscr();

 for(i= strlen(str)-1;i>=0;i--)
 {
  if(f==str[i])
   {
    str[i]=r;
   }
 }
  printf("%s",str);
  getch();
}*/



	       //find first and last same char and index in a string //

/*int getfirstindex(char str[],char ch)
{
 int i;
 for(i=0;i<strlen(str);i++)
 {
  if(ch==str[i])
    return i;
 }
 return -1;
}
int getlastindex(char str[],char ch)
{
 int i;
 for(i=strlen(str)-1;i>=0;i--)
  {
   if(ch==str[i])
     return i;
  }
  return -1;
}
void main()
{
 int i;
 int t;
 char str[]="hello this is dollop";
 char ch ='o';
 clrscr();

     t=getfirstindex(str,ch);
  if(t==-1)
  {
   printf("not found");
  }
  else
  {
   printf("%c is found at %d pos\n",ch,t+1);
  }

  t= getlastindex(str,ch);
  if(t==-1)
  {
   printf("not found\n");
  }
  else
  {
   printf("%c is found at %d pos\n",ch,t+1);
  }
  getch();
}*/


	     //print size of string//
	     // countincluding null char//
/*void main()
{
 int i;
 char str[]="abc";
 clrscr();
 printf("%d",sizeof(str));
 getch();
}*/

	    //print string//

/*void main()
{
 int i;
 char str[10]="abcd";
 clrscr();
 printf("%s",str);
 getch ();
}*/

	     //length of string//
	     //excluding null char//
/*void main()
{
 int i;
 char str[]="abcdefg";
 clrscr();
 printf("%d",strlen(str));
 getch();
}*/
	       //indexing of string//
/*void main()
{
 int i;
 char str[7]="abcdefg";
 clrscr();
 printf("%c",str[4]);
 getch();
}*/