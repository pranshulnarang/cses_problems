#include <bits/stdc++.h>
using namespace std;

int main(){

    long long n,x;
    cin>>n>>x;
    long long p[n];
    int i;
    for(i=0;i<n;i++)
    cin>>p[i];
    sort(p,p+n);
    int j=0;i=n-1;
    int count=0;
    while(j<=i)
    {
        if(p[j]+p[i]<=x && j!=i)
        {
            count++;
            j++;
            i--;
        }
        else
        {
            count++;
            i--;
        }
        
    }
    cout<<count<<"\n";
}