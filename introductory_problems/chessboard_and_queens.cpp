#include <bits/stdc++.h>
#include <algorithm>
#include <cstdlib>
using namespace std;

int main(){

    char a[8][8];
    int count=0;
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            cin>>a[i][j];
            if(a[i][j]=='*')
            count++;
        }
        
    }


}