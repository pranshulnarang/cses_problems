#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    long long n;
    cin>>n;
    int flag=0;
    vector<long long> a;
    vector<long long> b;
    if(n%4==1||n%4==2)
    {
        cout<<"NO\n";
        flag=1;
    }
    else if(n%4==3)
    {
        a.push_back(1);
        a.push_back(2);
        b.push_back(3);
        for(int i=4;i<=n;i++)
        {
            if(i%4==3||i%4==0)
            a.push_back(i);
            else
            {
                b.push_back(i);
            }
            
        }
    }
    else if(n%4==0)
    {
        a.push_back(1);
        a.push_back(4);
        b.push_back(2);
        b.push_back(3);
        for(int i=5;i<=n;i++)
        {
            if(i%4==1||i%4==0)
            a.push_back(i);
            else
            {
                b.push_back(i);
            }
            
        }
    }
    if(flag==0)
    {
        cout<<a.size()<<"\n";
        for(int j=0;j<a.size();j++)
        cout<<a[j]<<" ";
        cout<<"\n";
        cout<<b.size()<<"\n";
        for(int j=0;j<b.size();j++)
        cout<<b[j]<<" ";
        cout<<"\n";
    }
    
    
}