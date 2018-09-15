#include <bits/stdc++.h>
using namespace std;
 
 
int main()
{
    int i,j,m,n,t,temp;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&m);
        scanf("%d",&n);
        for(i=m;i<=n;i++)
        {
            if(i==2)
        {
            printf("%d\n",i);
        }
        else if(i%2==0 || i==1)
        {
        	
        }
          else {
              temp=sqrt(i);
                for(j=2;j<=temp;j++)
           {
               if(i%j==0)
               {
                   break;
               }
           }
           if(j>temp)
           {
               printf("%d \n",i);
           }
        }
        }
        printf("\n");
}
}
 
