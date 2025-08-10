#include <stdio.h>
int main()
{
   int nu,n,s,sh;
   scanf("%d", &nu);
   for (n=1;n<=nu;n++)
   {
      for (s=nu-n;s>0;s--)
      { printf(" ");}

      for (sh=1;sh<=n;sh++)
      { printf("#");}

      printf("  ");

       for (sh=1;sh<=n;sh++)
      { printf("#");}

	   printf("\n");
   }
return 0;
}
