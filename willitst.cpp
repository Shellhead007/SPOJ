#include<bits/stdc++.h>
using namespace std;
int main()
{
	std::ios::sync_with_stdio(false);
	long long int n;
	cin>>n;
	
	if((n&(n-1)) == 0)
	{
		cout<<"TAK"<<endl;
	}
	else
	{
		cout<<"NIE"<<endl;
	}
	return 0;
}
