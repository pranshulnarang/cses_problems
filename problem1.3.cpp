#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    string a;
    cin>>a;
    int n=a.size();
    int b[n];
    for(int k=0;k<n;k++)
    b[k]=1;
    int i=0;
    int t=0;
    int ans=-5;
    while(i<n)
    {
        while(a[i]==a[i+1])
        {
            i++;
            b[t]++;
        }
        ans=max(ans,b[t]);
        i++;
        t++;
        
    }

    cout<<ans<<"\n";
}