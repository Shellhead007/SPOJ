#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
	std::ios::sync_with_stdio(false);
	int a,b;
	while(1	)
	{
		cin>>a>>b;
		if(a==0 && b==0)
		break;
		int arr[a],brr[b];
		for(int i=0;i<a;i++)
		{
			cin>>arr[i];
		}
			for(int i=0;i<b;i++)
		{
			cin>>brr[i];
		}
		sort(arr,arr+a);
		sort(brr,brr+b);
		
		if(arr[0]<brr[1])
		cout<<"Y"<<endl;
		else
		cout<<"N"<<endl;
	}
	return 0;
	
}