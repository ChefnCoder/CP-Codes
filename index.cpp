#include <bits/stdc++.h>
using namespace std;

int main() {
	// Your code goes here;
	vector<int> a={1,2,3,5,7};
	vector<int> b={1,3,4,5,6,8,9};
	vector<int> newarr;
    int i=0; //to iterate over vector a
    int j=0; //to iterate over vector b
    //we need to stop when either of vector is completely filled
    while(i<a.size()&&j<b.size())
    {
        if(a[i]<b[j])
        {
            newarr.push_back(a[i]);
            i++;
        }
        else if(b[j]<a[i])
		{
			newarr.push_back(b[j]);
        	j++;
		} 
		else
		{
			newarr.push_back(a[i]);
			i++;
			j++;
		}
        
    }
    while(i<a.size())
    {
         newarr.push_back(a[i]);
            i++;
    }
    while(j<b.size())
    {
        newarr.push_back(b[j]);
        j++;
    }
	
	for(int k=0;k<newarr.size();k++)
	{
		cout<<newarr[k]<<", ";
	}
	return 0;
}