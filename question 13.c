#include<stdio.h>
int main()
{
int i,j;
char c;

for(i=0;i<7;i++)
{
         c='A';
    for(j=0;j<13;j++)
    {
        if ((i==0 && j==7))
           printf("%c",c-=2);
         else if ((j<=6-i) && (j>=0))
           printf("%c",c++);

          else if ((j>=6+i) && (j<=12))
            printf("%c",--c);
           else
           printf(" ");

    }
    printf("\n");
}
      return 0;
}

