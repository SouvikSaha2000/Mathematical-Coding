#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int i=2;
double x0,x1,x2,t,it[200];
double f(double);
clrscr();
printf("enter the initial interval\n");
scanf("%lf%lf",&x0,&x1);
printf("i\t\tx\n");
printf("=================================\n");
do
{
printf("%d\t",i);
x2=x1-((x1-x0)/(f(x1)-f(x0)))*f(x1);
it[i]=x2;
printf("%16.10lf\n",it[i]);
x0=x1;
x1=x2;
if(i>3)
t=fabs(it[i]-it[i-1]);
else
t=fabs(x0-x1);
i++;
}
while(t>0.0000000001);
printf("the root is %16.10lf",it[i-1]);
getch();
}
double f(double x)
{
double g;
g=x*exp(x)-cos(x);
return (g);
}