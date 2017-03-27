#include<iostream>
    //#include<conio.h>
    #include<string.h>
    #include<cstdio>
    using namespace std;




void swap (char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}


void permute(char *a, int i, int n)
{
   int j;
   if (i == n)
     printf("%s\n", a);
   else
   {
        for (j = i; j <= n; j++)
       {
          swap((a+i), (a+j));
          permute(a, i+1, n);
          swap((a+i), (a+j));
       }
   }
}


int main()
{
   char a[100];
   gets(a);
   int l=strlen(a);
   permute(a, 0,l-1);
  // getchar();
   return 0;
}