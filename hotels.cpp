
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i, l;
    long long n, m, sum, max_sum;

    scanf("%lld%lld",&n, &m);

         int a[n];
        for(i=1; i<=n; i++)
        {
             scanf("%d", &a[i]);
        }
        l=1;
        max_sum = 0;
        sum = 0;
        for(i=1; i<=n; i++)
        {
            sum = sum + a[i];
            while(sum>m)
            {
                sum = sum - a[l];
                l++;
                if(max_sum<=sum && sum<=m)
                {
                    max_sum = sum;

                    break;
                }

            }
            if(max_sum<=sum && sum<=m)
            {
                max_sum = sum;

            }
        }
        printf("%lld\n", max_sum);

    return 0;
}
