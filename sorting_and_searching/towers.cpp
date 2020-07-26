#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
    int n;
    cin>>n;
    int a[n];
    for(int h=0;h<n;h++)
    cin>>a[h];
    vector<int> arr;
    vector<int>::iterator iter;
    for(int i=0;i<n;i++)
    {
        iter = upper_bound(arr.begin(),arr.end(),a[i]);
        if(iter==arr.end())
        {
            arr.push_back(a[i]);
        }
        else
        {
            *iter=a[i];
        }
        
    }
    cout<<arr.size()<<"\n";

}