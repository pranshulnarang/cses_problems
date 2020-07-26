#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    long long t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        long long a,b;
        cin>>a>>b;
        if((a+b)%3!=0)
        cout<<"NO\n";
        else if(b>2*a||a>2*b)
        cout<<"NO\n";
        else if((2*a-b)>=0 && (2*b-a)>=0 && (2*a-b)%3==0 && (2*b-a)%3 ==0)
        {
            cout<<"YES\n";
        }
        else
        cout<<"NO\n";
        
        
    }
    
}
