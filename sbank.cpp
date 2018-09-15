#include<bits/stdc++.h>
#include<algorithm>
#include<string>
#include<map>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	int t, n;
//	freopen("kr.in","r",stdin);
	cin>>t;
	map<string, int>mymap;
	map<string, int>::iterator it;
	char s[1000];
	
	while(t--)
	{
		
		cin>>n;
		char c;
		cin>>c;
		
		for(int i=0;i<n;i++)
		{
			gets(s);
			mymap[s]++;
		}
		for(it = mymap.begin();it!=mymap.end();it++)
		{
			cout<<it->first.c_str()<<it->second<<endl;
		}
		mymap.clear();
	}
	return 0;
}
