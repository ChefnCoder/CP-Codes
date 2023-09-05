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

int increasingArray(int n, int arr[])
{
    int totalCount=0;
    int *b4 = &arr[0];
    int *now = &arr[1];
    for(int i=1;i<n;i++)
    {
        //cout<<*b4<<" "<<*now<<endl;
        if(*b4 > *now)
        {
            int count = 0;
            count = *b4 - *now;
            *now += count;
            totalCount+=count;
            
        }
        
        b4 = &arr[i];
        now = &arr[i+1];
    }
    return totalCount;
}


signed main()
{
    code4_on9;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    cout<< increasingArray(n,arr)<<endl;
    
    
}