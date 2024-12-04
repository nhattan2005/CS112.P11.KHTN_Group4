#include <bits/stdc++.h>
using namespace std;
int64_t n,a[100001],f[100001],k;
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        f[i]=INT_MAX;
    }
    f[1]=0;
    for(int i=2;i<=n;i++)
    {
        for(int j=i-k;j<i;j++)
        {
            if(j>=1)
                f[i]=min(f[j]+abs(a[i]-a[j]),f[i]);
        }
    }
    cout<<f[n];
    return 0;
}
