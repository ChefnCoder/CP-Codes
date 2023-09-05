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
    int t;
    cin>>t;
    while(t--)
    {
        int ans;
        int max_diff=0;
        int s,l;
        cin>>s>>l;
        for(int j=s;j<=l;j++)
        {
              int i=j;  
              int maxm=i%10;
                int minm=i%10;
                i=i/10;
                while(i>0)
                {
                    int digit=i%10;
                    if(digit>maxm)
                        maxm=digit;
                    else if(digit<minm)
                        minm=digit;
                    i=i/10;
                }

            if((maxm-minm)>=max_diff)
            {
                max_diff=maxm-minm;
                ans=j;
            }

        }
        cout<<ans<<endl;
    }
    return 0;
}

