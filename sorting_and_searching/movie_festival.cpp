#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
    int n;
    cin>>n;
    pair<int, int> a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i].second>>a[i].first;
    }
    sort(a,a+n);
    int count=1;
    int endingtime=a[0].first;
    for(int j=1;j<n;j++)
    {
        if(a[j].second>=endingtime)
        {
            count++;
            endingtime=a[j].first;
        }
    }
    cout<<count<<"\n";

}