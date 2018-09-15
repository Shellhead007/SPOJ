#include<iostream>
#include<stdio.h>
#include<string.h>
#include<vector>
#include<utility>
#include<queue>
#include<algorithm>
#include<math.h>
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
#define pLL pair<ll,ll>
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
const int N = 3e5 + 5;
#define MAX 10005;
void SieveOfEratosthenes(int x,int n)
{
    // Create a boolean array "prime[0..n]" and initialize
    // all entries it as true. A value in prime[i] will
    // finally be false if i is Not a prime, else true.
    bool prime[x+1];
    int prime1[x+1];
    memset(prime, true, sizeof(prime));
 
    for (int p=2; p*p<=x; p++)
    {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true)
        {
            // Update all multiples of p
            for (int i=p*2; i<=x; i += p)
                prime[i] = false;
        }
    }
 	int i=0;
    // Print all prime numbers
    for (int p=2; p<=x; p++)
       { 
       	  if (prime[p])
          {
          	prime1[i] = p;
          	i++;
          }
          
       }
      cout<<prime1[n-1]<<endl;
}
int main(int argc, char const *argv[])
{
	/* code */
	int n;
	
	while(cin>>n)
	{
		if(n==0)
			break;
		else
		{
		SieveOfEratosthenes(3000,n);
		//int count = 0;
		//cout<<prime1[n]<<endl;
		}	
	}
	return 0;
}