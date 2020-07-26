#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
    long long n;
    cin>>n;
    long long a[n];
    long long i;
    for(i=0;i<n;i++)
    cin>>a[i];
    long long best=-10000000,sum=-10000000;
    for(i=0;i<n;i++)
    {
        sum=max(a[i],a[i]+sum);
        best=max(best,sum);
    }
    cout<<best<<"\n";


}