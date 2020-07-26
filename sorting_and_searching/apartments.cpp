#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n,m,k;
    cin>>n>>m>>k;
    long long a[n];
    long long i,j;
    for(i=0;i<n;i++)
    cin>>a[i];
    long long b[m];
    for(i=0;i<m;i++)
    cin>>b[i];
    sort(a,a+n);
    sort(b,b+m);
    long long count=0;
    long long index=0;
    /*for(i=0;i<n;i++)
    {
        for(j=index+1;j<m;j++)
        {
            if(b[j]>=a[i]-k && b[j]<=a[i]+k)
            {
                count++;
                index=j;
                break;
            }
        }
    }*/
    int t=0;
    int flag=0;
    while(index<m && t<n)
    {
       if(a[t]>b[index])
       {
            while(abs(b[index]-a[t])>k && index<m)
            {
                index++;
                if(b[index]>=a[t])
                {
                    flag=1;
                    break;
                }
            }
       }
       else
       {
            while(abs(b[index]-a[t])>k && index<m && t<n)
            {
                t++;
                if(a[t]>=b[index])
                {
                    flag=1;
                    break;
                }
            }
       }
       if(flag==1)
       {
           flag=0;
           continue;
       }
        count++;
        t++;
        index++;
    }
    cout<<count<<"\n";
}