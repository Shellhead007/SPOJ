#include<bits/stdc++.h>
using namespace std;
map<int,long long int>dp;
long long f(long long int n)
{
	if(n==0)
		return 0;
	if(dp[n]!=0)
		return dp[n];

	long long aux = f(n/2) + f(n/3) + f(n/4);

	if(aux>n)
		dp[n] = aux;
	else
		dp[n] = n;

	return dp[n];
}
int main(int argc, char const *argv[])
{
	long long int n;
	while(cin>>n)
	{
		cout<<f(n)<<endl;
	}
	return 0;
}