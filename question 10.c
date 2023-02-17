#include <stdio.h>
int main()
{
int i,j,c;

for(i=0;i<4;i++)
{
         c=1;
    for(j=0;j<7;j++)
    {
        if ((i==0 && j==4))
           printf("%d",c-=2);
         else if ((j<=3-i) && (j>=0))
           printf("%d",c++);

          else if ((j>=3+i) && (j<=6))
            printf("%d",--c);
           else
           printf(" ");

    }
    printf("\n");
}
      return 0;
}
