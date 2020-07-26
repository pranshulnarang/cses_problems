#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    long long n,x;
    cin>>n>>x;
    long long a[n],b[n];
    for(long long j=0;j<n;j++)
    {
        cin>>a[j];
        b[j]=a[j];
    }
    sort(a,a+n);
    int flag=0;
    long long element1,element2;
    long long l,r;
    l=0;r=n-1;
    while(a[r]>x)
    r--;
    while(l<r)
    {
        if(a[l]+a[r]==x)
        {
            flag=1;
            element1=a[l];
            element2=a[r];
            break;
        }
        else if(a[l]+a[r]<x)
        {
            l++;
        }
        else if(a[l]+a[r]>x)
        {
            r--;
        }
    }
    long long index1;
    if(flag==0)
    cout<<"IMPOSSIBLE\n";
    else
    {
        for(int i=0;i<n;i++)
        {
            if(b[i]==element1)
            {
                cout<<i+1<<" ";
                index1=i;
                break;
            }
        }
        for(int j=0;j<n;j++)
        {
            if(b[j]==element2 && j!=index1)
            {
                cout<<j+1<<" ";
                break;
            }
        }
        cout<<"\n";
    }
    
    

}