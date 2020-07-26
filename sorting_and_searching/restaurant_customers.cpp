#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
    int n;
    cin>>n;
    int a[n];
    int b[n];
    for(int i=0;i<n;i++)
    cin>>a[i]>>b[i];
    int count=0;
    int maximum=-1;
    sort(a,a+n);sort(b,b+n);
    int k=0,j=0;
    while(k<n && j<n)
    {
        if(a[k]<=b[j])
        {
            count++;
            k++;
        }
        else
        {
            count--;
            j++;
        }
        maximum=max(maximum,count);
        
    }
    cout<<maximum<<"\n";

}