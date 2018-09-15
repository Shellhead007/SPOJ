#include<bits/stdc++.h>
#include<algorithm>
#include<string>
using namespace std;
int all_digits_nine(string str)
{
	for(int i=0;i<str.length();i++)
	{
		if(str[i]!='9')
		return 0;
	}
	return 1;
}
int main()
{
	std::ios::sync_with_stdio(false);
	int t;
	string str;
	cin>>t;
	while(t--)
	{
		cin>>str;
		int i,j,num;
		char ans[str.length()+3];
		int n = str.length();
		
		if(all_digits_nine(str))
		{
			ans[0] = '1';
			for(int i=0;i<n;i++)
			{
				ans[i+1] = '0';
			}
			ans[n]= '1';
			ans[n+1] = '\0';
			cout<<ans<<endl;
		}
		else
		{
			i = n/2;
			j=i;
			if(n%2==0)
			i = i-1;
			
			while(i>=0 && str[i]==str[j])
			{
				i--;
				j++;
			}
			
			if(i<0 || str[i]<str[j])
			{
			   i = n/2;
			   j=i;
			   if(n%2==0)
			   i = i-1;
			   
			   int carry = 1;
			   while(i>=0)
			   {
			   	num = ((str[i]-'0')+carry);
			   	carry = num/10;
			   	str[i] = (num%10)+'0';
			   	str[j] = str[i];
			   	i--;j++;
			   }
			     	
			}
			else
			{
				while(i>=0)
				{
					str[j] = str[i];
					i--;j++;
				}
			}
			cout<<str<<endl;
		}
	}


	return 0;
}
