#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
using namespace std;

int main(){

    long long n;
    cin>>n;
    long long i=0;
    long long a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    long long count=0;
    i=0;
    while(i<n-1)
    {
        if(a[i]>a[i+1])
        {
            count+=a[i]-a[i+1];
            a[i+1]=a[i];
        }
        i++;

    }
    cout<<count<<endl;
}