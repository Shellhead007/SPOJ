#include <iostream>
using namespace std;
int main()
{
int t,a,b;
cin>>t;

while(t--)
{
cin>>a>>b;
if(a!=b&&a-b!=2)
{
cout<<"No Number"<<endl;
continue;
}
if(a%2==0&&b%2==0)
cout<<a+b<<endl;
else
cout<<a+b-1<<endl;
}
return 0;
}
