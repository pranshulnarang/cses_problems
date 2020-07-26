#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <map>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
    int n;
    cin>>n;
    long long a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    map<int,int> m;
    long long count=0;
    long long start=0;
    long long ans=0;
    for(int i=0;i<n;i++)
    {
        if(m.find(a[i])==m.end()){
            count++;
            m[a[i]]=i;
        }
        else
        {
            if(m[a[i]]<start)
            {
                count++;
                m[a[i]]=i;
            }
            else
            {
                start=m[a[i]]+1;
                m[a[i]]=i;
                count=i-start+1;
            }
            
        }
        ans=max(ans,count);
    }
    cout<<ans<<"\n";
    
}