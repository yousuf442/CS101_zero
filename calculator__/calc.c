#include "main.h"
void calculator (double a,double b,char op)
{
if(op=='+')
sum ( a, b, op);
else if(op=='-')
sub ( a, b, op);
else if(op=='*')
mult ( a, b, op);
else if(op=='^')
power ( a, b, op);
else if(op=='/')
dev ( a, b, op);
else if(op=='r')
root ( a, b, op);
}
