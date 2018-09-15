#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int arr[1000001];
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		 int n,h;
		cin>>n;
		 memset(arr, 0 ,sizeof(arr));
		for(int i=0;i<n;i++)		{
			cin>>h;
			arr[h]++;
		}
		sort(arr,arr+1000001);
		int index = 0,dif = 0;
		for(int i=0;i<1000001;i++)
		{
			if(arr[i]!=0)
			{
				index = i;
				break;
			}
		
		}
		dif = arr[1000001-1] - arr[index];
		
		if(dif>0)
		{
			cout<<dif<<endl;
		}
		else
		{
			cout<<"-1"<<endl;
		}
	}
	return 0;
}
