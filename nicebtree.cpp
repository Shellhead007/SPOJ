#include<bits/stdc++.h>
#include<stack>
#include <utility>
#include<algorithm>
using namespace std;
int main()
{
	std::ios::sync_with_stdio(false);
	stack<pair<char,int> >mystack;
	int t;
	cin>>t;
	int i=0,maxheight = -1;
	while(t--)
	{
		string s;
		cin>>s;
		int top = 0;
		if(s[i] == 'n')
		{
			mystack.push(make_pair(s[i],top));
		}
		else if(s[i]=='l')
		{
			mystack.push(make_pair(s[i],top));
			mystack.pop();
			maxheight++;
			mystack.second++;
		}
		i++;
		cout<<maxheight<<endl;
	}
	return 0;
}
