#include <stdio.h>
int main()
{
int i,j;
char c;

for(i=0;i<4;i++)
{
         c='A';
    for(j=0;j<=6-i;j++)
    {
        if (j>=i)
         {
        printf("%c",c);
           if (j<3)
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
