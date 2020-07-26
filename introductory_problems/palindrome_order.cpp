#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    string a;
    cin>>a;
    sort(a.begin(),a.end());
    int count=1;
    int flag=0;
    int oddcount=0;
    int totalcount=0;
    int oddindex;
    vector<int> b;
    int i=0;
    while(i<a.size())
    {
        count=1;
        while(a[i]==a[i+1])
        {
            count++;
            i++;
        }
        b.push_back(count);
        totalcount++;
        if(count%2!=0)
        {
            oddcount++;
            oddindex=i;
        }
        i++;
        if(oddcount>1)
        {
            cout<<"NO SOLUTION\n";
            flag=1;
            break;
        }

    }
    if(flag==0)
    {
        int start=0;
        string b;
        for(int j=0;j<b.size();a++)
        {
            if(b[j]%2!=0)
            {
                continue;
                start=start+b[j];
            }
            else
            {
                for(int k=start;k<start+(b[j]/2);k++)
                {
                    b.push_back(a[k]);
                }

            }
            
        }
    } 
}
