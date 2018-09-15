//good question to revise stack -> think how the sequence is invalid
#include<bits/stdc++.h>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;
int main()
{
	std::ios::sync_with_stdio(false);
	int n;
	while(1)
	{
		cin>>n;
		if(n==0)
		break;
		//queue<int>q;
		stack<int>s;
		int arr[n];
		bool state = true;
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		int need = 1;
		for(int i=0;i<n;i++)
		{
			while (!s.empty() && s.top() == need) {
		need++;
		s.pop();
	}
	if (arr[i] == need) {
		need++;
	} else if (!s.empty() && s.top() < arr[i]) {
		state = false;
		break;
	} else {
		s.push(arr[i]);
	}
}
if (state) cout << "yes" << "\n";
else cout << "no" << "\n";	
		
		
		
	}
	return 0;
}

