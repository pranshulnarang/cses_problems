#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    long long value=1;
    for(long long i=1;i<=n;i++)
    {
        value=value*2;
        value =value%(1000000007);
    }
    cout<<value<<"\n";
}
