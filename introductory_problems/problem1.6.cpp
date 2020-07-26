#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    long long t;
    cin>>t;
    for(long long i=0;i<t;i++)
    {
        long long x,y;
        cin>>y;
        cin>>x;
        if(y>=x && y%2==0)
        {
            cout<<(y*y)-(x-1)<<"\n";
        }
        else if(y>=x && y%2!=0)
        {
            cout<<(y-1)*(y-1)+(x)<<"\n";
        }
        else if(x>=y && x%2==0)
        {
            cout<<(x-1)*(x-1)+y<<"\n";
        }
        else if(x>=y && x%2!=0)
        {
            cout<<(x*x)-(y-1)<<"\n";
        }
    }
}