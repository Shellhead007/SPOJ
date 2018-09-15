#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		
		int men[n],women[n];
		for(int i=0;i<n;i++)
		{
			cin>>men[i];
		}
		
		for(int i=0;i<n;i++)
		{
			cin>>women[i];
		}
		
		sort(men,men+n);
		sort(women,women+n);
		
		int multiply[n];
		for(int i=0;i<n;i++)
		{
			multiply[i] = women[i]*men[i];
		}
		int sum = 0;
		for(int i=0;i<n;i++)
		{
			sum = sum + multiply[i];
		}
		cout<<sum<<endl;
	}
	return 0;
}
