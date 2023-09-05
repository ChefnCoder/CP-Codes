#include<bits/stdc++.h>
#define ll Long Long
using namespace std;

void code4_on9()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin); // for getting input file
    freopen("output.txt","w",stdout); // for getting output file
    #endif 
}


int main()
{ 
    code4_on9();
    int n;
    cin>>n;
    switch (n)
    {
    case 1:
        cout<<"Its 1"<<endl;

    case 2:
        cout<<"Its 2"<<endl;

    case 18:
        cout<<"Its 18"<<endl;
        break;

    default:
        cout<<"Nothing Matched";
        break;
    }
    return 0;
}