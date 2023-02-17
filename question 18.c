#include <stdio.h>
int main()
{
    int i,j,l,m;

for(i=0;i<=4;i++)
  {
   for(j=0;j<9;j++)
   {
   if (j>=4-i && j<=4+i)
      printf("*");

    else
     printf(" ");
     }
     printf("\n");
   }
  // another part
   for(l=0;l<4;l++)
  {
   for(m=0;m<9;m++)
   {
   if (m>l && m<8-l)
      printf("*");

    else
     printf(" ");
     }
     printf("\n");
   }
return 0;
   }


