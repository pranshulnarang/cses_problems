#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
    int n;
    cin>>n;
    long long a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    sort(a,a+n);
    long long sum=0;
    long long temp=a[n/2];//The minimum value of these sum of modulus occurs at the median of the value of array
    for(int i=0;i<n;i++)
    {
        sum=sum+abs(a[i]-temp);
    }
    cout<<sum<<"\n";
}