#include <stdio.h>
int main()
{
  int n,b,c,m;
  scanf("%d", &n);
  for(b=1;b<=n;b++)
  {
       for(c=1;c<=n-b;c++)
       {
          printf(" ");
       }
                for(m=1;m<=b;m++)
       {
          printf("#");
              

       }


       

	  printf("\n");
  }
     return 0;
}
