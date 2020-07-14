#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
using namespace std;
int flag=0;
void summation(vector<int> v,int sum,int n,vector<int> b)
{
    if(flag==0)
    {
        if(sum==0)
        {
            flag=1;
            cout<<"YES"<<"\n";
            cout<<v.size()<<"\n";
            for(int k=0;k<v.size();k++)
            cout<<v[k]<<" ";
            cout<<"\n";
            cout<<b.size()<<"\n";
            for(int s=0;s<b.size();s++)
            cout<<b[s]<<" ";
        }
        else if(sum<0)
        return;
        else
        {
            v.push_back(n);
            summation(v,sum-n,n-1,b);
            v.pop_back();
            b.push_back(n);
            summation(v,sum,n-1,b);
        }
    }
    
}
int main(){
    long long n;
    cin>>n;
    //int a[n];
    if(n*(n+1)%4!=0)
    {
        cout<<"NO"<<"\n";
    }
    else
    {
        int sum=(n*(n+1))/4;
        vector<int> v;
        vector<int> b;
        summation(v,sum,n,b);
        if(flag==0)
        cout<<"NO"<<"\n";
    }
    
}