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
		
		if(n<=m)
		{
			if(n%2==0)
			cout<<"L"<<endl;
			
			else if(n%2==1)
			cout<<"R"<<endl;
		 } 
		 else if(n>m)
		 {
		 	if(m%2==0)
		 	cout<<"U"<<endl;
		 	
		 	else if(m%2==1)
		 	cout<<"D"<<endl;
		 }
	}
	return 0;
}
