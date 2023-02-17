#include <stdio.h>
int main()
{
int i,j;
char c;

for(i=0;i<5;i++)
{
         c='A';
    for(j=0;j<=4+i;j++)
    {
        if (j>=4-i)
         {
        printf("%c",c);
           if (j<4)
           c++;
         else
           c--;
         }
         else
            printf(" ");
     }
    printf("\n");
}
      return 0;
}
