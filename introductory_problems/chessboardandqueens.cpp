#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int col[8],diag1[15],diag2[15];
int count1=0;
int index1(int star[50][2],int y,int x,int countstar)
{
    for(int i=0;i<countstar;i++)
    {
        if(star[i][0]==y && star[i][1]==x)
        return 1;
    }
    return 0;
}
void search(int y,int star[50][2],int countstar) {
    if (y == 8) {
    count1++;
    return;
    }
    for (int x = 0; x < 8; x++) {
    if (col[x] || diag1[x+y] || diag2[x-y+7] || index1(star,y,x,countstar)) 
    {
        continue;
    }
    col[x] = diag1[x+y] = diag2[x-y+7] = 1;
    search(y+1,star,countstar);
    col[x] = diag1[x+y] = diag2[x-y+7] = 0;
    }
}

int main()
{
    int countstar=0;
    int star[50][2];
    for(int i=0;i<8;i++)
    col[i]=0;
    for(int j=0;j<15;j++)
    {
        diag1[j]=0;
        diag2[j]=0;
    }
    char a[8][8];
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            cin>>a[i][j];
            if(a[i][j]=='*')
            {
                star[countstar][0]=i;
                star[countstar][1]=j;
                countstar++;
            }
        }
    }
    search(0,star,countstar);
    cout<<count1<<"\n";
}
