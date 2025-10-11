#include "main.h"
void root (double a,double b,char op)
{
if(op=='r'  && b!=0 && !(a<0 && (int)b%2==0 ) )
printf("%lf",pow(a,(1/b)));
}
