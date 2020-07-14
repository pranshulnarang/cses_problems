#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
using namespace std;
int flag=0;
void summation(vector<int> v,int sum,int j,int n,vector<int> b)
{

    if(flag==0)
    {
            if(j==n+1 && accumulate(v.begin(),v.end(),0)!=sum)
            return ;
            if(accumulate(v.begin(),v.end(),0)>sum)
            {
                return ;
            }
            if(accumulate(v.begin(),v.end(),0)==sum)
            {
                cout<<"YES"<<"\n";
                flag=1;
                cout<<v.size()<<"\n";
                for(int i=0;i<v.size();i++)
                cout<<v[i]<<" ";
                cout<<"\n";
                //cout<<"Now starting b"<<"\n";
                //cout<<b.size()<<"\n";
                //for(int k=0;k<b.size();k++)
                //cout<<b[k]<<" ";
                //cout<<"\n";
                cout<<n-v.size()<<"\n";
                int k=0;
                while(k<v.size()-1)
                {
                    if(v[0]>1)
                    {
                        for(int l=1;l<v[0];l++)
                        cout<<l<<" "<<"f";
                    }
                    for(int l=v[k]+1;l<v[k+1];l++)
                    cout<<l<<" ";
                    k++;
                    
                }
                if(v[v.size()-1]<n)
                {
                    for(int l=v[v.size()-1]+1;l<=n;l++)
                    cout<<l<<" ";
                }
            }
            else
            {
                v.push_back(j);
                summation(v,sum,j+1,n,b);
                v.pop_back();
                //b.push_back(j);
                summation(v,sum,j+1,n,b);
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
        cout<<"FUCK"<<"\n";
    }
    else
    {
        int sum=(n*(n+1))/4;
        vector<int> v;
        vector<int> b;
        summation(v,sum,1,n,b);
        if(flag==0)
        {
            cout<<"NO"<<"\n";
            cout<<"FUCKoff"<<"\n";
        }
    }
    
}