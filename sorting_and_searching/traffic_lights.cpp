#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
    int x;
    cin>>x;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    long long maxdistance=x;
    set<int> b={0,x};
    multiset<int> distance={x};
    for(int j=0;j<n;j++)
    {
        auto iter = b.upper_bound(a[j]);
        long long left=*prev(iter);
        long long right=*iter;
        //long long index=std::distance(b.begin(),iter);
        b.insert(iter,a[j]);
        distance.erase(distance.find(right-left));
        distance.insert(a[j]-left);
        distance.insert(right-a[j]);
        cout<<*distance.rbegin()<<" ";
    }
    

}