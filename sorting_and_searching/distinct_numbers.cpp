#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int t=0;
    int count=0;
    while(t<n)
    {
        while(a[t]==a[t+1])
        t++;
        count++;
        t++;
    }
    cout<<count<<"\n";
}