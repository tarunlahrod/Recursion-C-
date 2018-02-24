

//factorial without using loops (or recursive factorial)

#include<iostream.h>
#include<conio.h>
int fac=1;

void f(int n)
{
::fac*=n;
int a=n-1;
if(n>0&&a!=0)
f(a);
   if(n==1)
cout<<endl<<fac<<endl;
}

void main()
{
int no;
cout<<"Enter number ";
cin>>no;

f(no);


getch();
}
