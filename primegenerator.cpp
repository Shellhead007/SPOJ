#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,m;
		cin>>n>>m;
		
		for(int i=n;i<=m;i++)
		{
			if(i%1==0&&i%(n++)==0)
			{
				cout<<i<<endl;
			}
		}
	//	cout<<count<<endl;
		
	}
	return 0;
}
