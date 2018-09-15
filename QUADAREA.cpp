#include<bits/stdc++.h>
#include<iomanip>    
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		double a,b,c,d;
		cin>>a>>b>>c>>d;
		double semiperimeter = 0;          // BRAHMAGUPTA'S FORMULA
		semiperimeter = (a+b+c+d)/2.0;
		a = semiperimeter - a;
		b = semiperimeter - b;
		c = semiperimeter - c;
		d = semiperimeter - d;
		double k = sqrt(a*b*c*d);
		printf("%0.2lf\n",k);
	}
	return 0;
}