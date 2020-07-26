#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    vector< pair <int,pair<int,int> > > p;
    int x,y;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        p.push_back({x,{-1,i}});
        p.push_back({y,{1,i}});
    }
    sort(p.begin(),p.end());
    //vector<int> b;
    vector<int> rooms;
    int ans[200005];
    int index,in_or_out,occupied=0,max_rooms=0;
    for(int j=0;j<2*n;j++)
    {
        index=p[j].second.second;
        in_or_out=p[j].second.first;
        if(in_or_out==1)
        {
            rooms.push_back(ans[index]);
        }
        else if(occupied==rooms.size())
        {
            ans[index]= ++max_rooms;
        }
        else
        {
            ans[index]=rooms[occupied++];
        }
        
    }
    cout<<max_rooms<<"\n";
    for(int j=0;j<n;j++)
    cout<<ans[j]<<" ";

}