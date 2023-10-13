#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

void code4_on9()
{
    #ifndef ONLINE_JUDGE
    freopen("CSES input.txt","r",stdin); // for getting input file
    freopen("CSES output.txt","w",stdout); // for getting output file
    #endif 
}

vector <int> stringToVector (string inputString)
{
	vector<int> integerVector;
	for (int i = 0; i < inputString.length(); i++) 
	{
        char c = inputString[i];
        int intValue = static_cast<int>(c);
        integerVector.push_back(intValue);
    }
    return integerVector;
}

void print(vector<int>v)
{
	for(int i=0; i< v.size(); i++)
    {
    	cout<<v[i]<<" ";
    }
    cout<<endl;
}

vector<int> uniqueArray(vector<int>v)
{
	vector<int> newvec;
	int before = v[0];
	newvec.push_back(before);
	int now;
	for(int i=1;i<v.size();i++)
	{
		now = v[i];
		if(now!=before)
		{
			newvec.push_back(now);
		}
		before=now;
	}
	return newvec;
}

signed main() 

{
	code4_on9();
	string inputString;
	vector <int> outputvec;
	cin>>inputString;

	//string to integer 
	vector<int> integerVector = stringToVector(inputString);
	//print(integerVector);

	//sorting vector
	sort(integerVector.begin(), integerVector.end());
    //print(integerVector);
    
    //keeping only one from multiples
    vector<int> uniqueVector = uniqueArray(integerVector);
    //print(uniqueVector);
    cout<<uniqueVector.size();

}