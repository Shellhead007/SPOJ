#include<bits/stdc++.h>
#include<vector>
#include<map>
#include<string>
#include<cstdlib>
#include<queue>
#include<stack>
#include<utility>
#include<string>
#include<cstring>
#include<set>
#include<cmath>
#include<vector>
#include<fstream>
#include<list>
#include<algorithm>
using namespace std;
#define inp_s     ios_base::sync_with_stdio(false)
#define DRT()     int test_case;cin>>test_case;while(test_case--)
#define pb        push_back
#define mp        make_pair
#define INF 100000000
#define in_range(x, y, r, c) (x >= 0 && x < r && y >= 0 && y < c)
char mat[1000][1000];
int dis[1000][1000];
void init(int r,int c)
{
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			dis[i][j] = INF;		
		}
	}	
}
void bfs(int startx,int starty,int r,int c)
{
	dis[startx][starty] = 0;
	deque<pair<int,int> >q;
	pair<int,int>p;
	
	q.push_front(make_pair(startx,starty));
	while(!q.empty())
	{
		p = q.front();
		q.pop_front();
		int x = p.first;
		int y = p.second;
		int a[] = {0,-1,0,1};
		int b[] = {-1,0,1,0};
		for(int i=0;i<4;i++)
		{
			int tmpX = x + a[i];
			int tmpY = y + b[i];
			if(in_range(tmpX,tmpY,r,c))
			{
				if(mat[tmpX][tmpY] == mat[x][y] && dis[tmpX][tmpY] > dis[x][y])
				{
                    q.push_front(make_pair(tmpX, tmpY));
					dis[tmpX][tmpY] = dis[x][y];
				}
				else if(mat[tmpX][tmpY]!=mat[x][y])
				{
					if(dis[tmpX][tmpY] > dis[x][y] + 1)
					{
					    q.push_back(make_pair(tmpX, tmpY));
						dis[tmpX][tmpY] = dis[x][y] + 1;
					}
				}
			}
		}	
	}
}
int main()
{
	inp_s;
	DRT()
	{
		int r,c;
		cin>>r>>c;
	//	vector<string>arr[n];
		for(int i=0;i<r;i++)
		{
			for(int j=0;j<c;j++)
			{
				cin>>mat[i][j];
			}
		}
		init(r, c);
		bfs(0,0,r,c);
		cout << dis[r-1][c-1] << endl;
	}
}
