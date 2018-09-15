#include<bits/stdc++.h>
using namespace std;
int main()
{
	std::ios::sync_with_stdio(false);
	int t,i=1;
	cin>>t;
	while(t--)
	{
		long long int n,ans=0;
		
		cin>>n;
		int k = n%10;
		int l = (n%100)/10;
		if(k ==0 && l == 1 )
		{
			ans = n-(n/10);
		}
		else if(k==0&&l==0)
		{
			ans = n-1;
		}
		else if(n>=0 && n <=9 )
		{
			ans = n;
		}
		else
		{
			ans = n - (k+1);
		}
		cout<<"Case #"<<i<<":"<<" "<<ans<<endl;
		i++;
	
	}
	return 0;
}
