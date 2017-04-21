#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
int a=0,b=0,c=0;
cin>>a;
while(a!=0){
   b=a%10;
   c=c*10+b;
   a=a/10;
}
if(a==c)
{
    cout<<"palindrome";
}
else{
cout<<"not palindrome";}
}
