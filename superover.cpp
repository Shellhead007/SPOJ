#include<bits/stdc++.h>
using namespace std;
int characterCount(std::string in)
{
    int count = 0;
    for(unsigned int i = 0; i < in.size(); ++i) {
        if (!isspace(in[i]))
            ++count;
    }
    return count;
}
int main()
{
	std::string s;
	std::getline(std::cin,s);
	int len = characterCount(s);
	int b[3] = {0,0,0};
	int k=0;
	int w = 0,state = 0;
	for(int i=s[0];i<=s[len];i++)
	{
		if(w==2)
		break;
		else if(i=='O'||i=='o')
		{
			w = w+1;
			state = 2;
		}
		else if(i=='N'||i=='n'||i=='w'||i=='W')
		{
			continue;
	    }
	    else
	    {
	    	b[state] = b[state]+i;
	    	if(i%2==0)
	    	{
	    		state=0;
			}
			else
			{
				state++;
			}
		}
	}
	for(int i=0;i<3;i++)
	{
		cout<<b[i];
		cout<<endl;
	}
	return 0;
}
