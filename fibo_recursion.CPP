
// recusion code for fibonacci number

#include<iostream.h>
#include<conio.h>

int fibo(int n)
{
if(n==0||n==1)
return n;
return fibo(n-1)+fibo(n-2);
}

void main()
{
int a=7;
int ans=fibo(a);
cout<<ans ;

getch();
}
