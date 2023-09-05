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

int CountingDivisors(int n)
{
    int end = sqrt(n);
    //cout<<end;
    
    int count=0;
    for(int i=1;i<=end;i++)
    {
        
        if(n%i==0)
        {
            if(i==end)
            {
                count++;
                return count;
            }
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