#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    int n;
    cin>>n;
    long long a[n+1];
    a[0]=0;
    a[1]=0;
    a[2]=6;
    a[3]=28;
    a[4]=96;
    a[5]=252;
    if(n>5)
    {
        for(int j=6;j<n+1;j++)
        {
            //a[j]=0;
            a[j]=a[j-1]+((3)*(j*j-2))+(4*(j*j-3))+((2*j-8)*(j*j-4))-(j*(2*j-1))+2;
            //cout<<a[j]<<endl;
        }
    }
    for(int p=1;p<=n;p++)
    cout<<a[p]<<"\n";
    
}