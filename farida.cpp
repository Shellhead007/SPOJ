#include<bits/stdc++.h>
using namespace std;
long long int maxgold(long long int arr[],long long int n)
{
	long long int dp[n];
	//memset(dp,0,sizeof(dp));
	//if(n==0)
	//	return dp[0];
	dp[0] = arr[0];
	dp[1] = max(dp[0],arr[1]);
	for(int i=2;i<n;i++)
	{
		dp[i] = max(dp[i-1],arr[i]+dp[i-2]);
	}
	return dp[n-1];
}
int main(int argc, char const *argv[])
{
	std::ios::sync_with_stdio(false);
	cin.tie(false);
	cout.tie(false);
	int t;
	cin>>t;
	int j = 1;
	while(j<=t)
	{
		long long int n;
		cin>>n;
		long long int res = 0;
		if(n==0)
		{
			cout<<"Case "<<j<<": "<<res<<endl;
		}
		else
		{
			long long int arr[n];
			for(int i=0;i<n;i++)
				cin>>arr[i];
			
			res = maxgold(arr,n);
			
			cout<<"Case "<<j<<": "<<res<<endl;
		}
		j++;
	}
	return 0;
}