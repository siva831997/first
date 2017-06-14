#include<iostream>
using namespace std;
int main()
{
int a=123;
int b=a;
int c=0,d=1;
while(a!=0)
{
c=a%10;
d=d*c;
a=a/10;
}
d=b*d;
cout<<d;
}
