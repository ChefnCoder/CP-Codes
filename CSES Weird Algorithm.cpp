#include<bits/stdc++.h>
using namespace std;
# define endl '\n'
# define int long long

void code4_on9()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin); // for getting input file
    freopen("output.txt","w",stdout); // for getting output file
    #endif 
}

void weirdAlgorithm(int n)
{
    cout<<n;
    
    //base
    if(n==1)
    {
        return;
    }
    
    //calculation
    if(n%2==0)
    {
        n/=2;
    }else
    {
        n*=3;
        n++;
    }
    cout<<" ";
    return weirdAlgorithm(n);
}

signed main()
{
    code4_on9();
    int n;
    cin>>n;
    weirdAlgorithm(n);
}