#include <bits/stdc++.h>
#include <algorithm>
#include <cstdlib>
using namespace std;
long long minimum=500000000000;
void subsetsum(vector<long long> a,vector<long long> b,int k,int n,long long sum)
{
    if(k==n+1)
    {
        if(abs(sum-2*accumulate(b.begin(),b.end(),0))<=minimum)
        minimum=abs(sum-2*accumulate(b.begin(),b.end(),(long long)0));
        return;
    }
    else
    {
        b.push_back(a[k]);
        if(abs(sum-2*accumulate(b.begin(),b.end(),0))<=minimum)
        {
            //long long sum_present=accumulate(b.begin(),b.end(),(long long)0);
            //cout<<"Present sum is "<<sum_present<<"\n";
            minimum=abs(sum-2*accumulate(b.begin(),b.end(),(long long)0));
            //cout<<"b.size() is "<<b.size()<<"\n";
            //for(int z=0;z<b.size();z++)
            //cout<<b[z]<<" ";
            //cout<<"\n";
            //cout<<"p\n";
        }
        subsetsum(a,b,k+1,n,sum);
        b.pop_back();
        if(abs(sum-2*accumulate(b.begin(),b.end(),(long long)0))<=minimum)
        minimum=abs(sum-2*accumulate(b.begin(),b.end(),(long long)0));
        subsetsum(a,b,k+1,n,sum);

    }
    
}
int main()
{
   long long n;
   cin>>n;
   long long x;
   vector<long long> a;
   vector<long long> b;
   long long sum=0;
   for(int i=0;i<n;i++)
   {
       cin>>x;
       a.push_back(x);
       sum=sum+x;
   }
   subsetsum(a,b,0,a.size()-1,sum);
   //cout<<sum<<"\n";
   cout<<minimum<<"\n";
   
}
