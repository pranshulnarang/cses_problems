#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <map>
#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    vector< pair <int,pair<int,int> > > p ;
    vector< pair <int,pair<int,int> > > d ;
    for(int i=0;i<n;i++)
    {
        int temp1,temp2;
        cin>>temp1>>temp2;
        p.push_back({temp1,{temp2,i}});
        d.push_back({temp1,{temp2,i}});
    }
    sort(p.begin(),p.end());
    vector<int> b;
    b.push_back(p[0].second.first);
    int rooms[200005];
    rooms[p[0].second.second]=1;
    vector<int>::iterator iter;
    for(int j=1;j<n;j++)
    {
        for(iter=b.begin();iter<b.end();iter++)
        {
            if(*iter<p[j].first)
            break;
        }
        //iter = min_element(b.begin(),b.end());
        //cout<<"The minimum element is "<<*iter<<endl;
        if(iter==b.end())
        {
            //cout<<"FUCK"<<endl;
            b.push_back(p[j].second.first);
            int temp=b.size();
            rooms[p[j].second.second]=temp;
        }
        else
        {
            //cout<<"HELL"<<endl;
            *iter=p[j].second.first;
            int temp2=distance(b.begin(),iter);
            rooms[p[j].second.second]=temp2+1;
        }
        
    }
    //cout<<*max_element(rooms.begin(),rooms.end())<<"\n";
    int max=-1;
    for(int i=0;i<n;i++)
    {
        if(rooms[d[i].second.second]>max)
        max=rooms[d[i].second.second];
    }
    cout<<max<<"\n";
    for(int i=0;i<n;i++)
    cout<<rooms[d[i].second.second]<<" ";
}