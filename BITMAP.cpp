/* multi source BFS practise */
#include<iostream>
#include<stdio.h>
#include<string.h>
#include<vector>
#include<utility>
#include<queue>
#include<algorithm>
#define si(t) scanf("%d",&t)
#define sii(t,t2) scanf("%d %d",&t,&t2)
#define sl(t) scanf("%lld",&t)
#define sll(t,t2) scanf("%lld %lld",&t,&t2)
#define pi(t) printf("%d\n",t)
#define pl(t) printf("%lld\n",t)
#define pii(t,t1) printf("%d %d\n",t,t1)
#define pll(t,t1) printf("%lld %lld\n",t,t1)
#define pp pair<int,int>
#define ll long long int
#define pb push_back
#define F first
#define S second
#define sz size()
#define mp make_pair
using namespace std;
#define boost     ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define DRT()     int test_case;cin>>test_case;while(test_case--)
#define pb        push_back
#define mp        make_pair
#define INF 100000000
#define SZ(a) (int)(a.size())
#define mod 1000000007
#define MAXN 1000

int main()
{
	boost;
	DRT()
	{
		int n,m;
		cin>>n>>m;
		int adj[n][m];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cin>>adj[i][j];
			}
		}
		
	}
	return 0;
}
