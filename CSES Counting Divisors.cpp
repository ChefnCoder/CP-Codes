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

int CountingDivisors(int &n)
{
    int count=0;
    for(int i=1;i<=sqrt(n);i++)
    {
        if(i==sqrt(n))
        {
            count++;
            return count;
        }
        if(n%i==0)
        {
            count+=2;
        }
    }
    return count;
}

signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<< CountingDivisors(n)<<endl;
    }
}