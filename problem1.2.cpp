#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long a[n-1];
    long long sum=0;
    for(long long i=0;i<n-1;i++)
    {
        cin>>a[i];
        sum=sum+a[i];
    }
    cout<<(n*(n+1))/2-sum<<"\n";
}