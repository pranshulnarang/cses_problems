#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int factorial(int n) 
{ 
    // single line to find factorial 
    return (n==1 || n==0) ? 1: n * factorial(n - 1);  
}
void permutations(string n,int k,int size,string final,bool chosen[])
{
    if(k==size+1)
    return;
    else
    {
        final.push_back(a[k]);

    }
    

} 
int main()
{
    string n;
    cin>>n;

}
