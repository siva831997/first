#include <iostream>
#include<algorithm>
#include<conio.h>
using namespace std;

int main()
{
int a[50],i,n=0,k=0;
cin>>n;
for(i=0;i<n;i++)
{
    cin>>a[i];
}sort(a,a+n);
      for(i=0;i<n;i++)
{
    cout<<"\n"<<a[i];}
cin>>k;
cout<<"kth tallest student"<<a[k-1];
}
