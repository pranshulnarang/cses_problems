#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    long long sum=0;
    long long factor=5;
    while((n/factor)!=0)
    {
        sum+=n/factor;
        //n=n/factor;
        factor=factor*5;
    }
    cout<<sum<<"\n";
}
