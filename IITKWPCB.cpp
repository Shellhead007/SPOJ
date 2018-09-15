#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,ans;
		cin>>n;
		
		if(n%2==0)
		{
			ans = (n/2)-1;
			if(ans%2==0)
			{
				cout<<ans-1<<endl;
			}
			else
			cout<<ans<<endl;
		}
		else
		{
			cout<<n/2<<endl;			
		}
	}
	return 0;
}
