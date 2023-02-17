#include <stdio.h>
int main()
{
    int i,j,l,m;

for(i=0;i<3;i++)
  {
   for(j=1;j<=17;j++)
   {
   if ((j>=3-i && j<=6+i) || (j>=12-i) && (j<=15+i))
      printf("*");
    else
     printf(" ");
     }
     printf("\n");
   }
  // another part
   for(l=0;l<9;l++)
  {
   for(m=1;m<=17;m++)
   {
   if (m>=l+i && m<17-l)
      printf("*");

    else
     printf(" ");
     }
     printf("\n");
   }
return 0;
   }


