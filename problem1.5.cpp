#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    long long n;
    vector<long long> even;
    vector<long long> odd;
    cin>>n;
    if(n==1)
    cout<<1<<"\n";
    else if(n<=3)
    cout<<"NO SOLUTION\n";
    else
    {
        for(int i=1;i<=n;i++)
        {
            if(i%2==0)
            even.push_back(i);
            else
            {
                odd.push_back(i);
            }
            
        }
        for(int j=0;j<even.size();j++)
        cout<<even[j]<<" ";
        for(int k=0;k<odd.size();k++)
        cout<<odd[k]<<" ";
        
    }
    
}