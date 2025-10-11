#include "main.h"
int main()
{
char op;
double a;
double b;
printf("write your mathinatical problem!\n");
while (1)
{
scanf("%lf%c%lf", &a,&op,&b);
calculator ( a, b, op);
if( (op=='/' && b==0) || (op=='r' &&  (b==0 ||(a<0 && (int) b%2==0) ) ) )
{
for(int i=1; i<=2;i++)
{
printf(" sorry, if the process is division , then b should not be 0. and if the process root, then neither a should be negative nor b should be 0. try again");
scanf("%lf%c%lf", &a,&op,&b);
calculator ( a, b, op);
if (i<=2 && ( (op=='/' && b!=0) || (op=='r' && ! (b==0 ||(a<0 && (int) b%2==0) ) ) ))
break;
else if(i<=1 && ( (op=='/' && b==0) || (op=='r' &&  (b==0 ||(a<0 && (int) b%2==0) ) ) ))
continue;
else
{
printf("you are stupid\n");
return(0);
}
}
}
if(op!='+' && op!='-' && op!='*' && op!='/' && op!='^' && op!='r')
{
for(int i=1; i<=2;i++)
{
printf("Please use only one of these operations ( + , - , * , / , ^ , r ), try again");
scanf("%lf%c%lf", &a,&op,&b);
calculator ( a, b, op);
if (i<=2 && ( op=='+'||  op=='-' || op=='*' || op=='/'||  op=='^' || op=='r') )
break;
else if(i<=1 && op!='+' && op!='-' && op!='*' && op!='/' && op!='^' && op!='r')
continue;
else
{
printf("you are stupid\n");
return(0);
}
}
}
printf ("\nwould you like to solve another math problem! anser by (y) or (n)\n");
char s;
scanf(" %c", &s);
if (s=='y')
{
printf("put your new mathimatical problem\n");
continue;
}
else if(s=='n')
break;
}
}
