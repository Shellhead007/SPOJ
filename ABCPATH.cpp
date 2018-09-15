#include<bits/stdc++.h>
using namespace std;
char mat[50][50];
int visited[50][50];
int countv=0; 
int n,m;
void dfsTraversal(int x,int y,int depthcount)
{
	countv=max(depthcount,countv);

	int dx[8]={-1,-1,-1,0,0,1,1,1};
    int dy[8]={-1,0,1,-1,1,-1,0,1};

    for(int i=0;i<8;i++)
    {
    	int tempx = x + dx[i];
    	int tempy = y + dy[i];

    	if((tempx>=0&&tempx<=n) && (tempy>=0&&tempy<=m) && (!visited[tempx][tempy]))
    	{
    		if(mat[tempx][tempy] == mat[x][y] + 1)
    		{
    			visited[tempx][tempy] = 1;
    			dfsTraversal(tempx,tempy,depthcount+1);
    		}
    	}
    }

}
int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
    cin.tie(0);
	int casecount = 0;
	cin>>n>>m;	
	while(n && m)
	{
		casecount++;
		countv = 0;
		for(int i =0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cin>>mat[i][j];
				visited[i][j] = 0;
			}
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				     if(mat[i][j]=='A')
                    {
                         visited[i][j]=1;
                         dfsTraversal(i,j,1);
                    }   
			}
		}
		printf("Case %d: %d\n",casecount,countv);
		cin>>n>>m;
	}
	return 0;
}