#include<bits/stdc++.h>
using namespace std;
int perm(int k)
{
 if (k <= 1)
        return 1;
    return k*perm(k-1);
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int m;
		cin>>m;
		int d = perm(m+m);
		int f = perm(m);
		
		cout<<(d/(f*f))<<endl;
	}
	return 0;
}
