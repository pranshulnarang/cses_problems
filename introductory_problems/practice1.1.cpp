#include <bits/stdc++.h>
#include <vector>
using namespace std;
void search(int k,int n)
{
    vector<int> vecta;
    if(k==n+1)
    {
        cout<<"vecta size is"<<vecta.size()<<"\n";
        for(int i=0;i<vecta.size();i++)
        {
            cout<<vecta[i]<<" ";
        }
        cout<<"\n";
    }
    else
    {
        vecta.push_back(k);
        cout<<"K is "<<k<<"\n";
        cout<<"Vecta element 1 is "<<vecta[1]<<"\n";
        search(k+1,3);
        vecta.pop_back();
        search(k+1,3);
    }
    
}

int main(){
    int a[]={1,2,3};
    search(1,3);


}